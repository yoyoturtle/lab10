#include<IRremote.h>
const int irReceiverPin = 2;
const int buttonPin = 4;
int buttonState = 0;
IRsend irsend;
IRrecv irrecv(irReceiverPin);
decode_results results;
void setup() 
{
  Serial.begin(9600);

  pinMode(buttonPin, INPUT);
}

void loop() 
{

   buttonState = digitalRead(buttonPin);
   
   if(buttonState == HIGH)
   {
    irsend.sendNEC(0x4FB48B7, 32);
    Serial.print("X");
    
    }
   
}
