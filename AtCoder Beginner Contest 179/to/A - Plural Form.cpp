#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <stdio.h>
#include <string>

//https://atcoder.jp/contests/abc179/tasks/abc179_a

using namespace std;
int main()
{
    string strIn, strOut;

    cin >> strIn;

    if (strIn[strIn.size() - 1]=='s')
    {
        strOut = strIn + "es";
    }
    else
    {
        strOut = strIn + "s";
    }

    cout << strOut << endl;

    return 0;


}

