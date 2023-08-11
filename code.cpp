#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ve vector <ll>
#define pll pair<ll,ll>
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define mp make_pair

#define all(x) (x).begin(),(x).end()
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define print(arr) for (int i = 0; i < arr.size(); ++i){cout<<arr[i]<<" ";}enl

#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define enl cout<<"\n";
#define en "\n"
#define sp cout<<fixed<<setprecision(6)

const ll mod = 1000000007;
const ll INF = INT_MAX;
const ll N = 1e6;

//----------------------------------------------------------
// optimization -> binary search 





class a{
    
public:
    void pr()
    {
        cout<<"in a\n";
    }
};

class b: public a{
    
public:
    void pr()
    {
        cout<<"b\n";
    }
};

class c: public b{
    
public:
    // void pr()
    // {
    //     cout<<"c\n";
    // }
};



void solve(){



c obj;
obj.pr();





























}

//----------------------------------------------------------

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL); 
   
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

#ifdef SIEVE
    sieve();
#endif

#ifdef FACTORIAL
    factorial();
#endif

ll testcases=1;
cin>>testcases;
while(testcases--){solve();}


}