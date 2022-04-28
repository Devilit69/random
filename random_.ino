int i=1000,button,pin=2;
volatile int state = LOW;
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);
  attachInterrupt(digitalPinToInterrupt(pin), pres, CHANGE);

}

void loop() {
  i++;
  button = digitalRead(pin);
  if (i==9999){
  restart();}
  
}

void restart() {
  i=1000;
}

void pres(){
  
  Serial.println(i);
}
