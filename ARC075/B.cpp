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
#define mpll std::map<pair<ll,ll>, ll>
#define sll std::set<ll>
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


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("B_in.txt","r",stdin);
	#endif


//--------------------------------------------------------------------------------------
	
	s(n);
	s(a);
	s(b);
	ll h[n];
	ll sum=0;
	rep(i,0,n){
		cin>>h[i];
		sum+=h[i];
	}
	// sort(h,h+n);
	// reverse(h,h+n);

	ll low=-1;
	// cout<<low;
	ll high=1000000000;
	// cout<<sum/a;
	ll aa[n];
	// cout<<low<<high<<endl;
	while(low<high-1){

		ll mid=(low+high)/2;
		// cout<<low<<high<<endl;;
		ll suma=0;
		ll f=0;
		bool bb;
		rep(i,0,n){
			aa[i]=ceil((h[i]-mid*b)*1.0/(a-b));
			if(aa[i]<0)
				continue;
			// cout<<h[i]<<mid<<b<<a<<aa[i]<<endl;;
			if(aa[i]>(mid-suma)){
				f=1;break;	
			}
			suma+=aa[i];
		// cout<<i<<aa[i]<<endl;
		}
	// cout<<suma;
		if(f==1)bb=false;
		else if(suma<=mid)bb=true;
		else
			bb=false;
		// cout<<mid<<" "<<bb<<endl;
		if(bb)
			high=mid;
		else
			low=mid;
	}


	cout<<high;

//--------------------------------------------------------------------------------------

	return 0;
}
