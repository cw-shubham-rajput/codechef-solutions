#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int n, index, d;
	long long dues = 0;
	bool flag = false;
	while(t)
	{
		cin >> n;
		dues = 0;
		flag = false;
		//int *arr = new int[n];
		for(int i=0; i<n; i++)
		{
			cin >> d;
			if(d == 0 && flag)
			{
				dues += 1000;
				//cout << "rest " << dues << endl;
			}
			if(d == 0 && !flag)
			{
				index = i;
				flag = true;
				dues += (n-index) * 100 + 1000;
				//cout << "start " << dues << endl;
			}
		} 
		cout << dues << endl;
		t--;
	}
	return 0;
}
