#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    stack<int> numbers;

    for(int i = 0; i < n; i ++){
        int x;
        cin >> x;

        if(x == 0) {
            numbers.pop();
        } else {
            numbers.push(x);
        }
    }

    int sum = 0;

    while(!numbers.empty()){
        sum += numbers.top();
        numbers.pop();
    }

    cout << sum;
    return 0;
}