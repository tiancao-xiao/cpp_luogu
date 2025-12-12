// P1085 [NOIP 2004 普及组] 不高兴的津津
#include <iostream>
using namespace std;
int main()
{
    int school[7], extra[7];
    int max = 8;
    int i;
    int day = 0;
    for(i=0;i<7;i++)
    {
        cin >> school[i] >> extra[i];
        if ((school[i]+extra[i])>max)
        {
            day = i + 1;
            max = school[i] + extra[i];
        }
    }
    cout << day <<endl;
    return 0;
}