#include <bits/stdc++.h>

using namespace std;

int main(){
  int D, A, N, AmoutToPay;
  cin >> D >> A >> N;
  int diff = N - 1;

  if(N < 16){
  AmoutToPay =  (D + (diff * A)) * (31 - diff);

  }else {
      AmoutToPay =  (D + ((diff - 1) * A)) * (31 - diff);
  }

  cout << AmoutToPay;
  return 0;
}
