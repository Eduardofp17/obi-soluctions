#include <bits/stdc++.h>

using namespace std;

bool isvogal(int i)
{

    if (i == 65 || i == 97 || i == 101 || i == 69 || i == 105 || i == 73 || i == 111 || i == 79 || i == 117 || i == 85)
    {
        return true;
    }
    return false;
};

char nearVogal(int i)
{
    if (isvogal(i - 1))
    {
        return char(i - 1);
    }
    else if (isvogal(i + 1))
    {
        return char(i + 1);
    }
    int vogalLeft = -1;
    int vogalRight = -1;
    for (int j = i - 1; j >= 0; j--)
    {
        if (isvogal(j))
        {
            vogalLeft = j;
            break;
        }
    }
    for (int j = i + 1; j < 256; j++)
    {
        if (isvogal(j))
        {
            vogalRight = j;
            break;
        }
    }
    if (vogalLeft != -1 && vogalRight != -1)
    {
        if (i - vogalLeft <= vogalRight - i)
        {
            return char(vogalLeft);
        }
        else
        {
            return char(vogalRight);
        }
    }
    else if (vogalLeft != -1)
    {
        return char(vogalLeft);
    }
    else if (vogalRight != -1)
    {
        return char(vogalRight);
    }
    return 'a';
}

char nearConsoante(int i)
{
    if(char(i) == 'z') return 'z';
    for (int j = i + 1; j < 256; j++)
    {
        if (!isvogal(j))
        {
            return char(j);
        }
    }
    return 'z';
}

int main()
{
    string sentence;
    cin >> sentence;
    vector<char> criptoMessage(sentence.size() * 3, '\0');
    int j = 0;
    for (int i = 0; i < sentence.size(); i++)
    {
        bool vogal = isvogal(int(sentence[i]));
        if (vogal)
        {
            criptoMessage[j++] = sentence[i];
        }
        else
        {
            criptoMessage[j++] = sentence[i];
            criptoMessage[j++] = nearVogal(int(sentence[i]));
            criptoMessage[j++] = nearConsoante(int(sentence[i]));
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout << criptoMessage[i];
    }
    cout << endl;

    return 0;
}
