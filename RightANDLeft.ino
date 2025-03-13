#include<SoftwareSerial.h>
#include<DFRobotDFPlayerMini.h>

SoftwareSerial mySoftwareSerial(10,11); //Rx, Tx
DFRobotDFPlayerMini myDFPlayer;

//Button Pins

const int redButtonLeft001 = 2;
const int blueButtonPin002 = 3;


void setup() {
  // put your setup code here, to run once:
  mySoftwareSerial.begin(9600);
  Serial.begin(115200);

  if(!myDFPlayer.begin(mySoftwareSerial)){

    Serial.println("Unable to begin: ");
    while(true);
  }
  myDFPlayer.volume(30); // Set volume value (0 up to 30)
  pinMode(redButtonLeft001, INPUT_PULLUP);
  pinMode(blueButtonPin002,INPUT_PULLUP);


}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(redButtonLeft001) == LOW){

    myDFPlayer.play(1); //Play next track
    delay(2500);   
  
   

  }
  else if(digitalRead(blueButtonPin002) == LOW){
  myDFPlayer.play(2); //Play next track
  delay(2500);   
  

  
  }

  else{

    //nothing to say
  }

 
}
