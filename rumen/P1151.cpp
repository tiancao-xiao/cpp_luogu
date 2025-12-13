// P1151 子数整数
#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int i;
    int n = 0;
    for (i=10000;i<=30000;i++)
    {
        if((i/100)%k==0)
        {
            if((((i%10000)/10)%k)==0)
            {
                if(((i%1000)%k)==0)
                {
                    n += 1;
                    cout << i <<endl;
                }
            }
        }
    }
    if (n==0)
    {
        cout <<"No" <<endl;
    }
    return 0;
}