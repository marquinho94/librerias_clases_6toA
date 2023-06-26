#include "mi_libreria.h"

#define valor 3000 //valor de comparación entrada digital

int suma_lib (int param1, int param2)
{
  return (param1+param2);
}

int resta_lib (int param1, int param2)
{
    return (0);
}

void cualquiera (){

    
}

bool lecturaYcomparacion()
{
  int analog = analogRead(A0);
  analog *= 48;

  if (analog <= valor )
  {
    return (false);
  }
  return (true);
}