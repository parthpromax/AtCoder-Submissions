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
	freopen("C_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------
ll h,w;
cin>>h>>w;

if(!(h%3) || !(w%3))
	cout<<0;
else
{
	ll a= h*round(w/3.0);
	ll b=(h/2)*(w-round(w/3.0));
	ll c=(h-h/2)*(w-round(w/3.0));
	ll ans=max(a,max(b,c))-min(a,min(b,c));
	// b=(h/2)*(w-round(w/3.0)-1);
	// c=(h-h/2)*(w-round(w/3.0)+1);
	// ans=min(ans,max(a,max(b,c))-min(a,min(b,c)));
	swap(h,w);
	a= h*round(w/3.0);
	b=(h/2)*(w-round(w/3.0));
	c=(h-h/2)*(w-round(w/3.0));
	ans=min(ans,max(a,max(b,c))-min(a,min(b,c)));
	// b=(h/2)*(w-round(w/3.0)-1);
	// c=(h-h/2)*(w-round(w/3.0)+1);
	// ans=min(ans,max(a,max(b,c))-min(a,min(b,c)));
	cout<<ans;
}

//  --------------------------------------------------------------------------------------

return 0;
}
