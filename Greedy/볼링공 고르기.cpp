#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m; 
    
    int arr[1000];
        
    for(int i=0; i<n; i++){
        int x; cin >> x;
        arr[i]=x;
    }
    
    int cnt=0;
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(i!=j&&arr[i]!=arr[j]){
                cnt++;
            }
        }
    }

    cout << cnt << '\n';
}
