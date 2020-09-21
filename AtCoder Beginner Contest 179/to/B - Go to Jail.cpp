#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <stdio.h>
#include <string>

//https://atcoder.jp/contests/abc179/tasks/abc179_b

using namespace std;
int main()
{
    int intNum,intInOne,intInTwo;
    int intCount = 0;

    cin >> intNum;

    for (int i = 0; i < intNum; i++)
    {
        cin >> intInOne>> intInTwo;

        if (intInOne == intInTwo)
        {
            intCount++;

            if (intCount >= 3)
            {
                cout << "Yes" << endl;

                return 0;
            }
        }
        else
        {
            intCount = 0;
        }
    }

   

        cout << "No" << endl;

        return 0;
    
}

