#include<iostream>
using namespace std;

int t,n,c;
long A[10001] = {};
long B[10001] = {};

int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	while (t--) {
		c=0;
		A[0] = 0;
		cin >> n;
		for(int i=1; i<=n; i++)
			cin >> A[i];
			
		for(int i=1; i<=n; i++)
			cin >> B[i];
			
		for(int i=n; i>=1; i--)
			A[i] = A[i] - A[i-1] ;
		
		for(int i=1; i<=n; i++)
			if( B[i]<=A[i] )
				c++;
		
		cout << c << endl;
	}
	return 0;
}
