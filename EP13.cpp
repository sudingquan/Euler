/*************************************************************************
	> File Name: EP13.cpp
	> Author: sudingquan
	> Mail: 1151015256@qq.com
	> Created Time: 一  6/17 10:31:38 2019
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
#define MAX_N 50
#define MAX_M 100

int num[MAX_M + 5][MAX_N + 5];

int main() {
    char str[MAX_N + 5];
    int ans[MAX_N + 5] = {0};
    for (int i = 0; i < MAX_M; i++) {
        scanf("%s", str);
        num[i][0] = strlen(str);
        if (num[i][0] > ans[0]) ans[0] = num[i][0];
        for (int j = 1; j <= MAX_N; j++) {
            num[i][j] = str[MAX_N - j] - '0';
        }
    }
    for (int i = 0; i < MAX_M; i++) {
        for (int j = 1; j <= MAX_N; j++) {
            cout << num[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < MAX_M; i++) {
        for (int j = 1; j <= MAX_N; j++) {
            ans[j] += num[i][j];
        }
        for (int j = 1; j <= ans[0]; j++) {
            if (ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            ans[0] += (ans[0] == j);
        }
    }
    for (int i = ans[0]; i >= 1; i--) {
        cout << ans[i];
    }
    cout << endl << ans[0] <<endl;
    return 0;
}
