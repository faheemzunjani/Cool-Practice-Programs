//Digit Longest Increasing Subsequence 2

/* What is LIS:

For example, let us say that Chef's favourite 4-digit number is 1531, then the LIS array would be [1, 2, 2, 1]. 
The length of longest increasing subsequence ending at first digit is 1 (the digit 1 itself) and at the second digit is 2 ([1, 5]),
 at third digit is also 2 ([1, 3]), and at the 4th digit is 1 (the digit 1 itself). */



    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int i,j,k,l,d,n,t,ans,c[100];
    	cin>>t;
    	while(t--)
    	{
    		cin>>n;
    		for(i=0;i<n;i++)
    		{
    			cin>>c[i];
    			cout<<c[i]; // Go through the explanation.
    		}
    		cout<<endl;
    	}
    	return 0;
    } 

/* 
EXPLANATION:
Given in the question that the input is always a valid LIS.

Consider the input 12213, 
The 1st index has 1 and the LIS is 1 itself.
The second index has the the LIS [1,2] -> Consisting 2 Elements.
Similar is the case with third and fourth.
The 5th index has the element 3 and the LIS is [1,2,3] -> Consisitng 3 elements.

Thus, the input itself is the output.

*/


