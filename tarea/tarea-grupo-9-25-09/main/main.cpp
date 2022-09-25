#include <stdio.h> 
#include <iostream>
using namespace std;

int main()
{
    int peso;
    float IMC, altura;
    float a, b, c;

    do
    {
        cout << "Ingrese su altura (en metros): "<<endl;
        cin >> altura;
        cout << "Ingrese su peso: " << endl;
        cin >> peso;
    } while (peso > 0 && altura > 0);

    IMC = calcularIMC(peso, altura);
    cout << "su indice de masa corporal es de: "<<IMC << endl;

    do
    {
        cout << "Calcular raíces de ecuaciones de SEGUNDO grado";
        cout << "Ingrese los coeficientes correspondientes de la siguiente forma: ax^2+bx+c";
        cout << "Ingrese a";
        cin >> a;
        cout << "Ingrese b";
        cin >> b;
        cout << "Ingrese c";
        cin >> c;
    } while (a > 0);

    resolvente(a, b, c);

    return 0;
}
