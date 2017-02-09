#include<iostream>
using namespace std;

int main()
{
    int s,t;
    int a,b;
    int m,n;
    int *ad = new int[m];
    int *od = new int[n];
    int ac = 0,oc = 0;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    for(int i=0; i<m; i++)
    {
        cin >> ad[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> od[i];
    }
    for(int i=0; i<m; i++)
    {
        if(((a-abs(ad[i])>=s) && ((a-abs(ad[i]))<=t))
        {
            ac++;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(((b-od[i])>=s) && ((b-od[i])<=t))
        {
            oc++;
        }
    }
    delete []ad;
    delete []od;
    cout << ac << endl;
    cout << oc << endl;
    return 0;
}
