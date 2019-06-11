/*************************************************************************
	> File Name: EP28.cpp
	> Author: sudingquan
	> Mail: 1151015256@qq.com
	> Created Time: 日  5/19 20:31:13 2019
 ************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int sum = 1;
    //推导出通项公式
    //奇数项平方和通项公式为n(2n+1)(2n-1)/3
    //通项公式(4n^3+3n^2+8n-9)/6
    for (int l = 3; l <= 1001; l += 2) {
        sum += 4 * l * l - 6 * l + 6;
    }
    long long n = 1001;
    long long sum2 = (4 * n * n * n + 3 * n * n + 8 * n - 9) / 6;
    printf("%lld\n", sum2);
    printf("%d\n", sum);
}
