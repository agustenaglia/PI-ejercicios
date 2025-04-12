/* 
Se ingresan la cantidad de horas trabajadas y el valor por hora de un empleado. Determinar el sueldo. 
*/

#include <stdio.h>

int main() {
  int horasTrabajadas, valorDeCadaHora;
  float sueldo;
  
  printf("ingrese la cantidad de horas tranajadas: ");
  scanf("%d", &horasTrabajadas);
  printf("ahora el valor de cada hora");
  scanf("%d", &valorDeCadaHora);
  sueldo = (horasTrabajadas * valorDeCadaHora) * 1.0;
  printf("tu sueldo es: %f ", sueldo);
  return 0;
}