#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        n=sizeof(a)/sizeof(a[0]);
        sort(a,a+n);
        ll min_sum = a[0], diff = a[0];
        for(ll i=1;i<=k;i++){
            diff=diff+a[i];
            if(diff<=min_sum){
                min_sum = diff;
            }
            else{
                break;
            }
        }
        cout<<min_sum<<"\n";
    }
    return 0;
}

