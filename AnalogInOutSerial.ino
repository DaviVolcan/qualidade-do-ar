const int analogInPin = 13;  // Analog input pin that the potentiometer is attached to
double media()
{
  uint32_t somador = 0;
  for(int cont=  0; cont <= 200-1; cont++)
  {
  somador+= analogRead(analogInPin);
  }
  somador = (somador/200);
  return somador;
}
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("\n sensor = ");
  Serial.print(media());
}
