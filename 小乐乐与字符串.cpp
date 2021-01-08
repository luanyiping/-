#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0, c = 0, h = 0, ans = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'C')
            c++;
        else if (s[i] == 'H')
            h += c;
        else
            ans += h;
    }
    printf("%d", ans);
}