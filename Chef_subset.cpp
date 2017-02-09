#include<iostream>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	int arr[4];
	int n = 4; //here 4 is acting like n
	while(t)
	{
		for(int i=0; i<4; i++)
		{
			cin >> arr[i];
		}
		int sum = 0;
		bool flag = false;
		for (int i=0; i<(1<<4); i++)
        {
        	//flag = false;
            for (int j=0; j<4; j++)
            {
            	// (1<<j) is a number with jth bit 1
                // so when we 'and' them with the
                // subset number we get which numbers
                // are present in the subset and which
                // are not
                if ((i & (1 << j)) > 0)
				{
                	//cout << arr[j] << " ";
                	sum += arr[j];
				}
			}
			//cout << endl;
			//cout << "sum: " << sum << endl;
			if(sum == 0 && i != 0)
			{
				flag = true;
				//break;
			}
			sum = 0;
    	}
		if(flag)
		{
			cout << "Yes" << endl;
		}
		else cout << "No" << endl;
		t--;
	}
	return 0;
} 
