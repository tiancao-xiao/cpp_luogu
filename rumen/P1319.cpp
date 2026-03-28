// P1319 压缩技术
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum, num, count = 0, flag = 0;
    cin >> n;
    sum = n * n;
    while(count < sum)
    {
        cin >> num;
        for(int i = 1;i <= num; i++)
        {
            cout << flag;
            count ++;
            if (count % n == 0)
            {
                cout <<endl;
            }
        }
        flag = 1 - flag;
    }
    return 0;
}