  
//Extreme Encoding

/* 

Question(in a simplified way):
Consider an array of 32 spaces.

Step1:  The given number b is left-shifted by 16 bits which leaves a space of 16 bits to its right.
(Since the limit of the numbers is < 2^16)
Step2 : a=a|b
Finally, the first 16 bits consist the binary encoding of the number b and the next sixteen bits consist of a.

*/
    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t,j,i,k,size,a[10001],b[10001],d,n[10001],casec;
    	d=pow(2,16)-1;
    	cin>>t;
    	casec=0;
    	while(t--)
    	{
    		casec++;
    		cin>>size;
    		for(i=0;i<size;i++)
    		{
    			cin>>n[i];
    			b[i]=n[i]>>16;
    			a[i]=n[i]&d; // d= 2^16-1 => d= sixteen 0s and sixteen 1s strored in an array 
    		}
    		cout<<"Case "<<casec<<":"<<endl;
    		for(i=0;i<size;i++)
    			cout<<a[i]<<" ";
    		cout<<endl;
    		for(i=0;i<size;i++)
    			cout<<b[i]<<" ";
    		cout<<endl;
    	}
    } 

/*
EXPLANATION: 

We right shift the modified number to get the number b.
Then we "and" the number with 2^16-1 to get 'a'.

*/
