#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#define ll long long int

long long solve (int* a, int k,int N) {
   ll max=0;
   if(N==1){
       max=a[0];
   }
   else{
   	ll i,j;
       for( i=0;i<=N-k;i++){
           ll diff=0;
           for( j=i;j<i+k-1;j++){
               diff+=abs(a[j]-a[j+1]);
           }
           //printf("%d\n",diff);
           if(diff>max){
                max=diff;
            }
        }
   }
   return max;
}

int main() {
    int N;
    scanf("%d", &N);
    int i_A;
    int *A = (int *)malloc(sizeof(int));
    for(i_A=0; i_A<N; i_A++)
    	scanf("%d", &A[i_A]);
    int K;
    scanf("%d", &K);

    long long out_ = solve(A, K,N);
    printf("%lld", out_);
}
