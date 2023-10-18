#include <iostream>
#include <math.h>

using namespace std;

int inverter(int n){
    int d = 0;
    
    while(n>0){
        d = d*10 + (n%10);
        n /= 10;
    }
    
    return d;
}

int contar_digito(int n){
    if(n>0){
        return 1+contar_digito(n/10);
    }
    return 0;
}

int inverte_rec(int n){
    int d = contar_digito(n);
    
    if(n>0){
        return (n%10 * pow(10, d-1)) + inverte_rec(n/10);
    }
    return 0;
}

int main()
{
    cout << "Número invertido de 978: " << inverter(987) << endl;
    cout << "Número invertido de 239: " << inverte_rec(239) << endl;

    return 0;
}