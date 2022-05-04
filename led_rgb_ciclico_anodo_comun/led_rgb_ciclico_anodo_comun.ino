// C++ code
//  LED RGB cíclico, ánodo común
//  David Guzmán
//  Mayo de 2022
//  
//  Código generado usando Tinkercad (www.tinkercad.com)
//
//  Tinkercad genera código para cátodo común. Para adaptarlo 
//  a ánodo común se cambian los valores de intensidad de las 
//  funciones analogWrite a 255-valor.
//  Ejemplo:          analogWrite(10, 153);
//      pasa a ser:   analogWrite(10, 255-153);
//
//  Conexiones para LED RGB ánodo común:
//    LED                                         Arduino
//    R (rojo)          -- resistencia 220ohm --  pin D9
//    ánodo (pin largo) ------------------------  5V
//    G (verde)         -- resistencia 220ohm --  pin D10
//    B (azul)          -- resistencia 220ohm --  pin D11
//
// Las resistencias recomendadas pueden ser cualquier valor entre 
// 200ohm y 1000ohm. Mayor resistencia, menor intesidad.

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  //Rojo
  analogWrite(9, 255-255);
  analogWrite(10, 255-0);
  analogWrite(11, 255-0);
  delay(500); // Wait for 500 millisecond(s)
  //Naranja
  analogWrite(9, 255-255);
  analogWrite(10, 255-153);
  analogWrite(11, 255-0);
  delay(500); // Wait for 500 millisecond(s)
  //Amarillo
  analogWrite(9, 255-255);
  analogWrite(10, 255-255);
  analogWrite(11, 255-0);
  delay(500); // Wait for 500 millisecond(s)
  //Verde
  analogWrite(9, 255-51);
  analogWrite(10, 255-204);
  analogWrite(11, 255-0);
  delay(500); // Wait for 500 millisecond(s)
  //Celeste
  analogWrite(9, 255-51);
  analogWrite(10, 255-204);
  analogWrite(11, 255-255);
  delay(500); // Wait for 500 millisecond(s)
  //Morado
  analogWrite(9, 255-102);
  analogWrite(10, 255-102);
  analogWrite(11, 255-204);
  delay(500); // Wait for 500 millisecond(s)
  //Rosado
  analogWrite(9, 255-204);
  analogWrite(10, 255-51);
  analogWrite(11, 255-204);
  delay(500); // Wait for 500 millisecond(s)*/
}
