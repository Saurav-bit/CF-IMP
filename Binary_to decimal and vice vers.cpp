#include<bits/stdc++.h>
typedef long long int ll ;
#define pb push_back
#define rep(i,k,n) for (i = k; i < n; i++)
#define coy cout<<"YES"
#define con cout<<"NO"
using namespace std;


vector<ll>ans;
const ll mad=1e9+7;
const unsigned long long int M = 101;
ll sieve[101];

//const unsigned int n=10000005;



bool solve(pair<ll,ll>a,pair<ll,ll>b)
{

     return(a.first>b.first);


}

ll ceil_div(ll a, ll b) {
    return (a + b - 1) / b;

}



ll mod(ll a, ll m)
{
	return (a%m + m) % m;
}

ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);

}

ll dig_sum(ll n)
{
    ll x=n;
    ll cnt=0;

    while(x>0)
    {
        ll a=x%10;
        cnt=cnt+a;

        x=x/10;
    }
    return cnt;


}
ll dig_cnt(ll n)
{
    ll x=n;
    ll cnt=-1;

    while(x>0)
    {
        ll a=x%10;
        cnt=max(cnt,a);

        x=x/10;
    }
    return cnt;


}
bool dig_check(ll n,ll num,ll len)
{
    ll x=n;
    ll cnt=0;

    while(x>0)
    {
        ll a=x%10;
        if(a==num)
        {
            cnt++;
        }

        x=x/10;
    }
    if(cnt==len)
    {
        return true;
    }
    else
    {
        return false;
    }


}

 void si()
 {
     ll i,j;
     rep(i,0,M)
     {
         sieve[i]=1;
     }
     sieve[0]=sieve[1]=0;
     for(i=2;i<M;i++)
     {
         for(j=i*i;j<M;j=j+i)
         {
             sieve[j]=0;
         }
     }
//     rep(i,0,M)
//     {
//         if(sieve[i]==1)
//         {
//             ans.push_back((i));
//         }
//     }
//






 }

ll low(vector<ll>arr,ll l,ll r,ll num)
{
    ll m=0;
    while(l<r)
    {
         m=l+(r-l)/2;
        if(arr[m]<num)
        {
            l=m+1;
        }
        else
        {
            r=m;
        }
    }
//cout<<arr[l]<<" ";
   if(arr[l]>=num)
   {
      return l;
   }
   else
   {
       return arr.size();
   }

//   if(arr[l]<=num)
//   {
//       return true;
//   }
//   else
//   {
//       return false;
//   }
}

ll power(ll a ,ll b)
{
    ll bb;
    if(b<0)
    {
        bb=b;
    }
    else
    {
        bb=b;
    }
    ll ans=1;
    while(bb>0)
    {
        if(bb%2==0)
        {
            bb=bb/2;
            a=mod(a,mad)*mod(a,mad);
        }
        else
        {
            bb=bb-1;
            ans=mod(ans,mad)*mod(a,mad);
        }
    }
    return ans;

}


string to_binary(ll num)
{
    string str="";
    ll n=0;
while(num!=1)
    {
        n=num%2;

        str=str+to_string(n);
        //vec.push_back(n);
        num=num/2;
    }
    str=str+"1";
    //cout<<vec.size();
    //cout<<str;
//    cout<<"\n";


reverse(str.begin(),str.end());
return (str);
}





ll show(ll a)
{
    return (log2(a));
}



ll lcm(ll a,ll b)
{
    return (a*b / gcd(a,b));
}





void fun()
{

//USED IN 1625 A
    ll n,m,j,i,k,y,x;
auto int_bits_size = 32; // maximum number of bits for the integer
auto some_integer = 14;
string str = bitset<32>(some_integer).to_string();


cout<<str<<"\n";

string bin_string = str;
 ll number =0;
number = stoi(bin_string, 0, 2);
cout<<number;







}
























int main()
{
//ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;

//si();




t=1;
cin>>t;
 while(t--)
 {
     fun();
     cout<<"\n";

    }


}
