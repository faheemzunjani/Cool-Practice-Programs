#include <bits/stdc++.h>
using namespace std;
 
int nod[10000001];
void sieve()
{
    int i, j;
//    memset(nod,0,sizeof(nod));
    for (i = 1; i<10000001; i++){
        for (j = i; j < 10000001; j+=i){
            nod[j]++;
        }
    }
}
 
int main()
{
    int n,t;
    sieve();
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        printf("%d\n",nod[n]);
    }
    return 0;
}
