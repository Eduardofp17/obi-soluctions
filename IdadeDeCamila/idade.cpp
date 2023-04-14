#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    int idadeDeCamila;
    cin >> x >> y >> z;
    
    if(x >= y && x <= z)
    {
        idadeDeCamila = x;
    }
    if(y >= z && x <= y)
    {
        idadeDeCamila = x;
    }
    if(y >= x && y <= z)
    {
       idadeDeCamila = y;
    }
    if(y >= z && y <= x)
    {
       idadeDeCamila = y;
    }
    if(z>= x && z <= y)
    {
        idadeDeCamila = z;
    }
    if(z >= y && z <= x )
    {
        idadeDeCamila = z;
    }
    
    cout << idadeDeCamila;
    return 0;
}