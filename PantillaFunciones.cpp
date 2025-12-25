#include <iostream>
/*
Una plantilla de función es una característica de C++ que permite definir funciones genéricas
que pueden operar con diferentes tipos de datos sin necesidad de sobrecargar la función para cada tipo específico.
Esto se logra utilizando la palabra clave 'template' seguida de parámetros de tipo entre corchetes angulares.
*/

template < typename T, typename U>

auto max(T x, U y)
{
  return (x > y )? x : y;
}

int main()
{
    std::cout<< max(2, 3.5)<<'\n';
  return 0;
}