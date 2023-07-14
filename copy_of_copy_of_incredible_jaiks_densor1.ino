int led_Red = 5;
int led_yellow = 9;
int led_white = 11;
int counter = 0;
void setup()
{
pinMode(3 , INPUT);
pinMode(led_Red , OUTPUT);
pinMode(led_yellow , OUTPUT);
pinMode(led_white , OUTPUT);
}
void loop ()
{
int Button = digitalRead(3);
  if (Button==1) 
  {
  counter+=1;
    switch(counter)
    {
      counter++;
    case 1:
      digitalWrite(led_Red , HIGH);     break;
    case 2:
      digitalWrite(led_yellow , HIGH);  break;
    case 3:
      digitalWrite(led_white , HIGH);     break;
    case 4:
      digitalWrite(led_white , LOW); 
      digitalWrite(led_yellow , LOW); 
      digitalWrite(led_Red , LOW);
      counter=0;
                      break;      
    }
    delay(500);
  }
}
  
