int bpin = 9;
int gpin = 11;
int rpin = 10;

int rval;
int bval;
int gval;

int sensorRead;

void setup()
{
  Serial.begin(9600); 
  pinMode(rpin, OUTPUT);
  pinMode(gpin, OUTPUT);
  pinMode(bpin, OUTPUT);
  

}

void loop()
{
 sensorRead = analogRead(A0);
 Serial.println(sensorRead);
 rval=map(sensorRead,0,400,0,255);
 gval=map(sensorRead,400,0,0,255);
 analogWrite(rpin,rval);
 analogWrite(gpin,gval);
 delay(10);
 
}



