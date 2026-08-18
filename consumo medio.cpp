/*
    pergunta

    calcule o consumo médio de combustivel de um automovomel,
    pedir para o usuario entar com a distancia(km) e volume(litros)

*/

#include <iostream>
using namespace std;
int main()
{
    float consumo_medio, volume, distancia;
    cout<< "digite o total de distancia que percoreu ";
    cin>>distancia;
    cout<< "digite a quantidade de litros que foram gastas percorendo essa distancia ";
    cin>>volume;
    if (volume==0)
    {
        cout<<"nunca dividirás por zero";
    }
    
    else
    {
    consumo_medio=distancia/volume;
    cout<<"o consumo medio = "<<consumo_medio;
    }



    
}
