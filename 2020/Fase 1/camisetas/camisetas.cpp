#include <bits/stdc++.h>
using namespace std;

int main() {
    int playersAmount, smallShirts, bigShirts, requestedSshirts = 0, requestedBshirts = 0, actualShirtSize;
    char ans;

    cin >> playersAmount;
    for(int i = 0; i < playersAmount; i++)
    {
        cin >> actualShirtSize;
        if( actualShirtSize == 1)
        {
            requestedSshirts++;
        }
        else if(actualShirtSize == 2)
        {
            requestedBshirts++;
        }
        
    }
    cin >> smallShirts >> bigShirts;
        
    if(requestedSshirts <= smallShirts && requestedBshirts <= bigShirts)
    {
        ans = 'S';
    } 
    else 
    {
        ans = 'N';
    }
    cout << ans << '\n';
    return 0;
}