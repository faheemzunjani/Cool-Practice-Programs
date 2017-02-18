#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);    
    int t;
    cin>>t;
    while (t--)
    {
        char str[1000];
        cin>>str;
        int i,count1=0,count0=0;
        for (i=0;str[i]!='\0';i++)
        {
            if (str[i]=='1') count1++;
            else if (str[i]=='0') count0++;
        }
        if (count1>count0)
            cout<<"WIN"<<endl;
        else
            cout<<"LOSE"<<endl;
    }
    return 0;
}
