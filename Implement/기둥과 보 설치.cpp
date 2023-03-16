#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(int n, vector<vector<int>> build_frame) {
    vector<vector<int>> result;
    int col[n][n], bo[n][n];
    int iter = build_frame.size();
    
    for(int i=0; i<n; i++){     // 초기화
        for(int j=0; j<n; j++){
            col[i][j]=0;
            bo[i][j]=0;
        }
    }
    
    for(int i=0; i<iter; i++){
        int x = build_frame[i][0];
        int y = build_frame[i][1];
        
        if(build_frame[i][2]==0){ // 기둥
            if(build_frame[i][3]==1){ // 설치
                if(y==0||col[x][y-1]==1||bo[x-1][y]==1||bo[x][y]==1){ // 정상적 설치
                    col[x][y]=1;
                }
                else continue; // 무시
            }
            /*else{ // 삭제
                if(){ // 정상적 삭제
                    col[x][y]=0;
                }
                else continue; // 무시
            }*/
        }
        else { // 보
            if(build_frame[i][3]==1){ // 설치
                if(col[x][y-1]==1||col[x+1][y-1]==1||bo[x-1][y]==1||bo[x+1][y]==1){ // 정상적 설치
                    bo[x][y]=1;
                }
                else continue; // 무시
            }
            /*else{  // 삭제
                if(){ // 정상적 삭제
                    bo[x][y]=0;
                }
                else continue; // 무시
            }*/
        }
         
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(bo[i][j]==1){
                result.push_back({i,j,1});
            }
            if(col[i][j]==1){
                result.push_back({i,j,0});
            }
        }
    }
    
    sort(result.begin(),result.end());
    
    return result;
}
