#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

bool check(ll X, ll Y, ll A, ll B, ll C) {
	if ( A%X == 0 )
		if ( (B%X == 0) || B%(Y-A/X) == 0 ) return true;
		
	if ( A%Y == 0 )
		if ( B%(X-A/Y) == 0 || B%Y == 0 ) return true;
	
	return false;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	ll R,C,M,K,J;
	cin >> t;
	while(t--) {
		cin >> R >> C >> M >> K >> J ;
		if ( R*C != (M+K+J)){
			cout << "No" << endl;
			continue;
		}
		if( check(R,C,M,J,K) || check(R,C,K,M,J) || check(R,C,J,K,M) )
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
