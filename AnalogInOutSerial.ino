const int HIH4000 = 13;  // Analog input pin that the potentiometer is attached to
double media()
{
  uint32_t somador = 0;
  for(int cont=  0; cont <= 200-1; cont++)
  {
 
    somador+= analogRead(HIH4000);
  }
  somador = (somador/200);
  return somador;
}
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("\n% ");
  Serial.print(map(media(),840,4096,0.00,100.00));
}
