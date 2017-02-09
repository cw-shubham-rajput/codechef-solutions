#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int gcd_algorithm(int x, int y)
{
    if(y == 0)
    {
        return x;
    }
    return gcd_algorithm(y, (x % y));
}

int lcmfun(int n1, int n2)
{
    int gcd = gcd_algorithm(n1,n2);
    return n1*n2/gcd;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int lcm = 0, ans = INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                lcm = lcmfun(arr[i],arr[j]);
                if(ans >= lcm)
                {
                    ans = lcm;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
