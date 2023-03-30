#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;
int arr[100001];
int answer, temp;

void process(int i) {
    if(i==n-1) return;
    temp += arr[i];
    answer += temp + arr[i+1];
    process(i+1);   
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++) {
        int x; cin >> x; v.push_back(x);
    }
    
    sort(v.begin(),v.end());
    
    for(int i=0; i<n; i++) arr[i] = v[i];
    
    process(0);
    
    cout << answer << '\n';
}
