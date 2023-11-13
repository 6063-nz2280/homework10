//HW 10
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

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

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  // Serial.begin(9600);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  for (int i = 1; i < 5; i++) {
    digitalWrite(i, LOW);
  }
}

// the loop function runs over and over again forever
void loop() {
  long timeLapse = millis() % 60000;
  // Serial.println(timeLapse);

  if (timeLapse > 10000) {
    digitalWrite(0, HIGH);
  } else {
    digitalWrite(0, LOW);
  }
  if (timeLapse > 20000) {
    digitalWrite(1, HIGH);
  } else {
    digitalWrite(1, LOW);
  }
  if (timeLapse > 30000) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  if (timeLapse > 40000) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  if (timeLapse > 50000) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
  if (timeLapse > 60000) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }

  delay(100);
  // digitalWrite(0, HIGH);  // turn the LED on (HIGH is the voltage level)
  // delay(1000);                      // wait for a second
  // digitalWrite(0, LOW);   // turn the LED off by making the voltage LOW
  // delay(1000);                      // wait for a second
}
