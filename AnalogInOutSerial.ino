const int HIH4000 = 13;
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
  Serial.print("\n sensor = ");
  Serial.print(media());
}
