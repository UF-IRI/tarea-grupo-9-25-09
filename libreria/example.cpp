#include "example.h"

float calcularIMC(int peso, float altura)
{
    float imc=0;
    if (peso==0||altura==0)
    {
        return -1;
    }
    else
    {
        imc = peso/(altura*altura);
    }
  
    return imc;
} 

void resolvente(int a, int b, int c)
{
    float discriminante;
    float x, x1, x2 = 0;

    discriminante = sqrt( (b*b) - 4 * a*c);

    if(a==0)
    {
        cout<<"Ingrese una ecuación de segundo grado.";
        return;
    }
    
    if (discriminante == 0)
    {
        x = (-b) / 2 * a;
        cout<< "La única raíz es: " << x;
    }
    else if (discriminante > 0)
    {
        x1 = (-b + discriminante) / 2 * a;
        x2= (-b - discriminante) / 2 * a;
        cout << "Raíz 1: " << x1 << "Raíz 2: " << x2;
    }
    else
    {
        cout << "No tiene raíces reales";
    }

    return;
}