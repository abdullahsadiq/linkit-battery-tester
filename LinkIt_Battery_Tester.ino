int checkPin = A0; //Pin to check battery voltage level
int readValue;  //Stores the value read from Pin A0
float voltageLevel;   //Saves the voltage calculated from 0 to 5v

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);   //Initialize serial port
pinMode(checkPin,INPUT);  //Set the check pin as input
}

void loop() {
  // put your main code here, to run repeatedly:
readValue = analogRead(checkPin);   //Saves the value read from pin A0 in readValue variable
voltageLevel = readValue*0.0048;   //Multiply readValue by 0.0048 to give the voltage level

Serial.print("The battery is ");

if (voltageLevel >= 1.6){   //If votageLevel is equal to or less than 1.6, print "full" in the Serial Monitor
  Serial.println("full");
  }
else if (voltageLevel < 1.6 && voltageLevel > 1.3){   //Else if voltageLevel is less than 1.6 and greater than 1.6 print "just ok" in Serial Monitor
  Serial.println("just ok");
  }
else if (voltageLevel <= 1.3){   //Else if voltageLevel is less than 1.3 print "weak" in Serial Monitor
  Serial.println("weak");
  }
delay (2000);   //Wait 2 seconds
}
