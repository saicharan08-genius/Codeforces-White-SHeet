#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1 , y1 , x2 , y2 , x3 , y3 , x4 , y4 , x5 , y5 , x6 , y6;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    cin >> x5 >> y5 >> x6 >> y6;
    if(x4==x5)
    {
        cout << "NO";
    }
    else if(y3 == y6)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
