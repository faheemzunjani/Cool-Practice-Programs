#include <iostream>
using namespace std;

int main()
{
    int res=0,i,add;
    char s[100];
    cin>>s;
    for (i=0;s[i]!='\0';i++)
    	{
    		switch (s[i]) {
    		case '1' : add=2;break;
    		case '2' : add=5;break;
    		case '3' : add=5;break;
    		case '4' : add=4;break;
    		case '5' : add=5;break;
    		case '6' : add=6;break;
    		case '7' : add=3;break;
    		case '8' : add=7;break;
    		case '9' : add=6;break;
    		case '0' : add=6;break;
    		}
    		res+=add;
    	}
    cout<<res;
    return 0;
}
