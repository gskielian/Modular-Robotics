#include <SoftwareSerial.h>

#define rxPin 2    // Connect to SOUT
#define txPin 3    // Connect to SIN

SoftwareSerial roboSerial =  SoftwareSerial(rxPin, txPin);

void setup()
{
  //set up communication pins
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  
  //begin serial communcation with speaking ic
  roboSerial.begin(9600);
 
 //Set up the speech module
  roboSerial.print('\n'); 
  while (roboSerial.read() != ':');  //wait until the speech-module is rdy
  delay(10);        
  roboSerial.flush();                 
  //end setup
}

void loop() 
{
 
  roboSerial.print('S'); // 'S' for speech, 'D' for demo
  roboSerial.print(""); //don't send newlines unless you want it to start to speak.
  roboSerial.print("Halt, Intruder Alert, Send the Hounds");
  roboSerial.print('\n');
  while (roboSerial.read() != ':'); //wait until ic is ready for more information (it will send a ":" character when rdy) 
 
  delay(500);
  
}

