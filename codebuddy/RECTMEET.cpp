#include <bits/stdc++.h>
using namespace std;
int overlap(int a,int b,int c,int d,int e,int f,int g,int h)
{
    if (e>=c||f>=d||a>=g||b>=h)
        return 0;
    int x1=(a>e)?a:e;
    int y1=(b>f)?b:f;
    int x2=(c<g)?c:g;
    int y2=(d<h)?d:h;
    int oarea=(x2-x1)*(y2-y1);
    return oarea;
}

int area(int x1,int y1,int x2, int y2)
{
    int x=x2-x1;
    int y=y2-y1;
    if (x<0)
        x*=(-1);
    if (y<0)
        y*=(-1);
    int area=x*y;
    return area;
}

int main()
{
    int ax1,ax2,ay1,ay2,bx1,bx2,by1,by2;
    cin>>ax1>>ay1>>ax2>>ay2;
    cin>>bx1>>by1>>bx2>>by2;
    int res=area(ax1,ay1,ax2,ay2)+area(bx1,by1,bx2,by2)-overlap(ax1,ay1,ax2,ay2,bx1,by1,bx2,by2);
    cout<<res;
    return 0;
}
