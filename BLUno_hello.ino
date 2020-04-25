
int incomingByte = 0;
String incoming = "";   // for incoming serial string data


void setup() {
    Serial.begin(115200);               //initial the Serial
    Serial.write("started");

    pinMode(3, OUTPUT);

}
 

void loop()
{
  if(Serial.available() > 0)
  {
    String terminalText = Serial.readStringUntil('\n');

      Serial.println("I got something");
      Serial.println("my props:");



    if(terminalText == "LED_ON")
    {
      Serial.println("I turned on");
        digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)

    } 

       if(terminalText == "LED_OFF")
    {
      Serial.println("I turned on");
        digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)

    } 
    
     
  }
}
