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
	freopen("B_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------
ll h,w;
cin>>h>>w;
char a[h][w];

rep(i,0,h)
rep(j,0,w)
	cin>>a[i][j];


// cout<<h<<w;
rep(i,0,h+2)
{
	rep(j,0,w+2)
	{
		if(i==0 || j==0 || i==h+1 || j==w+1)
			cout<<"#";
		else
			cout<<a[i-1][j-1];
	}
	cout<<endl;
}

//  --------------------------------------------------------------------------------------

return 0;
}
