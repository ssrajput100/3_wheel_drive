#define m1pin1 
#define m1pin2 
#define m1pwm 
#define m2pin1 
#define m2pin2 
#define m2pwm 
#define m3pin1 
#define m3pin2 
#define m3pwm 

int pwm1=40;
int pwm2=40;
int pwm3=40; 

void front()
    {
      digitalWrite(m2pin1,HIGH);
      digitalWrite(m2pin2,LOW);
      digitalWrite(m2pwm,pwm2);
      digitalWrite(m3pin1,LOW);
      digitalWrite(m3pin2,HIGH);
      digitalWrite(m3pwm,pwm3);
      digitalWrite(m1pin1,HIGH);
      digitalWrite(m1pin2,HIGH);
      Serial.println("Front");
      delay(500);
    } 

void back()
  {
      digitalWrite(m2pin1,LOW);
      digitalWrite(m2pin2,HIGH);
      digitalWrite(m2pwm,pwm2);
      digitalWrite(m3pin1,HIGH);
      digitalWrite(m3pin2,LOW);
      digitalWrite(m3pwm, pwm3);
      digitalWrite(m1pin1,HIGH);
      digitalWrite(m1pin2,HIGH);
      Serial.println("Going Back");
      delay(500);
    } 

void left()
{
      digitalWrite(m1pin1,LOW);
      digitalWrite(m1pin2,HIGH);
      digitalWrite(m1pwm,pwm1);
      digitalWrite(m2pin1,LOW);
      digitalWrite(m2pin2,HIGH);
      digitalWrite(m2pwm,pwm2);
      digitalWrite(m3pin1,HIGH);
      digitalWrite(m3pin2,LOW);
      digitalWrite(m3pwm,pwm3);
      Serial.println("Going Left");
      delay(500);
    } 

void right ()
{
      digitalWrite(m1pin1,HIGH);
      digitalWrite(m1pin2,LOW);
      digitalWrite(m1pwm,pwm1);
      digitalWrite(m2pin1,HIGH);
      digitalWrite(m2pin2,LOW);
      digitalWrite(m2pwm,pwm2);
      digitalWrite(m3pin1,LOW);
      digitalWrite(m3pin2,HIGH);
      digitalWrite(m3pwm, pwm3);
      Serial.println("Going Right");
      delay(500);
    } 

void diagonal_NW()
{
      digitalWrite(m1pin1,HIGH);
      digitalWrite(m1pin2,LOW);
      digitalWrite(m1pwm,pwm1);
      digitalWrite(m2pin1,LOW);
      digitalWrite(m2pin2,HIGH);
      digitalWrite(m2pwm,pwm2);
      digitalWrite(m3pin1,HIGH);
      digitalWrite(m3pin2,HIGH);
      Serial.println("Going North West");
      delay(500);
    } 

void diagonal_NE()
{
      digitalWrite(m1pin1,LOW);
      digitalWrite(m1pin2,HIGH);
      digitalWrite(m1pwm,pwm1);
      digitalWrite(m2pin1,HIGH);
      digitalWrite(m2pin2,HIGH);
      digitalWrite(m3pin1,HIGH);
      digitalWrite(m3pin2,LOW);
      digitalWrite(m3pwm,pwm3);
      Serial.println("Going North East");
      delay(500);
    } 

void diagonal_SW()
{
      digitalWrite(m1pin1,HIGH);
      digitalWrite(m1pin2,LOW);
      digitalWrite(m1pwm,pwm1);
      digitalWrite(m2pin1,HIGH);
      digitalWrite(m2pin2,HIGH);
      digitalWrite(m3pin1,LOW);
      digitalWrite(m3pin2,HIGH);
      digitalWrite(m3pwm,pwm3);
      Serial.println("Going South West");
      delay(500);
    } 

void diagonal_SE()
{
      digitalWrite(m1pin1,LOW);
      digitalWrite(m1pin2,HIGH);
      digitalWrite(m1pwm,pwm1);
      digitalWrite(m2pin1,HIGH);
      digitalWrite(m2pin2,LOW);
      digitalWrite(m2pwm,pwm2);
      digitalWrite(m3pin1,HIGH);
      digitalWrite(m3pin2,HIGH);
      Serial.println("Going South East");
      delay(500);
    } 

void rot_anticloc()
{
      digitalWrite(m1pin1,HIGH);
      digitalWrite(m1pin2,LOW);
      digitalWrite(m1pwm,pwm1);
      digitalWrite(m2pin1,HIGH);
      digitalWrite(m2pin2,LOW);
      digitalWrite(m2pwm,pwm2);
      digitalWrite(m3pin1,HIGH);
      digitalWrite(m3pin2,LOW);
      digitalWrite(m3pwm,pwm3);
      delay(500);
    } 

void rot_cloc()
{
      digitalWrite(m1pin1,LOW);
      digitalWrite(m1pin2,HIGH);
      digitalWrite(m1pwm,pwm1);
      digitalWrite(m2pin1,LOW);
      digitalWrite(m2pin2,HIGH);
      digitalWrite(m2pwm,pwm2);
      digitalWrite(m3pin1,LOW);
      digitalWrite(m3pin2,HIGH);
      digitalWrite(m3pwm,pwm3);
      delay(500);
  } 

void stop()
{
      digitalWrite(m2pin1,HIGH);
      digitalWrite(m2pin2,HIGH);
      digitalWrite(m3pin1,HIGH);
      digitalWrite(m3pin2,HIGH); 
      digitalWrite(m1pin1,HIGH);
      digitalWrite(m1pin2,HIGH);
      Serial.println("stop");
      delay(500);
    } 

void setup() 
{
  pinMode(m1pin1,OUTPUT);
  pinMode(m1pin2,OUTPUT);
  pinMode(m1pwm,OUTPUT);
  pinMode(m2pin1,OUTPUT);
  pinMode(m2pin2,OUTPUT);
  pinMode(m2pwm,OUTPUT);
  pinMode(m3pin1,OUTPUT);
  pinMode(m3pin2,OUTPUT);
  pinMode(m3pwm,OUTPUT);
  delay(500);
  Serial.begin(9600);
}

void loop() 
{
    forward();
   
    back();
    
    left();
    
    right();

    diagonal_NW();

    diagonal_NE();

    diagonal_SW();
    
    diagonal_SE(); 

    rot_cloc();
    
    rot_anticloc();
    
}
