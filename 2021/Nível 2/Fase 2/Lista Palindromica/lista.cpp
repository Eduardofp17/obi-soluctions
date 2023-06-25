#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> List(N);
    for (int i = 0; i < N; i++) {
        cin >> List[i];
    }

    int ans = 0;
    int left = 0;
    int right = N - 1;

    while (left < right) {
        if (List[left] == List[right]) {
            left++;
            right--;
        } else if (List[left] < List[right]) {
            List[left + 1] += List[left];
            left++;
            ans++;
        } else {
            List[right - 1] += List[right];
            right--;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}