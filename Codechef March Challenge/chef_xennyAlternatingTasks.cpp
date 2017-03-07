#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int n;
	while(t)
	{
		cin >> n;
		int no = 0;
		long long x_odd = 0, x_even = 0;
		long long y_odd = 0, y_even = 0;
		for(int i=0; i<n; i++)
		{
			cin >> no;
			if(i%2 == 0)
			{
				x_even += no;
			}
			else x_odd += no;
		}
		for(int i=0; i<n; i++)
		{
			cin >> no;
			if(i%2 == 0)
			{
				y_even += no;
			}
			else y_odd += no;
		}
		if((x_odd + y_even) < (x_even + y_odd))
		{
			cout << x_odd + y_even << endl;
		}
		else cout << x_even + y_odd << endl;
		t--;
	}
	return 0;
}
