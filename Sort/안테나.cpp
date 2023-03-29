#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int n;
int arr[200001];
vector<pair<int,int>> v;

int main() {
    fastio;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum+=abs(arr[i]-arr[j]);
        }
        v.push_back({sum,arr[i]});
    }
    
    sort(v.begin(),v.end());
    
    cout << v[0].second;

}
