void setup()
{
  
  Serial.begin(9600);
  Serial.println("Power On");
  
  for(int i=2;i<=10;i=i+2)
  {
    pinMode(i, OUTPUT);
    delay(1000); // Wait for 1000 millisecond(s)
   	Serial.println("Output Pin : "+String(i));
    delay(1000); // Wait for 1000 millisecond(s)
  }
  
  for(int i=3;i<=11;i=i+2)
  {
    pinMode(i, OUTPUT);
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Output Pin : "+String(i));
  }
  
  //pinMode(4, OUTPUT);
  //digitalWrite(4,HIGH);
  
}

void loop()
{
  
  String input_string;
  
  while(Serial.available()) {

    //Read the incoming data as string
    input_string= Serial.readString();
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Input is : "+input_string);

  }
  
  //if(input_string=="Check Counter IC")
  //{
    //TODO : Perform Counter IC Check
  //}
  
  if(input_string=="Check Output Pins")
  {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Check Output Pins");
    
    for(int i=3;i<=11;i=i+2)
    {

    	int val = digitalRead(i);
      	delay(1000); // Wait for 1000 millisecond(s)
      	Serial.println("Pin is : "+String(i));
      	delay(1000); // Wait for 1000 millisecond(s)	
      	Serial.println("The State of Pin is : "+String(val));
    }
    
  }
  
  if(input_string=="On Bulb 1")
  {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : On Bulb 1");
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2,HIGH);
//    digitalWrite(3,HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    int val = digitalRead(3);
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("The Output is : "+String(val));
    
  }
  
  if(input_string=="Off Bulb 1")
  {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Off Bulb 1");
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2,LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    int val = digitalRead(3);
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("The Output is : "+String(val));
    
  }

  if(input_string=="On Bulb 2")
  {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : On Bulb 1");
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4,HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    int val = digitalRead(5);
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("The Output is : "+String(val));
    
  }
  
  if(input_string=="Off Bulb 2")
  {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Off Bulb 1");
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4,LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    int val = digitalRead(5);
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("The Output is : "+String(val));
    
  }

  if(input_string=="On Bulb 3")
  {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : On Bulb 1");
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(6,HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    int val = digitalRead(7);
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("The Output is : "+String(val));
    
  }
  
  if(input_string=="Off Bulb 3")
  {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Off Bulb 1");
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(6,LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    int val = digitalRead(7);
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("The Output is : "+String(val));
    
  }

  if(input_string=="On Bulb 4")
  {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : On Bulb 1");
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(8,HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    int val = digitalRead(9);
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("The Output is : "+String(val));
    
  }
  
  if(input_string=="Off Bulb 4")
  {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Off Bulb 1");
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(8,LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    int val = digitalRead(9);
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("The Output is : "+String(val));
    
  }

  if(input_string=="On Bulb 5")
  {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : On Bulb 1");
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(10,HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    int val = digitalRead(11);
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("The Output is : "+String(val));
    
  }
  
  if(input_string=="Off Bulb 5")
  {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Operation is : Off Bulb 1");
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(10,LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    int val = digitalRead(11);
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("The Output is : "+String(val));
    
  }
  
}
