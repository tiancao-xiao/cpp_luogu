// P1152 欢乐的跳
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    long long a[1000], b[1000];
    cin >> n;
    int i;
    for (i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for (i=0;i<n-1;i++)
    {
        b[i] = abs(a[i] - a[i+1]);
    }
    sort(b, b+n-1);
    for(i=0;i<n-1;i++)
    {
        if(b[i]!=i+1)
        {
            cout << "Not jolly" << endl;
            return 0;
        }
    }
    cout << "Jolly" << endl;
    return 0;
}