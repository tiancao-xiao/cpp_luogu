// P1046 [NOIP 2005 普及组] 陶陶摘苹果
#include <iostream>
using namespace std;
int main()
{
    int apple[20], h, n, i;
    n = 0;
    for (i=0;i<10;i++)
    {
        cin >> apple[i];
    }
    cin >> h;
    h += 30;
    for (i=0;i<10;i++)
    {
        if(h >= apple[i])
        {
            n++;
        }
    }
    cout << n << endl;
    return 0;
    
}