      
// Cats ans Dogs
  #include <iostream>
        using namespace std;
     
        int main() {
        	int i,j,k,l,t,n,c,d,count,lim,flag;
        	cin>>t;
        	for(i=0;i<t;i++)
        	{
        		cin>>c>>d>>l;
        		flag=0;
        		if(c<=2*d)
        		{
        			lim=0;
        			if(l/4<=(c+d)&&l/4>=(lim+d)&&l%4==0)
        				flag=1;
        		}
        		else
        		{
        			lim=c-2*d;
        			if(l/4<=(c+d)&&l/4>=(lim+d)&&l%4==0)
        				flag=1;
        		}
        		if(flag==1)
        			cout<<"yes"<<endl;
        		else
        			cout<<"no"<<endl;
        	}
     
        	return 0;
        }   
