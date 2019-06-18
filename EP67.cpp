/*************************************************************************
	> File Name: EP67.cpp
	> Author: sudingquan
	> Mail: 1151015256@qq.com
	> Created Time: 一  6/18 12:07:36 2019
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define MAX_N 5050

int max1(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int num[MAX_N + 5];
    for (int i = 0; i < MAX_N; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 99; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            num[i * (i - 1) / 2 + j] += max1(num[i * (i - 1) / 2 + j + i], num[i * (i - 1) / 2 + j + i + 1]);
        }
    }
    printf("%d\n", num[0]);
    return 0;
}
