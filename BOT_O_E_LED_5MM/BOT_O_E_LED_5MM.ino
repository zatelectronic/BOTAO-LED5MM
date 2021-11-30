int LED = 13;
int BOTAO = 2;

void setup() {
pinMode(LED,OUTPUT);
pinMode(BOTAO,INPUT);
}
void loop() 
{
if(digitalRead(BOTAO) == LOW)
{
digitalWrite(LED, HIGH);
}
else
{
digitalWrite(LED, LOW);
}
}
