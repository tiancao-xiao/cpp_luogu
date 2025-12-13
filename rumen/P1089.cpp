// // P1089 [NOIP 2004 提高组] 津津的储蓄计划
#include <iostream>
using namespace std;

int main() {
    int save = 0;    // 累计存的整百数（单位：元）
    int remain = 0;  // 每月剩余的不足100的零钱
    int expense;     // 当月支出（无需数组，边输入边处理）
    int flag = 0;    // 标记是否出现钱不够的情况
    int bad_month = 0; // 记录不够花的月份

    for (int i = 0; i < 12; i++) {
        cin >> expense;
        // 当月总收入 = 上月剩余零钱 + 当月300元
        int total = remain + 300;
        
        // 判断当月是否够花
        if (total < expense) {
            flag = 1;
            bad_month = i + 1; // 月份从1开始（i从0到11对应1-12月）
        }

        // 扣掉当月支出，计算剩余钱
        total -= expense;
        // 将剩余钱中的整百部分存起来，零钱留到下月
        save += (total / 100) * 100; // 整百存入
        remain = total % 100;        // 零钱剩余
    }

    // 输出结果
    if (flag) {
        cout << -bad_month << endl; // 不够花输出负的月份
    } else {
        // 年底总金额 = 存款*1.2 + 最后剩余的零钱
        int final_money = save * 1.2 + remain;
        cout << final_money << endl;
    }

    return 0;
}