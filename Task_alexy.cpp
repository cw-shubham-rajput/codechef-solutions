#include<iostream>
#include<climits>
using namespace std;

int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}

int main()
{
	int t;
	cin >> t;
	while(t)
	{
		int n;
		cin >> n;
		long long int *arr = new long long int[n];
		for(int i=0; i<n; i++)
		{
			cin >> arr[i];
		}
		unsigned long long int lcm = 0, ans = 999999999999999999;
		for(int i=0; i<n-1; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if(arr[i]>ans || arr[j]>ans)
				{
					continue;
				}
				lcm = (arr[i]*arr[j]) / gcd(arr[i],arr[j]);
				if(lcm < ans)
				{
					ans = lcm;
				}
			}
		}
		cout << ans << endl;
		t--;
	}
	return 0;
}
