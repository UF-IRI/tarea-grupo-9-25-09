#include "example.h"

int main() {
    int peso = 0;
    float IMC = 0, altura = 0;
    float a = 0, b = 0, c = 0;

    do
    {
        cout << "Ingrese su altura (en metros): "<<endl;
        cin >> altura;
        cout << "Ingrese su peso: " << endl;
        cin >> peso;
    } while (peso < 1 || altura < 1);

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
