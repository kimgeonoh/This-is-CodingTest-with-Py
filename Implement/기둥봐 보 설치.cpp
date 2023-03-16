#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(int n, vector<vector<int>> build_frame) {
    vector<vector<int>> result;
    int col[n][n], bo[n][n];
    
    for(int i=0; i<n; i++){
        if(build_frame[2][i]==0){ // 기둥
            int x=build_frame[0][i]
            int y=build_frmae[1][i];
            
            if(build_frame[3][i]==1){ // 설치
                if(col[x][y]=0){ // 정상적 설치

                }
                else continue; // 무시
            }
            else{ // 삭제
                
            }
        }
        else { // 보
            
        }
         
    }
    
    sort(result.begin(),result.end());
    
    return result;
}
