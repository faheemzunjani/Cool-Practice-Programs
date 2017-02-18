#include <iostream>
using namespace std;

int zeroes(int n)
{
	int count=0,i;
	for(i=5;n/i>=1;i*=5)
		count+=n/i;
	return count;
}

int main()
{
    int n,num;;
    cin>>n;
    while (n--)
    {
    	cin>>num;
    	cout<<zeroes(num)<<endl;
    }
    return 0;
}
