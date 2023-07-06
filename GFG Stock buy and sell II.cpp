//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int N,i;
        scanf("%d", &N);
        int price[N];
        for(i=0;i<N;i++){
            scanf("%d",&price[i]);
        }
        
        stockBuySell(price,N);
        
        
    }
    return 0;
}

// } Driver Code Ends


//User function Template for C


void stockBuySell(int arr[], int n){
    int ans=0;
        for (int i=1;i<n;i++){
            if (arr[i]>=arr[i-1]) ans+=arr[i]-arr[i-1];
        }
    
    printf("%d", ans);
}