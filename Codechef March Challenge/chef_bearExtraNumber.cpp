#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int n;
	while(t)
	{
		cin >> n;
		int *arr = new int[n];
		for(int i=0; i<n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr+n);
		if(arr[1] - arr[0] > 1)
		{
			cout << arr[0] << endl;
		}
		else if(arr[n-1] - arr[n-2] > 1)
		{
			cout << arr[n-1] << endl;
		}
		else
		{
			for(int i=1; i<n; i++)
			{
				if(arr[i] - arr[i-1] == 0)
				{
					cout << arr[i] << endl;
				}
			}
		}
		delete[] arr;
		t--;
	}
	return 0;
}
