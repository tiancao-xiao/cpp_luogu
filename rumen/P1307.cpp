// P1307 [NOIP 2011 普及组] 数字反转
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N = 0, res = 0;
    cin >> N;
    if(N < 0)
    {
        cout << '-';
        N = -N;
    }
    while(N)
    {
        res = res * 10 + N % 10;
        N = N / 10;
    } 
    cout << res <<endl;
    return 0;
}