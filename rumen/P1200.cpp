#include <bits/stdc++.h>
using namespace std;
int main()
{
    char comet[7], group[7];
    cin >> comet;  
    cin >> group;  

    long long a = 1, b = 1;
    // 遍历彗星名称的每个有效字符（直到字符串结束符'\0'）
    for (int i = 0; comet[i] != '\0'; i++)
    {
        // 统一转换为大写后计算数值（A-Z对应1-26）
        char c = toupper(comet[i]);
        a *= (int(c) - 64);
    }
    // 遍历小组名称的每个有效字符
    for (int i = 0; group[i] != '\0'; i++)
    {
        char c = toupper(group[i]);
        b *= (int(c) - 64);
    }

    if ((a % 47) == (b % 47))
    {
        cout << "GO" << endl;
    }
    else
    {
        cout << "STAY" << endl;
    }

    return 0;
}