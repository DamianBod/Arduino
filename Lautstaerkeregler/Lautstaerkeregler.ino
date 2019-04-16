/*
Ein Programm, welches verschiedene stärken der Lautstärke über LEDs anzeigt.
*/

//LEDs werden den Digital Inputs zugewiesen und Potentiometer wir Analogem Input zugewiesen
int light1 = 9;
int light2 = 8;
int light3 = 7;
int light4 = 6;
int light5 = 5;
int light6 = 4;
int light7 = 3;
int light8 = 2;
int pot = 0;

//LEDs werden mit den Inputs verbunden und Konsole wird gestartet
void setup() {
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(light3, OUTPUT);
  pinMode(light4, OUTPUT);
  pinMode(light5, OUTPUT);
  pinMode(light6, OUTPUT);
  pinMode(light7, OUTPUT);
  pinMode(light8, OUTPUT);
  Serial.begin(9600);
}

//Wert vom Potentiometer wird ausgelesen und in der Konsole ausgegeben und je nach dem wie hoch der Wert ist leuchten mehr oder weniger LEDs
//Bei jedem Durchgang wird die gebrauchte Anzahl LEDs eingeschaltet und nach kurzem Delay wieder ausgeschaltet
void loop() {
  pot = analogRead(A0);
  Serial.println(pot);
  if (pot == 0) {
    digitalWrite(light1, LOW);
  } else if (pot > 1 && pot <= 127) {
    digitalWrite(light1, HIGH);
    delay(10);
    digitalWrite(light1, LOW);
  } else if (pot > 127 && pot <= 255) {
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    delay(10);
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
  } else if (pot > 256 && pot <= 383) {
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    digitalWrite(light3, HIGH);
    delay(10);
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
  } else if (pot > 384 && pot <= 511) {
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    digitalWrite(light3, HIGH);
    digitalWrite(light4, HIGH);
    delay(10);
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    digitalWrite(light4, LOW);
  } else if (pot > 512 && pot <= 639) {
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    digitalWrite(light3, HIGH);
    digitalWrite(light4, HIGH);
    digitalWrite(light5, HIGH);
    delay(10);
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    digitalWrite(light4, LOW);
    digitalWrite(light5, LOW);
  } else if (pot > 640 && pot <= 767) {
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    digitalWrite(light3, HIGH);
    digitalWrite(light4, HIGH);
    digitalWrite(light5, HIGH);
    digitalWrite(light6, HIGH);
    delay(10);
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    digitalWrite(light4, LOW);
    digitalWrite(light5, LOW);
    digitalWrite(light6, LOW);
  } else if (pot > 768 && pot <= 895) {
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    digitalWrite(light3, HIGH);
    digitalWrite(light4, HIGH);
    digitalWrite(light5, HIGH);
    digitalWrite(light6, HIGH);
    digitalWrite(light7, HIGH);
    delay(10);
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    digitalWrite(light4, LOW);
    digitalWrite(light5, LOW);
    digitalWrite(light6, LOW);
    digitalWrite(light7, LOW);
  } else if (pot > 896) {
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    digitalWrite(light3, HIGH);
    digitalWrite(light4, HIGH);
    digitalWrite(light5, HIGH);
    digitalWrite(light6, HIGH);
    digitalWrite(light7, HIGH);
    digitalWrite(light8, HIGH);
    delay(10);
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    digitalWrite(light4, LOW);
    digitalWrite(light5, LOW);
    digitalWrite(light6, LOW);
    digitalWrite(light7, LOW);
    digitalWrite(light8, LOW);
  }
}
