long distancia;
long tiempo;
void setup(){
  Serial.begin(9600);
  pinMode(9, OUTPUT); //Envio señal//
  pinMode(8, INPUT); //Recuperamos señal//
  pinMode(10,OUTPUT); //Actuador//
}

void loop(){
  
 
  digitalWrite(9,LOW); 
  delayMicroseconds(5);
  digitalWrite(9, HIGH); 
  delayMicroseconds(10);
  tiempo=pulseIn(8, HIGH); //Calcula el tiempo que tarda en llegar el pulso//
  distancia= int(0.017*tiempo); //Calculamos la distancia//
  Serial.println("Distancia ");
  Serial.println(distancia);
  Serial.println(" cm");
  delay(1000);
  {
    if (distancia < 100)
    digitalWrite(10, HIGH); 
    if (distancia > 100)
    digitalWrite(10, LOW);
  
  }
  }
