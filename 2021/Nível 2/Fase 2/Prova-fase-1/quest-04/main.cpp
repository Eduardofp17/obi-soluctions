#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N, M, S, I, totalDigitos = 0;
  cin >> N >> M >> S;

  for (int i = M; totalDigitos != S && i >= N; i--)
  {
    string x;
    int sumx = 0;
    x = to_string(i);

    for (auto u : x)
    {

      sumx += u - '0';
    }

    totalDigitos = sumx;
    if (sumx == S)
    {
      I = i;
      break;
    }
  }
  if (totalDigitos != S)
    I = -1;
  cout << I;
  return 0;
}

//Done