/*
*******************************************************************************
**                  ===================================                      **
**                  =  Name       :  Hasan Mahmud
**                  =  Institute  :  UAP,CSE
**                  =  Email      :  hasan404cse@gmail.com
**                  ===================================                      **
*******************************************************************************
*/
#include<bits/stdc++.h>
using namespace std;

#define FastRead	      ios_base::sync_with_stdio(0);cin.tie(0);
#define fRead		      freopen("in.txt","r",stdin);
#define fWrite		      freopen("out.txt","w",stdout);

#define l		      long
#define ll		      long long
#define ull		      unsigned long long
#define sf		      scanf
#define pf		      printf
#define PI		      acos(-1.0)
#define all(a)		      a.begin(),a.end()

#define min3(a,b,c)	      min(a,min(b,c))
#define max3(a,b,c)	      max(a,max(b,c))
#define min4(a,b,c,d)	      min(a,min(b,min(c,d)))
#define max4(a,b,c,d)	      max(a,max(b,max(c,d)))

#define ABS(x)		      ((x)<0?-(x):(x))
#define SORT(v,n)	      sort(v,v+n)
#define REV(v)		      reverse(v.begin(),v.end())

int v[10005];
int k=1;
void Go()
{
	for(int i=0;i<3;i++)
        cin>>v[i];
    SORT(v,3);
    printf("Case %d: %d\n",k++,v[1]);
}
int main()
{
	FastRead
	int Tcase;
	cin>>Tcase;
	for(int i=1;i<=Tcase;i++)
        Go();
	return 0;
}



