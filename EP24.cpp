/*************************************************************************
	> File Name: haizei_56.cpp
	> Author: sudingquan
	> Mail: 1151015256@qq.com
	> Created Time: 四  6/27 14:06:30 2019
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

int num[10] = {0, 1, 2, 3 ,4, 5, 6, 7, 8 ,9};

int fac(int x) {
    if (x == 1) return 1;
    if (x == 0) return 0;
    return x * fac(x - 1);
}

void g(int x, int y) {
    int n = y - 1;
    int i = x;
    int k = n; //k是还能变换的次数
    while (k) {
        while (k < fac(i - 1)) {
            i--;
        }
        int j = 1;
        while (j * fac(i - 1) <= k) {
            j++;
        }
        j -= 1;
        k -= j * fac(i - 1);
        swap(num[x - i + j], num[x - i]);
        sort(num + x - i + 1, num + x);
    }
    return;
}

int main () {
    g(10, 1000000);
    for (int i = 0; i < 10; i++) {
        cout << num[i];
    }
    return 0;
}
