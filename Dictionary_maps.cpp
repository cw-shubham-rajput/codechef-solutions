#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string,int>mymap;
    string str;
    int no;
    while(n--)
    {
        cin >> str >> no;
        mymap[str] = no;
    }
    string name;
    int t;
    while(cin >> name)
    {
        t = mymap[name];
        if(t==0)
        {
            cout << "Not found" << endl;
        }
        else cout << name << "=" << t << endl;
    }
    return 0;
}
