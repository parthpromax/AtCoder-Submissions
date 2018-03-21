#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define pll std::pair<ll, ll> 
#define ppll std::pair<ll, pll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::map<ll, ll> 
#define mpll std::map<pll, ll>
#define mppll std::map<ppll, ll>
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

int done[123456];
int f=0;
ll m;
vll g[132456];
stack<ll> s;
stack<ll> ss;

ll fen,snn;

void dfs1(ll n)
{
	if(done[n])return;
	done[n]=1;
	// cout<<n<<endl;
	fen++;
	for(auto a:g[n])
	{
		if(done[a]==0)
			dfs1(a);
	}
}
void dfs2(ll n)
{
	// cout<<done[n]<<endl;
	if(done[n])
		return;
	done[n]=1;
	// cout<<n<<endl;
	snn++;
	for(auto a:g[n])
	{
		if(done[a]==0)
			dfs2(a);
	}
}
void findpath(ll n)
{
	if(done[n])return;
	done[n]=1;

	if(f)return;
	if(n==m)
	{
		f=1;
		while(!s.empty())
		{
			ss.push(s.top());
			s.pop();
		}
		return;
	}
	for(auto a:g[n])
	{
		if(done[a]==0)
		{
			s.push(a);
			if(f==0)findpath(a);
		}
	}
	if(!f)s.pop();
}


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("B_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	// std::vector<int> v[100];
	// std::vector<int> temp(100,4);
	// rep(i,0,100)
	// 	v[i] = temp;

	cin>>m;
	ll a,b;
	re(i,m-1)
	{
		cin>>a>>b;
		g[a].eb(b);
		g[b].eb(a);
	}

	s.push(1);
	findpath(1);
	// // cout<<"s";
	// while(!s.empty())
	// {
	// 	cout<<s.top()<<endl;
	// 	s.pop();
	// }

	// cout<<s.size();
	// s.pop();

	while(!s.empty())s.pop();

	while(!ss.empty()){
		s.push(ss.top());
		ss.pop();
	}
	
	ll tempo=(s.size())/2;
	tempo--;

	while(tempo--)
	{
		
		s.pop();
	}
	// cout<<s.top()<<"ss";
ll temp=s.top();
s.pop();
ll temp1=s.top();
// cout<<temp<<temp1<<endl;
	// fen=(s.size()-1)-snn;
	// // cout<<fen<<snn;

	// 	s.pop();
	// ll temp;
	// if(s.empty())
	// 	temp=1;
	// else
	// temp=s.top();
	// // m to temp

	re(i,g[temp1].size())
	{
		if(g[temp1][i]==temp)
			g[temp1].erase(g[temp1].begin()+i);
	}

	re(i,g[temp].size())
	{
		if(g[temp][i]==temp1)
			g[temp].erase(g[temp].begin()+i);
	}

// if(temp!=1)
// 	{
// 		ll last;

// 	while(!s.empty())
// 	{
// 		last=s.top();
// 		s.pop();
// 	}
// 	re(i,g[last].size())
// 	{
// 		if(g[last][i]==1)
// 			g[last].erase(g[last].begin()+i);
// 	}

// 	re(i,g[1].size())
// 	{
// 		if(g[1][i]==last)
// 			g[1].erase(g[1].begin()+i);
// 	}
// }


// cout<<fen<<"s"<<snn;

re(i,m+1)
	done[i]=0;
dfs1(1);
fen--;

// for(auto a:g[7])
// 	cout<<a;
re(i,m+1)
	done[i]=0;
// cout<<done[m];
dfs2(m);
snn--;

// cout<<fen<<"s"<<snn;

// cout<<fen<<"s"<<snn;

if(fen<=snn)
	cout<<"Snuke";
else
	cout<<"Fennec";


	// []
	// snn
	// stack<ll> s;
	// s.push(1);
	// while(1){
	// 	ll cur=s.pop();
	// 	doneat[cur]=1;
	// 	for(auto a:g[cur])
	// 	{
	// 		if(doneat[a]==0)
	// 			s.push(a);
	// 	}
	// }

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}