#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, S, digito, total = 0;
    cin >> S >> A >> B;
    for (int N = A; N <= B; N++)
    {
       int aux = N, soma = 0; 
        while (aux > 0)
        {
            digito = aux % 10;
            soma = soma + digito;
            aux = aux / 10;
        }
        if (soma == S)
        {
            total++;
        }
    }
    cout << total << endl;
    return 0;
}