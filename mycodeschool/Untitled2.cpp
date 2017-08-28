#include <iostream>
using namespace std;

char perform(int n,char c){
    int result = ((int)c - 97 +n)%26 + 97;
    return (char)result;
}


int main()
{
    int t;
    cin>>t;
    char c[26] = {0};
    while(t--){ 
        string str;
        cin>>str;
        int l = str.length();
        int seen[l]={0};
        char result[l];
        for(int i=0;i<l;i++){
            int count = 0;
            if(seen[i]==0){
                for(int j=i;j<l;j++){
                    if(str[i]==str[j]){
                        count++;
                    	result[j] = perform(13+count-1,str[j]);
                        seen[j] = 1;
                    }
                }
            }
        }
        for(int i=0;i<l;i++){
            cout<<result[i];
        }
        cout<<"\n";
    }
    return 0;
}

