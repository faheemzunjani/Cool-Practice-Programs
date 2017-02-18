#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    char arr[31];
    while(t--)
    {
        cin>>arr;
        int n=strlen(arr);
        int i;
        for(i=n-1;i>=0;i--)
        {
            cout<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}
