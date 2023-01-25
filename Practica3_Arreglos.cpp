#include <iostream>

using namespace std;

int main()
{
    int nu[10];
    int i, a, suma;
    float b;

    //Primer programa que pide e imprime de atras hacia adelante
    for (i = 0; i < 10; i++)
    {
        std::cout << "Introduce el " << i+1 << " valor" << endl;
        std::cin >> nu[i];
    }
    system("cls");
    a = 9;
    for (i=0; i<10; i++)
    {
        std::cout << nu[a] << endl;
        a = a - 1;
    }

    //Segundo programa utilizando la lista anterior 
    suma = 0;
    for ( i = 0; i < 10; i++)
    {
        suma += nu[i];
    }
    b = suma / 10;
    std::cout << endl <<"La media del arreglo anterior es: " << b << endl;

    for ( i = 3; i < 10; i++)
    {
        while (b < nu[i])
        {
            std::cout << endl << "El valor " << nu[i] << " es mayor a la media " << b << endl;
        }
    }

    //Tercer programa para calcular el mayor en el arreglo
    int x;
    for ( i = 0; i < 10; i++)
    {
        while (nu[i]<nu[i+1])
        {
            x = nu[i];
        }
    }
    std::cout << endl << "El mayor número ingresado en el arreglo anterior es: " << x << endl;
}
