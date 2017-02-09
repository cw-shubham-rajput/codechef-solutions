#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	long long c,d,l;
	unsigned long long cl,dl;
	while(t)
	{
		cin >> c >> d >> l;
		cl = c * 4;
		dl = d * 4;
		if((l<dl) || (l>(cl+dl)) || (l%4 != 0))
		{
			cout << "no" << endl;
		}
		else
		{
			if(d*2 < c)
			{
				if((l-dl >= (c-d*2*4)) && (l-dl <= c*4))
				{
					cout << "yes" << endl;
				}
				else
				{
					cout << "no" << endl;
				}
			}
			else
			{
				cout << "yes" << endl;
			}
		}
		t--;
	}
	return 0;
}
