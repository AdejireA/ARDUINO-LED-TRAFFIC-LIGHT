int red = 9;
int yellow = 8;
int green = 7;

void setup(){
  
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green,  OUTPUT);

  //blink all LED first
digitalWrite(red, HIGH);
delay(1000);
digitalWrite(yellow, HIGH);
delay(1000);
digitalWrite(green, HIGH);
delay(1000);
digitalWrite(green,  LOW); 
delay(1000);
digitalWrite(yellow,  LOW);
delay(1000);
digitalWrite(red,  LOW); 
delay(1000);

  
}
void loop(){

  //red light on for stop
digitalWrite(red, HIGH);
 delay(10000);
digitalWrite(red,  LOW);


  //yellow light blink for ready
digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow,  LOW);
delay(500);

  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow,  LOW);
delay(500);

  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow,  LOW);
delay(500);
  
  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow, LOW);
delay(500);
  
  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow, LOW);
delay(500);
  
  //green light on for go
digitalWrite(green, HIGH);
delay(10000);
digitalWrite(green,  LOW);


  //yellow light blink for ready
digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow,  LOW);
delay(500);

  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow,  LOW);
delay(500);

  digitalWrite(yellow, HIGH);
delay(1000);  
  digitalWrite(yellow, LOW);
delay(500);
  
  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow, LOW);
delay(500);
  
  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow, LOW);
delay(500);
  
  
}
