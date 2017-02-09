#include <climits>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100000],j=0;
    if(n==1)
    {
        cout << 1 << endl;
        return 0;
    }
    for(int i=n; i>0; i--)
    {
        if(n%i == 0)
        {
            arr[j] = n/i;
            j++;
        }
    }
    int sum1 = 0, sum2 = 0, ans, sum = -1;
    for(int i=0; i<j-1; i++)
    {
    	int a = arr[i];
    	sum1 = 0;
        while(a != 0)
        {
            sum1 += a % 10;
            a /= 10;
        }
        for(int k=i+1; k<j; k++)
        {
        	int b = arr[k];
        	sum2 = 0;
            while(b != 0)
            {
                sum2 += b % 10;
                b /= 10;
            }
            if(sum1 > sum)
            {
                sum = sum1;
                ans = arr[i];
            }
            if(sum2 > sum)
            {
               sum = sum2;
               ans = arr[k];
            }
            if(sum1 == sum2 == sum)
            {
               ans = arr[i] < arr[k] ? arr[i] : arr[k];
            }
        }
    }
    cout << ans << endl;
    return 0;
}

