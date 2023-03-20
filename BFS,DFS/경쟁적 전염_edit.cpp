#include <bits/stdc++.h>

using namespace std;

int n,k;
int test[201][201];              // map
vector<pair<int, int>> v[1000]; // v의 index는 virus의 숫자이며 pair로 좌표가 들어간다
int s,x,y;

int dx[]={-1,0,1,0};            // 상우하좌
int dy[]={0,1,0,-1}; 

void f(){
    
    queue<pair<int,int>> q;
    
    for(int i=1; i<=k; i++) {                // k번 반복한다
        for(int j=0; j<v[i].size(); j++){    // v에 있는 사이즈만큼 큐에 좌표를 넣는다
            int a = v[i][j].first;
            int b = v[i][j].second;
            
            q.push({a,b});
        }
        
        while(!q.empty()){                 
            for(int m=0; m<4; m++){
                int nowx = q.front().first;
                int nowy = q.front().second;
                int nx = nowx + dx[m];
                int ny = nowy + dy[m];
                if(0<nx||nx<=n||0<ny||ny<=n){   // 맵에 벗어나지 않고
                    if(test[nx][ny]==0){        // 바이러스가 먼저 안 온 경우
                        test[nx][ny]=i;         // map을 업데이트하고
                        v[i].push_back({nx,ny});  // 다음 s초 후 를 위해 v에 좌표를 넣어준다
                    }
                }
            }
            q.pop();
        }
        
    }
}

int main(){
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int input; cin >> input; test[i][j] = input;
            if(input>0) v[input].push_back({i,j});
        }
    }
    cin >> s >> x >> y;
    
    for(int i=0; i<s; i++) f();

    cout << test[x][y];
}
