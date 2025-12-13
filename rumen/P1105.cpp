#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int butt = n; 
    while (butt >= k) {
        int exchange = butt / k; // 本次能换的烟数
        n += exchange;           // 总烟数增加
        butt = butt % k + exchange; // 新烟蒂数 = 换烟剩余的烟蒂 + 新烟抽完的烟蒂
    }
    cout << n << endl;
    return 0;
}