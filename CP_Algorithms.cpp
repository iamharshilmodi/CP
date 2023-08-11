//----------------------------------------------------------
//SIEVE 
// O log(N*(log(log(N))))

#define SIEVE

ve prime;
ve lp(200005),hp(200005);

void sieve()
{
    vector <bool> isprime(200005,1);
    isprime[0]=isprime[1]=0;
    for (int i = 2; i < 200005; ++i)
    {
        if(isprime[i])
        {
            hp[i]=lp[i]=i;
            for (int j = i*2; j < 200005; j+=i)
            {
                isprime[j]=0;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }
    for (int i = 0; i < 200005; ++i)
    {
        if(isprime[i])
        {
            prime.pb(i);
        }
    }
}

//----------------------------------------------------------
// Prime factors [*SIEVE NEEDED*]
// O log(N)

ve primefact(ll n)
{
    ve v;
    while(n>1)
    {
        v.pb(lp[n]);
        n/=lp[n];
    }
    return v;
}

//----------------------------------------------------------
// All divisors/factors 
// O Nlog(N)

ve div[200005];

void divisors()
{
    for (int i = 0; i < 200005; ++i)
    {
        for (int j = i; j < 200005; j+=i)
        {
            div[j].pb(i);
        }
    }
}

//----------------------------------------------------------
// nCr

#define FACTORIAL

ve fact(200005);

void factorial()
{
    fact[0]=fact[1]=1;
    for (int i = 2; i < 200005; ++i)
    {
        fact[i]=(fact[i-1]*i)%mod;
    }
}

ll mmi(ll a)
{
    ll out=1;
    ll b=mod-2;
    while(b)
    {
        if(b%2)
        {
            out=(out*a)%mod;
        }
        a=(a*a)%mod;
        b=(b>>1);
    }
    return out;
}

ll ncr(ll n,ll r)
{
    ll a=fact[n];
    ll b=(fact[n-r]*fact[r])%mod;
    b=mmi(b);
    ll out=(a*b)%mod;
    return out;
}

//----------------------------------------------------------
// Power in Log(N)

ll power(ll a,ll b)
{
    ll out=1;
    while(b)
    {
        if(b%2)
        {
            out=(out*a)%mod;
        }
        a=(a*a)%mod;
        b=(b>>1);
    }
    return out;    
}

//----------------------------------------------------------
// GCD LCM
// Log(N)

ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

ll lcm(ll a,ll b)
{

    return (a/gcd(a,b))*b;
}


//----------------------------------------------------------


