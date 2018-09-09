/*
  Blink_Variable

  Varies the rate and duration in which an LED blinks.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

boolean currState = true;
int intDuration; 

void getDuration(boolean o)
{
  //intDuration = 1000;
  if (o == true) 
    intDuration = 500;
  else 
    intDuration = 2000;
}

void lightenUp (boolean b)
{
    getDuration(b);
    int i = 0;
    while (i < 5)
    {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(intDuration);                       // wait for a defined time
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(intDuration);                  // wait for a defined time
    i++;
  }
}

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  lightenUp(currState);
  currState = !currState;
}
