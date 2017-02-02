#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define rz resize
#define nl '\n'
typedef long long ll;
typedef pair<int,int> pii;
////////////////////////////////////////////////////////////////////////////////

const ll mod = 7+(ll)1e9,NN = 100100;
char s[NN],t[NN];
int n,m;
int ft[NN],last[NN];

ll dp[NN],pr[NN],lm[NN];

int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int testcases;
  cin >> testcases;
  while(testcases--)
  {
    cin>>1+s>>1+t;
    n = strlen(1+s), m = strlen(1+t);

    ft[1]=0;
    for(int j=0,i=2;i<=m;i++){
      while(j>0 and t[j+1]!=t[i])j=ft[j];
      if(t[j+1]==t[i])j++;
      ft[i]=j;
    }

    memset(last,0,sizeof last);
    for(int i=1,j=0;i<=n;i++){
      while(j>0 and s[i]!=t[j+1])j=ft[j];
      if(s[i]==t[j+1])j++;
      if(j==m){
        last[i]=i-m+1;
        j=ft[j];
      }
    }
    for(int i=1;i<=n;i++)last[i]=max(last[i],last[i-1]);

    dp[0]=1;pr[0]=1;lm[0]=0;
    for(ll i=1;i<=n;i++){
      int j = last[i];
      //cerr<<i<<":"<<j<<endl;
      if(j==0){
        dp[i]=0;
      }else{
        dp[i] = ( ((j*pr[j-1])%mod) + mod - lm[j-1] )%mod;
      }
      pr[i] = (pr[i-1]+dp[i])%mod;
      lm[i] = ( lm[i-1] + ( (i*dp[i])%mod ) )%mod;
    }

    //for(int i=1;i<=n;i++)cerr<<dp[i]<<' ';cerr<<endl;
    
    cout << (pr[n]+mod-pr[0])%mod << nl;//////////////
  }
  return 0;
}