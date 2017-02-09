#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        fflush(stdin);
        string str;
        getline(cin, str);
        int m1 = 0, m2 = 0;
        char ch = 'a';
        string s = "";
        if(str.length()%2 == 0)
        {
            m1 = str.length()/2 - 1;
            m2 = str.length()/2;
            //cout << "even " << m1 << " " << m2 << " " << ch << " " << str.length() << endl;
        }
        else
        {
            ch = str[str.length()/2];
            if(ch == '.')
            {
                ch = 'a';
            }
            m1 = str.length()/2 - 1;
            m2 = str.length()/2 + 1;
            //cout << "odd " << m1 << " " << m2 << " " << ch << " " << str.length() << endl;
        }
        //cout << str[m1] << " " << str[m2] << endl;
        if((str[m1] == str[m2]) && (str[m1] == '.'))
        {
            cout << -1 << endl;
            continue;
        }
        else
        if((str[m1] != str[m2]) && (str[m1] != '.') && (str[m2] != '.'))
        {
            cout << -1 << endl;
            continue;
        }
        for( ; m1>=0 && m2<str.length(); m1--, m2++)
        {
            if((str[m1] == str[m2]) && (str[m1] == '.'))
            {
                break;
            }
            else
            if((str[m1] != str[m2]) && (str[m1] != '.') && (str[m2] != '.'))
            {
                break;
            }
            if((str[m1] == str[m2]) && (str[m1] != '.'))
            {
                s += str[m1];
                continue;
            }
            else
            if(str[m1] == '.')
            {
                s += str[m2];
                continue;
            }
            else
            if(str[m2] == '.')
            {
                s += str[m1];
                continue;
            }
        }
        string ss = "";
        //cout << s << endl;
        for(int i=s.length()-1; i>=0; i--)
        {
            ss += s[i];
        }
        //cout << ss << endl;
        if(str.length()%2 == 1)
        {
            ss += ch;
        }
        //cout << ss << endl;
        ss += s;
        cout << ss << endl;
    }
    return 0;
}
