#include<iostream>
using namespace std;

int main()
{
	long long unsigned int a;
	cin >> a;
	long long ans = 1;
	//cout << a << endl;
	while(true)
	{
		while(a!=0)
		{
			//cout << a%10 << " ";
			if(a%10 != 0)
				ans *= a%10;
			a /= 10;
		}
		if(ans>0 && ans<10)
		{
			cout << ans << endl;
			break;
		}
		else {
			a = ans;
			ans = 1;
			//cout << endl;
		}
	}
	return 0;
}
