/*
 Fundacion Kinal
 Centro Educativo Tecnico Laboral KINAL
 Electronica
 Grado:5to A
 Nombre:Roberto Monterroso
 Carne :1818507
 */
#define LEDa 3
#define LEDb 2
#define LEDc 21
#define LEDd 18
#define LEDe 18
#define LEDf 4
#define LEDg 5
#define rele 11
#define trig 16
#define echo 15
int Distancia;
int Duracion;
int conteo =0;

void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(19,OUTPUT);
  pinMode(18,OUTPUT);
  pinMode(17,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(16,OUTPUT);
  pinMode(15,INPUT);
}
void loop() {
  digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  Duracion = pulseIn(echo,HIGH);
  Distancia = Duracion / 59;
  Serial.println(Distancia);
  delay(500);

if(Distancia > 0 && Distancia < 15 ){
  conteo = conteo +1;
}
   
if(conteo==0){
    digitalWrite(3,HIGH); //A
    digitalWrite(2,HIGH); //B
    digitalWrite(19,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(17,HIGH);  //E
    digitalWrite(4,HIGH);  //F
    digitalWrite(5,LOW);   //G
    digitalWrite(11,HIGH);
  }

if(conteo==1){
   digitalWrite(3,LOW); //A
    digitalWrite(2,HIGH); //B
    digitalWrite(19,HIGH);  //C
    digitalWrite(18,LOW);  //D
    digitalWrite(17,LOW);  //E
    digitalWrite(4,LOW);  //F
    digitalWrite(5,LOW);   //G
    digitalWrite(11,HIGH);
  }
  if(conteo==2){
    digitalWrite(3,HIGH); //A
    digitalWrite(2,HIGH); //B
    digitalWrite(19,LOW);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(17,HIGH);  //E
    digitalWrite(4,LOW);  //F
    digitalWrite(5,HIGH);   //G
    digitalWrite(11,HIGH);
  }
  if(conteo==3){
    digitalWrite(3,HIGH); //A
    digitalWrite(2,HIGH); //B
    digitalWrite(19,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(17,LOW);  //E
    digitalWrite(4,LOW);  //F
    digitalWrite(5,HIGH);   //G
    digitalWrite(11,HIGH);
  }
   if(conteo==4){
    digitalWrite(3,LOW); //A
    digitalWrite(2,HIGH); //B
    digitalWrite(19,HIGH);  //C
    digitalWrite(18,LOW);  //D
    digitalWrite(17,LOW);  //E
    digitalWrite(4,HIGH);  //F
    digitalWrite(5,HIGH);   //G
    digitalWrite(11,HIGH);
  }
  if(conteo==5){
    digitalWrite(3,HIGH); //A
    digitalWrite(2,LOW); //B
    digitalWrite(19,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(17,LOW);  //E
    digitalWrite(4,HIGH);  //F
    digitalWrite(5,HIGH);   //G
    digitalWrite(11,HIGH);
  }
  if(conteo==6){
    digitalWrite(3,HIGH); //A
    digitalWrite(2,LOW); //B
    digitalWrite(19,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(17,HIGH);  //E
    digitalWrite(4,HIGH);  //F
    digitalWrite(5,HIGH);   //G
    digitalWrite(11,HIGH);
  }
  if(conteo==7){
   digitalWrite(3,HIGH); //A
    digitalWrite(2,HIGH); //B
    digitalWrite(19,HIGH);  //C
    digitalWrite(18,LOW);  //D
    digitalWrite(17,LOW);  //E
    digitalWrite(4,LOW);  //F
    digitalWrite(5,LOW);   //G
    digitalWrite(11,HIGH);
  }
  if(conteo==8){
    digitalWrite(3,HIGH); //A
    digitalWrite(2,HIGH); //B
    digitalWrite(19,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(17,HIGH);  //E
    digitalWrite(4,HIGH);  //F
    digitalWrite(5,HIGH);   //G
    digitalWrite(11,HIGH);
  }
  if(conteo==9){
    digitalWrite(3,HIGH); //A
    digitalWrite(2,HIGH); //B
    digitalWrite(19,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(17,LOW);  //E
    digitalWrite(4,HIGH);  //F
    digitalWrite(5,HIGH);   //G
    digitalWrite(11,LOW);
  }
}
