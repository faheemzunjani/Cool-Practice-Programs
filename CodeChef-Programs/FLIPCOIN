#include<iostream>
using namespace std;

short A[100000] = {0};
int tree[262144] = {0};
int lazy[262144] = {0};
int N,Q,x,y,z;

void updateRange(int node, int start, int end, int l, int r){
    if(lazy[node]!=0){
        if(lazy[node]&1){
            tree[node] = (end-start+1) - tree[node] ;
            if(start!=end) { lazy[node*2]+=lazy[node]; lazy[node*2+1]+=lazy[node];}
        }
        lazy[node] = 0;
    }

    if (start>end || start>r || end<l) return;

    if ( l<=start && end<=r ){
        tree[node] = (end-start+1) - tree[node];
        if(start!=end){
            lazy[node*2]++;
            lazy[node*2+1]++;
        }
        return;
    }
    int mid = (start+end) / 2;
    updateRange(node*2, start, mid, l, r);
    updateRange(node*2+1, mid+1, end, l, r);
    tree[node] = tree[node*2] + tree[node*2+1];
}

int queryRange(int node, int start, int end, int l, int r){
    if( start>end || start>r || end<l) return 0;
    if(lazy[node]!=0){
        if(lazy[node]&1) tree[node] = (end-start+1)-tree[node];
        if(start!=end){lazy[node*2]+=lazy[node]; lazy[node*2+1]+=lazy[node];}
        lazy[node] = 0;
    }
    if(start>=l && end<=r) return tree[node];
    int mid = (start+end)/2;
    return(queryRange(node*2,start,mid,l,r)+queryRange(node*2+1,mid+1,end,l,r));
}

int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> Q;
	while(Q--) {
		cin >> x >> y >> z;
        if(x==0) updateRange(1,0,N-1,y,z);
        else cout << queryRange(1,0,N-1,y,z) << endl;
	}
	return 0;
}
