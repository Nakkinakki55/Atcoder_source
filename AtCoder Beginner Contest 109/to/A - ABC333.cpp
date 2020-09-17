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
    //https://atcoder.jp/contests/abc109/tasks/abc109_a
    //--------------------------------------
	
	int A,B;
	cin >> A >> B;

	if (A % 2 == 0)
	{
		cout << "No" << endl;

		return 0;
	}

	if (B % 2 == 0)
	{
		cout << "No" << endl;

		return 0;
	}

	cout << "Yes"<< endl;

	return 0;


}

