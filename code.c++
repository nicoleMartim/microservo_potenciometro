#include <Servo.h> //Inclui a biblioteca do servo motor

Servo servoMotor; //Cria um objeto servo

int potenciometro = A0; // Define o pino analógico do potenciometro

int valorLido; // Variável para armazenar o valor lido no potenciometro
int angulo; //Variável para armazenar o angulo do microservo

void setup()
{
  servoMotor .attach(9); // Conecta o servo ao pino digital 9 
}

void loop()
{
  valorLido = analogRead(potenciometro);
  angulo = map(valorLido, 0, 1023, 0, 180);
  servoMotor .write(angulo);
  
  delay(15);
}
