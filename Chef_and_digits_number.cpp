#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t)
    {
        string str;
        cin >> str;
        bool b1 = false, b2 = false;
        int c1 = 0, c2 = 0;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == '0')
            {
                b1 = true;
                c1++;
            }
            if(str[i] == '1')
            {
                b2 = true;
                c2++;
            }
        }
        if((c1 == 1) || (c2 == 1))
        {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
        t--;
    }
    return 0;
}
