#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int h=0, w=0, c=0, count;
    while(n){
        cin >> h >> w >> c;
        count=0;
        for(int i=1,f=0; i<=sqrt(c); i++){
            if(c%i == 0){
                f=c/i;
            }
            else continue;
            if(i<=h && f<=w){
                count++;
            }
            if(i<=w && f<=h && i!=f){
                count++;
            }
        }
        cout << count << endl;
        n--;
    }
    return 0;
}
