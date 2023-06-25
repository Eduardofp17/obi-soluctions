#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int idadeOtavio, idadeOscar, idadeOrlando;
    cin >> idadeOtavio >> idadeOscar;
    idadeOrlando = (idadeOscar - idadeOtavio) + idadeOscar;
    cout << idadeOrlando << '\n';
    return 0;
}