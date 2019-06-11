/*************************************************************************
	> File Name: EP30.cpp
	> Author: sudingquan
	> Mail: 1151015256@qq.com
	> Created Time: 日  5/19 21:00:01 2019
 ************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

#define MAX_N 354294

int is_valid(int x) {
    int raw = x, temp = 0;
    while (x) {
        temp += pow(x % 10, 5);
        x /= 10;
    }
    return temp == raw;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_valid(i)) continue;
        sum += i;
        printf("i : %d\n", i);
    }
    printf("%d\n", sum);
    return 0;
}
