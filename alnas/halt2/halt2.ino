/*
Measuring AC Current Using ACS712
*/

const int sensorIn = A0;

// use 100 for 20A Module and 66 for 30A Module
int mVperAmp = 66; 

double Voltage = 0;
double VRMS = 0;
double AmpsRMS = 0;

int in1=2,in2=3,in3=4,in4=5;

void setup(){
  
  Serial.begin(9600);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);

}

void loop(){

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  
  Voltage = getVPP();
  VRMS = (Voltage/2.0) *0.707; //root 2 is 0.707
  AmpsRMS = (VRMS * 1000)/mVperAmp;

  //Plotter
  Serial.print(0);  // To freeze the lower limit
  Serial.print(" ");
  Serial.print(5);  // To freeze the upper limit
  Serial.print(" ");
  Serial.println(AmpsRMS);
  
  //Monitor
//  Serial.print(AmpsRMS);
//  Serial.println("Amps RMS");
  
}

float getVPP()
{
  
  float result;
  int readValue; //value read from the sensor
  int maxValue = 0; // store max value here
  int minValue = 1024; // store min value here

  uint32_t start_time = millis();
  while((millis()-start_time) < 100) //sample for 100 mSec
  {
    readValue = analogRead(sensorIn);
    // see if you have a new maxValue
    if (readValue > maxValue)
    {
      /*record the maximum sensor value*/
      maxValue = readValue;
    }
    if (readValue < minValue)
    {
      /*record the minimum sensor value*/
      minValue = readValue;
    }
  }

  // Subtract min from max
  result = ((maxValue-minValue)*5.0)/1024.0;
  return result;

}
