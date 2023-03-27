#include <bits/stdc++.h>

using namespace std;

int n, L, R;
int a[50][50];
vector<pair<int, int>> uni;
int cnt;

int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};

int visit[50][50];
vector <pair<int, int>> tem;

void bfs(){
    if() // break
    
    queue<pair<int, int> q;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            visit[i][j]=1;
            if(!visit[i][j]) continue;

            q.push({i,j});
            
            while(!q.empty()){
                int now = q.front();
                q.pop();
                
                for(int k=0; k<4; k++){
                    int nx = i + dx[k];
                    int ny = j + dx[k];
            
                    if(0<=nx&&nx<n&&0<=ny&&ny<n){
                        if(L<=(a[i][j]-a[nx][ny])&&(a[i][j]-a[nx][ny]<=R)){
                            visit[nx][ny]=1;
                            q.push({nx,ny});
                            //uni.push_back ??
                        }      
                    }
                }
            }
        }
    }
    cnt++;
}

int main() {
    cin >> n >> L >> R;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    
    bfs();
    
    cout << cnt << '\n';
}
