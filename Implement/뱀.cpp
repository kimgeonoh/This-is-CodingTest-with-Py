#include <bits/stdc++.h>

using namespace std;

int n,k;
int x,y,z;
int t,direction;

int nx,ny;

int dx[4]={0,1,0,-1}; //U,R,D,L 90도씩 회전
int dy[4]={-1,0,1,0}; //0,1,2,3

void turn_D() {
    direction += 1;
    if (direction == 4) direction = 0;
}

void turn_L() {
    direction -= 1;
    if (direction == -1) direction = 3;
}

int main() {
    
    cin >> n >> k; // n은 보드 크기, k는 사과 개수
    
    vector<vector<int>> map(n, vector<int>(n));
    vector<vector<int>> snake(n, vector<int>(n));
    
    for(int i=0; i<k; i++){
        cin >> x >> y;
        map[x][y] = 1;        // 사과 위치
    }
    
    cin >> z;                 // rotate 개수
    vector<pair<int,char>> rotate;
    
    for(int i=0; i<z; i++){
        int r; char c; cin >> r >> c;
        rotate.push_back({r,c});
    }
    
    x=1,y=1,direction=1; // x,y는 꼬리
    snake[1][1]=1;       // snake 처음 위치
    bool re = false;
    
    while(1){
        
        nx = x + dx[direction]; // nx,ny는 머리
        ny = y + dy[direction];
        
        int index = direction; // 꼬리 표시 위치
        
        snake[nx][ny]++; // 머리위치 
        
        if(map[nx][ny]==1) { // 사과가 존재한다면 꼬리 그대로
            t++;
            continue;
        }
        else {               // 사과가 존재하지 않는다면 꼬리가 머리를 따라간다. ???
            snake[x][y]--;
            x+=dx[index];
            y+=dy[index];
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(snake[i][j]>1) re=true; // 자기자신 부딪히면 끝
            }
        }
        
        if(nx>n||ny>n||nx<0||ny<0) re=true;            // 맵 넘어가면 끝
    
        t++;
        
        if(re) break;                      // 끝
        
        if(rotate[0].first==t) {           // 시간되면 rotate
            if(rotate[0].second=='D'){
                turn_D();
            }
            else turn_L();
            
            rotate.erase(rotate.begin());
        }
        
    }
    
    cout << t;
    
}
