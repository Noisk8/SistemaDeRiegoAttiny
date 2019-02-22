//This example code is in the public domain.

//Pin Electroválvula int ElecVal = 3;
//PIn sensor humedad int Humed1= 1; 
// Dato sensor int Dato1; 
//LED int led=4;

void setup() {
// salida electrovalvula 
pinMode(ElecVal, OUTPUT);
pinMode(led, OUTPUT);
// analogWrite(led, 200); 

// entrada sensor humedad 
pinMode(Humed1,INPUT); 
//STARTED LED analogWrite(led, 200); 
delay(2000);
analogWrite(led,0); }

void loop(){

//lectura del sensor de humedad en la variable Dato1
Dato1=analogRead(Humed1);
//comparador de rango del Dato1 if(Dato1>512) {digitalWrite(ElecVal, LOW); analogWrite(led, 0); }else{ digitalWrite(ElecVal, HIGH); analogWrite(led, 200); }
}
