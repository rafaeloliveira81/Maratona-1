#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int vol = 0, raio = 0, litros = 0;
    double qtd = 0, pi = 3.1415;

    cin >> raio;
    cin >> litros;
    
    vol = (4 * pi * pow(raio,3)) / 3;

    qtd = litros / vol;

    cout << qtd << endl;
}