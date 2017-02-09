#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int m,n;
	cin >> m >> n;
	if(m>n)
	{
		int temp = n;
		n = m;
		m = n;
	}
	int p1=-1,p2=-1,count=0;
	bool flag=false;
	while(m<=n)
	{
		flag = false;
		for(int i=2; i<=sqrt(m); i++)
		{
			if(m%i == 0)
			{
				flag = true;
				break;
			}
		}
		if(flag == false)
		{
			p2=p1;
			p1=m;
			if(p1-p2 == 2)
			{
				count++;
			}
		}
		m++;
	}
	cout << count << endl;
    return 0;
}

