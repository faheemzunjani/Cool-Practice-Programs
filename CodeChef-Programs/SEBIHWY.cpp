//Sebi ans Highway   

 #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	// your code goes here
    	float i,j,k,l,n,d,tst,t,s,sg,fg,st,ft;
    	cin>>tst;
    	while(tst--)
    	{
    		cin>>s>>sg>>fg>>n>>t;
    		d=n*50/t;
    		d=d*18/5;
    		
    		d=s+d;
    		
    		st=sg-d;
    		if(st<0)
    			st=-st;
    		ft=fg-d;
    		if(ft<0)
    			ft=-ft;
    		if(st<ft)
    			cout<<"SEBI"<<endl;
    		else if(st>ft)
    			cout<<"FATHER"<<endl;
    		else
    			cout<<"DRAW"<<endl;
    		
    		
    	}
    	return 0;
    } 
