// P1161 开灯
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t, i, j, s;
    long long result = 0;
    double a;
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> a >> t;
        for(j=1;j<=t;j++)
        {
            s = (int)floor(a * j); //floor()向下取整
            result ^= s; 
            /*
            0与任何数异或等于任何数
            相同的数异或等于0
            如果一组数所有数都出现了两次，0分别与这些数异或，最终结果为0
            如果一组数只有一个数只出现一次，其余数都出现两次，0分别与这些数异或，最终结果为这个数
            */
        }
    }
    cout << result <<endl;
    return 0;
}