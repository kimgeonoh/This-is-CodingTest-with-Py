#include <bits/stdc++.h>

using namespace std;

int n,k;
int test[201][201];       // 1부터 n까지 map
vector<pair<int, int>> v; // 각 virus가 있는 곳 indexing
int s,x,y;

int dx[]={-1,0,0,0};      //상우하좌, 시계방향
int dy[]={0,1,1,-1};

void m(){

    for(int i=0; i<k; i++) {        // 낮은 수 부터 퍼지므로 바이러스는 우선순위대로 퍼진다
        
        int a = v[i].first;        // 바이러스가 있는 위치
        int b = v[i].second;
     
        for(int j=0; j<4; j++){   // 상하좌우로
            int nx = a + dx[j];
            int ny = b + dy[j];
            if(nx>0||nx<=n||ny>0||ny<=n){                 // 맵에서 벗어나지 않고
                if(test[nx][ny]==0) test[nx][ny]=i+1;     // 처음 도달했다면 바이러스퍼짐
            }
        }
    }
}

int main(){
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int input; cin >> input; test[i][j] = input;
            if(input>0) v.push_back({i,j});
        }
    }
    cin >> s >> x >> y;
    
    for(int i=0; i<s; i++) m();   // s 초 후 m function 수행
    
    cout << test[x][y];
}
