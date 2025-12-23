#include <iostream>

int main()
{
    int *pNum = NULL;

    pNum = new int;

    *pNum = 25;

    std::cout << "direccion " << pNum << std::endl;
    std::cout << "valor " << *pNum << std::endl; 

    delete pNum;




  return 0;
}