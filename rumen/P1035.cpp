// P1035 [NOIP 2002 普及组] 级数求和
#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int i;
    double sum = 0.0;
    for (i=1;;i++)
    {
        sum = sum + 1.0/i;
        if (sum > k)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
    
}
    