#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define vll std::vector<ll>
#define mll std::map<ll, ll>
#define sll std::set<ll>
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define pb push_back
#define mod 1000000007

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("A_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

int a[7]={1, 3, 5, 7, 8, 10, 12};
int b[4]={4, 6, 9, 11};
int c[1]={2};

//  --------------------------------------------------------------------------------------

int x,y;
cin>>x>>y;

if(x==2 || y==2)
	cout<<"No";

else
{
	int f1=0,f2=0;
	rep(i,0,4)
	{
	if(b[i]==x)f1=1;
	if(b[i]==y)f2=1;

	}
	if((f1 && !f2)  || (!f1 && f2)) 
		cout<<"No";
		else
		{cout<<"Yes";}
}
return 0;
}
