#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <stdio.h>
#include <string>

//https://atcoder.jp/contests/abc179/tasks/abc179_c

using namespace std;

long yakusuukosuu(long a) {
    long ans = 1;

    for (int i = 2; i <= sqrt(a); i++) {
        int cnt = 0;
        while (a % i == 0) {
            cnt++;
            a /= i;
        }
        ans *= (cnt + 1);
        if (a == 1) break;
    }
    if (a != 1) ans *= 2;


    return ans;
}

int main() {

    long intNum;
    long intCount = 0;

    cin >> intNum;

    for (long i = 1; i <= intNum - 1; i++)
    {
        intCount = intCount + yakusuukosuu(i);
    }

    cout << intCount << endl;

    return 0;
}

