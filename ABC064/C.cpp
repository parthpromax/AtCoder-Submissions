#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define vll std::vector<ll>
#define mll std::map<ll, ll>
#define pll std::pair<ll, ll>
#define mpll std::map<pair<ll,ll>, ll>
#define sll std::set<ll>
#define fi first
#define se second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1000000007
#define maxlong 9223372036854775808


/*
###################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
###################################################### 
*/

// vll primes;
// vll primefac[10000001];

// void sieve(ll n)
// {
// 	rep(i,2,n+1)
// 	{
// 		if(primefac[i].empty())
// 		{	
// 			primes.pb(i);
// 			for(ll j=i;j<=n;j+=i)
// 				primefac[j].pb(i);
// 		}
// 	}
// }

bool bt(ll a,ll b,ll c)
{
	return c>=a && c<=b;
}
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("C_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------


	s(n);
	ll a[n];
	re(i,n)
		cin>>a[i];
	ll rg[9];
	re(i,9)
		rg[i]=0;
	re(i,n)
	{
		if(bt(1,399,a[i]))
			rg[0]++;
		else if(bt(400,799,a[i]))
			rg[1]++;
		else if(bt(800,1199,a[i]))
			rg[2]++;
		else if(bt(1200,1599,a[i]))
			rg[3]++;
		else if(bt(1600,1999,a[i]))
			rg[4]++;
		else if(bt(2000,2399,a[i]))
			rg[5]++;
		else if(bt(2400,2799,a[i]))
			rg[6]++;
		else if(bt(2800,3199,a[i]))
			rg[7]++;
		else if(bt(3200,10000000000000000,a[i]))
			rg[8]++;
	}
	ll cnt=0,mi,ma;
	re(i,8)
		if(rg[i])
			cnt++;
	if(rg[8] && !cnt){
		mi=1;ma=rg[8];
	}
	else{
		mi=cnt;ma=mi+rg[8];
	}
	cout<<mi<<" "<<ma;

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}