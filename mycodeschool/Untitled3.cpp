#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int t;
    cin>>t;
    while(t--){
        int t0,t1,t2;
        float v1,v2,d;
        int ans;
        cin>>t0>>t1>>t2>>v1>>v2>>d;
        if(t0>t1 && t0>t2){
            cout<<"-1\n";
        }
        else if(t0>t1){
            ans = (int)ceil((d/v2)*60) + t2;
            cout<<ans<<"\n";
        }
        else if(t0>t2){
            ans = (int)ceil((d/v1)*60) + t1;
            cout<<ans<<"\n";
        }
        else{
            float ans1 = ((d/v1)*60);
            float ans2 = ((d/v2)*60);
            int ans,add;
            if(ans1<ans2){
                ans = ceil(ans1);
                add = t1;
                cout<<ans+add<<"\n";
            }
            else{
                ans = ceil(ans2);
                add = t2;
                cout<<ans+add<<"\n";
            }
        }
    }
}

