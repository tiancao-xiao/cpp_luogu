// P1179 [NOIP 2010 普及组] 数字统计
#include <bits/stdc++.h>
using namespace std;
#define NUM 2
int main()
{
    int l, r;
    cin >> l >> r;
    int i, x;
    int n = 0;
    for(i=l;i<=r;i++)
    {
        x = i;
        while(x>0)
        {
           if(x%10==NUM)
           {
               n++;
           }
            x = x / 10;
        }
    }
    cout << n <<endl;
    return 0;
}