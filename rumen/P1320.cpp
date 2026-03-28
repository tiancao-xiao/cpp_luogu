// P1320 压缩技术（续集版）【输入优化版】
#include <bits/stdc++.h>
using namespace std;

int main(){
    // 用vector动态存储，无需固定大小，更安全规范
    vector<string> num;  // vector自动管理内存，避免越界风险
    string s;
    // 优化输入：读取所有行，自动存入vector
    while(cin >> s) // 按ctrl+z，然后回车 -> 终止输入
    {
        num.push_back(s);  // 将每行字符串存入vector
    }
    
    // 矩阵边长n直接用vector的大小获取，无需手动计数
    int n = num.size();
    cout << n << ' ';  

    char flag = '0';
    int count = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(num[i][j] == flag)
                count++;
            else{
                cout << count << ' ';
                flag = (flag == '0') ? '1' : '0';
                count = 1;
            }
        }
    }
    cout << count;
    return 0; 
}