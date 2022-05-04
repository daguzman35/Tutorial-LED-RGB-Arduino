// C++ code
//  LED RGB cíclico, cátodo común
//  David Guzmán
//  Mayo de 2022
//  
//  Código generado usando Tinkercad (www.tinkercad.com)
//
//  Conexiones para LED RGB cátodo común:
//    LED                                         Arduino
//    R (rojo)          -- resistencia 220ohm --  pin D9
//    cátodo (pin largo) ------------------------  5V
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
  analogWrite(9, 255);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(500); // Wait for 500 millisecond(s)
  //Naranja
  analogWrite(9, 255);
  analogWrite(10, 153);
  analogWrite(11, 0);
  delay(500); // Wait for 500 millisecond(s)
  //Amarillo
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 0);
  delay(500); // Wait for 500 millisecond(s)
  //Verde
  analogWrite(9, 51);
  analogWrite(10, 204);
  analogWrite(11, 0);
  delay(500); // Wait for 500 millisecond(s)
  //Celeste
  analogWrite(9, 51);
  analogWrite(10, 204);
  analogWrite(11, 255);
  delay(500); // Wait for 500 millisecond(s)
  //Morado
  analogWrite(9, 102);
  analogWrite(10, 102);
  analogWrite(11, 204);
  delay(500); // Wait for 500 millisecond(s)
  //Rosado
  analogWrite(9, 204);
  analogWrite(10, 51);
  analogWrite(11, 204);
  delay(500); // Wait for 500 millisecond(s)*/
}
