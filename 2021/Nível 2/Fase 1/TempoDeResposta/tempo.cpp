#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 110;
int ans[maxn], ultima[maxn], atv[maxn];

int main()
{
    int nEvents, t = 1;
    cin >> nEvents;
    bool ok = 0;

    for (int i = 0; i < nEvents; i++)
    {
        char event;
        int time;
        cin >> event >> time;

        if (event == 'T')
        {
            t += time;
            ok = 0;
        }
        else if (event == 'R')
        {
            t += ok;
            ok = 1;
            ultima[time] = t;

            atv[time] = 1;
        }
        else
        {
            t += ok;
            ok = 1;
            ans[time] += t - ultima[time];

            atv[time] = 0;
        }
    }
    for (int i = 1; i <= 100; i++)
    {
        if (ultima[i])
        {
            cout << i;
            if (atv[i])
            {
                cout << " -1" << endl;
            }
            else
            {
                cout << " " << ans[i] << endl;
            }
        }
    }
    return 0;
}