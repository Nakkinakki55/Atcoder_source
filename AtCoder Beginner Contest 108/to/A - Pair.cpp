#include<iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <map>

using namespace std;

int main()
{
	    
    //--------------------------------------
    //問題
    //https://atcoder.jp/contests/abc108/tasks/abc108_a
    //--------------------------------------
    
    int N;
	cin >> N;


	if (N % 2 == 0)
	{
		cout << N/2*N/2 << endl;

		return 0;
	}
	else
	{
		cout << N/2 * (N/2+1) << endl;

		return 0;
	}

}

