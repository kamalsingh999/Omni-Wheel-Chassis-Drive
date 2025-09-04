char action;
#define p1 2
#define p2 4
#define p3 6
#define d1 3
#define d2 5
#define d3 7

void setup() {

  // put your setup code here, to run once:
  pinMode (p1,OUTPUT);
  pinMode (p2,OUTPUT);
  pinMode (p3,OUTPUT);
  pinMode (d1,OUTPUT);
  pinMode (d2,OUTPUT);
  pinMode (d3,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
  
    action = Serial.read();
    analogWrite(p1,0);
    analogWrite(p2,0);
    analogWrite(p3,0);

    switch(action){
      
      case 'F' :
     analogWrite(p1,0);
     digitalWrite(d1,LOW);
     analogWrite(p2,245);
     digitalWrite(d2,LOW);
     analogWrite(p3,245);
     digitalWrite(d3,LOW);

      break;

      case 'B' :
      analogWrite(p1,0);
     digitalWrite(d1,LOW);
     analogWrite(p2,245);
     digitalWrite(d2,HIGH);
     analogWrite(p3,245);
     digitalWrite(d3,HIGH);

     break;

      case 'L': 
      analogWrite(p1,250);
     digitalWrite(d1,HIGH);
     analogWrite(p2,138);
     digitalWrite(d2,HIGH);
     analogWrite(p3,138);
     digitalWrite(d3,LOW);
      
      break;

     case 'R' : 
      analogWrite(p1,250);
     digitalWrite(d1,LOW);
     analogWrite(p2,138);
     digitalWrite(d2,LOW);
     analogWrite(p3,138);
     digitalWrite(d3,HIGH);

      break;

     case 'C' : 
      analogWrite(p1,250);
     digitalWrite(d1,HIGH);
     analogWrite(p2,250);
     digitalWrite(d2,LOW 
     );
     analogWrite(p3,250);
     digitalWrite(d3,HIGH);

     break;

     case 'A' : 
      analogWrite(p1,250);
     digitalWrite(d1,LOW);
     analogWrite(p2,250);
     digitalWrite(d2,HIGH);
     analogWrite(p3,250);
     digitalWrite(d3,LOW);

      break;
      case 'S' : 
      analogWrite(p1,0);
     digitalWrite(d1,LOW);
     analogWrite(p2,0);
     digitalWrite(d2,LOW);
     analogWrite(p3,0);
     digitalWrite(d3,LOW);

      break;

     default :
      printf("Invalid Code");
    }
    Serial.println(action);

  }


}