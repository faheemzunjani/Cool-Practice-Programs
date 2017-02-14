    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,a[105],b[110],i,sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        memset(b,0,sizeof b);
        for(i=0;i<n;i++)
        {
            b[a[i]]++;
        }
        sort(b,b+105);
        for(i=0;i<104;i++)
        {
            sum=sum+b[i];
        }
        cout<<sum<<endl;
        return 0;
    }
