//c++ code
//

#include <Servo.h>
Servo servoMotor;
int potenciometro = A0;

int valorLido;
int angulo;

void setup(){
    servoMotor.attach(9);
}

void loop(){
    valorLido = analogRead(potenciometro);
    angulo = map(valorLido, 0, 1023, 0, 180);
    sevoMotor.write(angulo);

    delay(15);
}