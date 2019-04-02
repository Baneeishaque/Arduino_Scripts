void setup()
{
  
  Serial.begin(9600);
  Serial.println("Power On");
  
  for(int i=22;i<=53;i++)
  {
    pinMode(i, OUTPUT);
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Output Pin : "+String(i));
    digitalWrite(i, HIGH);
//    delay(1000); // Wait for 1000 millisecond(s)
  }
  
//  for(int i=3;i<=11;i=i+2)
//  {
//    pinMode(i, OUTPUT);
//    delay(1000); // Wait for 1000 millisecond(s)
//    Serial.println("Output Pin : "+String(i));
//  }
  
  //pinMode(4, OUTPUT);
  //digitalWrite(4,HIGH);
  
}

void loop()
{
  String input_string;
  
  while(Serial.available()) {

    //Read the incoming data as string
    input_string= Serial.readString();
    Serial.println("Input is : "+input_string);

  }
  
  //if(input_string=="Check Counter IC")
  //{
    //TODO : Perform Counter IC Check
  //}
  
  if(input_string=="Check Output Pins")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Check Output Pins");
    
    for(int i=22;i<=53;i++)
    {

    	int val = digitalRead(i);
//      	delay(1000); // Wait for 1000 millisecond(s)
      	Serial.println("Pin is : "+String(i));
//      	delay(1000); // Wait for 1000 millisecond(s)	
      	Serial.println("The State of Pin is : "+String(val));
    }
    
  }
  
  if(input_string=="Shut on")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Shut on");
    
    for(int i=22;i<=53;i++)
    {

//    	int val = digitalRead(i);
//      	delay(1000); // Wait for 1000 millisecond(s)
//      	Serial.println("Pin is : "+String(i));
//      	delay(1000); // Wait for 1000 millisecond(s)	
//      	Serial.println("The State of Pin is : "+String(val));
        digitalWrite(i,LOW);
    }
    
  }

  if(input_string=="Shut down")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Shut down");
    
    for(int i=22;i<=53;i++)
    {

//    	int val = digitalRead(i);
//      	delay(1000); // Wait for 1000 millisecond(s)
//      	Serial.println("Pin is : "+String(i));
//      	delay(1000); // Wait for 1000 millisecond(s)	
//      	Serial.println("The State of Pin is : "+String(val));
        digitalWrite(i,HIGH);
    }
    
  }
  
  if(input_string=="Off Bulb 1")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Off Bulb 1");
//    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(22,HIGH);
//    digitalWrite(3,HIGH);
//    delay(1000); // Wait for 1000 millisecond(s)
//    int val = digitalRead(3);
//    delay(1000); // Wait for 1000 millisecond(s)
//    Serial.println("The Output is : "+String(val));
    
  }
  
  if(input_string=="On Bulb 1")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : On Bulb 1");
//    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(22,LOW);
//    delay(1000); // Wait for 1000 millisecond(s)
//    int val = digitalRead(3);
//    delay(1000); // Wait for 1000 millisecond(s)
//    Serial.println("The Output is : "+String(val));
    
  }

  if(input_string=="Off Bulb 2")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Off Bulb 2");
//    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(23,HIGH);
//    delay(1000); // Wait for 1000 millisecond(s)
//    int val = digitalRead(5);
//    delay(1000); // Wait for 1000 millisecond(s)
//    Serial.println("The Output is : "+String(val));
    
  }
  
  if(input_string=="On Bulb 2")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Off Bulb n");
//    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(23,LOW);
//    delay(1000); // Wait for 1000 millisecond(s)
//    int val = digitalRead(5);
//    delay(1000); // Wait for 1000 millisecond(s)
//    Serial.println("The Output is : "+String(val));
    
  }

  if(input_string=="Off Bulb 3")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Off Bulb 3");
//    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(24,HIGH);
//    delay(1000); // Wait for 1000 millisecond(s)
//    int val = digitalRead(7);
//    delay(1000); // Wait for 1000 millisecond(s)
//    Serial.println("The Output is : "+String(val));
    
  }
  
  if(input_string=="On Bulb 3")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : On Bulb 3");
//    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(24,LOW);
//    delay(1000); // Wait for 1000 millisecond(s)
//    int val = digitalRead(7);
//    delay(1000); // Wait for 1000 millisecond(s)
//    Serial.println("The Output is : "+String(val));
    
  }

  if(input_string=="Off Bulb 4")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Off Bulb 4");
//    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(25,HIGH);
//    delay(1000); // Wait for 1000 millisecond(s)
//    int val = digitalRead(9);
//    delay(1000); // Wait for 1000 millisecond(s)
//    Serial.println("The Output is : "+String(val));
    
  }
  
  if(input_string=="On Bulb 4")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : On Bulb 4");
//    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(25,LOW);
//    delay(1000); // Wait for 1000 millisecond(s)
//    int val = digitalRead(9);
//    delay(1000); // Wait for 1000 millisecond(s)
//    Serial.println("The Output is : "+String(val));
//    
  }

  if(input_string=="Off Bulb 5")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Off Bulb 5");
//    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(26,HIGH);
//    delay(1000); // Wait for 1000 millisecond(s)
//    int val = digitalRead(11);
//    delay(1000); // Wait for 1000 millisecond(s)
//    Serial.println("The Output is : "+String(val));
    
  }
  
  if(input_string=="On Bulb 5")
  {
//    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : On Bulb 5");
//    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(26,LOW);
//    delay(1000); // Wait for 1000 millisecond(s)
//    int val = digitalRead(11);
//    delay(1000); // Wait for 1000 millisecond(s)
//    Serial.println("The Output is : "+String(val));
    
  }
  
}
