#include <bits/stdc++.h>
using namespace std;

struct stu {
	string str;
	int marks;
};
typedef struct stu stud;

bool comp(stud a, stud b){
	if (a.marks!=b.marks)
		return a.marks>b.marks;
	else
		return a.str<b.str;
	return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n,i;
    cin>>n;
    stud arr[n];
    for (i=0;i<n;i++)
    {
    	cin>>arr[i].str>>arr[i].marks;
    }
    sort(arr,arr+n,comp);
    for (i=0;i<n;i++)
    {
    	cout<<arr[i].str<<" "<<arr[i].marks<<'\n';
    }
    return 0;
}
