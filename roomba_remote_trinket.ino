#include <tiny_IRremote.h>
#include <avr/power.h>

/*
The Adafruit Trinket 8MHz board should be chosed

Remote control for Roomba that only sends "Clean" three times
*/

IRsend irsend; // hardwired to pin 3; use a transistor to drive the IR LED for maximal range


void setup()
{
}

void loop()
{
  roomba_send(136);  // Send "Clean"
  delay(10);
  roomba_send(136);  // Send "Clean"
  delay(10);
  roomba_send(136);  // Send "Clean"
  while(true){
  // statement(s)
  }
}

void roomba_send(int code)
{

  int length = 8;
  unsigned int raw[length*2];
  unsigned int one_pulse = 3000;
  unsigned int one_break = 1000;
  unsigned int zero_pulse = one_break;
  unsigned int zero_break = one_pulse;

  int arrayposition = 0;

  for (int counter = length-1; counter >= 0; --counter) {
    if(code & (1<<counter)) {
      raw[arrayposition] = one_pulse;
      raw[arrayposition+1] = one_break;
    }
    else {
      raw[arrayposition] = zero_pulse;
      raw[arrayposition+1] = zero_break;
    }
    arrayposition = arrayposition + 2;
  }
  for (int i = 0; i < 4; i++) {
    irsend.sendRaw(raw, 15, 39);
    delay(40);
  }
}

