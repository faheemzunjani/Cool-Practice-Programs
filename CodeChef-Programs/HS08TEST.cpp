#include <bits/stdc++.h>
using namespace std;

int main()
{
    int draw;
    double bal;
    cin>>draw>>bal;
    if (draw+0.5>bal)
        cout<<fixed<<setprecision(2)<<bal;
    else
    {
        if (draw%5!=0)
            cout<<fixed<<setprecision(2)<<bal;
        else
        {
            bal=bal-draw-0.50;
            cout<<fixed<<setprecision(2)<<bal;
        }
    }
    return 0;
}
