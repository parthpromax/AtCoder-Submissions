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
	#define ff first
	#define ss second
	#define msll std::multiset<ll>
	#define all(c) c.begin(), c.end()
	#define allr(c) c.rbegin(), c.rend()
	#define srt(x) sort(all(x))
	#define rsrt(x) sort(allr(x))
	#define mp make_pair
	#define mt make_tuple
	#define eb emplace_back
	#define pb push_back
	#define s(yy) ll yy;cin>>yy
	#define mod 1e9+7
	#define maxlong 1e18+5


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

		#ifdef PARTH_LATHIYA_HOME

			freopen("A_in.txt","r",stdin);
		
			ll ttt,bkkk;
			cin>>ttt;
			bkkk=ttt;
			while(ttt--) {
				cout<<"Testcase - "<<bkkk-ttt<<"\n";
		#endif

	//--------------------------------------------------------------------------------------

	// whbrjpjyhsrywlqjxdbrbaomnw
		string s;
		cin>>s;
		ll prev[26];
		ll ma[26];
		re(i,26){
			prev[i]=-1;
			ma[i]=-1;
		}
		re(i,s.length()){
			ma[s[i]-'a']=max(ma[s[i]-'a'],(ll) (i-prev[s[i]-'a']-1));
			prev[s[i]-'a']=i;
		}
		re(i,26)
		{
			ma[s[i]-'a']=max(ma[s[i]-'a'],(ll)(s.length()-prev[s[i]-'a']-1));
		}
		ll ans=101;
		re(i,26)
			if(ma[i]!=-1)ans=min(ans,ma[i]);

			cout<<ans;

	//--------------------------------------------------------------------------------------
		
		#ifdef PARTH_LATHIYA_HOME
			cout<<"\n"; }
		#endif

		return 0;
	}