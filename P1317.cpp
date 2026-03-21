// P1317 低洼地
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0, flag = 0, ans = 0;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> b;
        if(b < a) // a>b说明形成了洼地的前半部分
        {
            flag = 1; // 用flag记录前半部分已经形成
        }
        if ((b > a) & (flag == 1)) // b>a说明形成了洼地的后半部分，如果flag==1说明生成了完整的洼地
        {
            ans ++;
            flag = 0; // 重新记录
        }
        a = b;
    } 
    cout << ans <<endl;
    return 0;
}