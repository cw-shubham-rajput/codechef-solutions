#include <iostream>
using namespace std;

int main()
{
    int d,m,y;
    cin >> d >> m >> y;
    int dd,mm,yy;
    cin >> dd >> mm >> yy;
    int dmy = y*10000 + m*100 + d;
    int ddmmyy = yy*10000 + mm*100 + dd;
    int fine = 0;
    if(dmy <= ddmmyy)
    {
        fine = 0;
    }
    else if(m == mm && y == yy)
    {
        fine = (d-dd) * 15;
    }
    else if(y == yy)
    {
        fine = (m - mm) * 500;
    }
    else fine = 10000;
    cout << fine << endl;
    return 0;
}
