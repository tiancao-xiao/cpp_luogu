// P1047 [NOIP 2005 普及组] 校门外的树
#include <iostream>
using namespace std;
int main()
{
    int l, m;
    cin >> l >> m;
    int i, k;
    int n = 0;
    bool tree[10001] = {false};
    for (i=0;i<m;i++)
    {
        int u, v, j;
        cin >> u >> v;
        for (j=u;j<=v;j++)
        {
            if(tree[j]==0)
            {
                n++;
                tree[j] = 1;
            }
        }
    }
    k = l + 1 - n;
    cout << k << endl;
    return 0;
}