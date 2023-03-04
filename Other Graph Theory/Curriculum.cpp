#include<bits/stdc++.h>

using namespace std;

// 위상정렬에 필요한 변수 선언
int indegree;     // 진입차수
vector<int> graph // 노드간 연결 (a에서 b로)
  
void topologySort(){
  vector<int> result;  // 결과값
  queue<int> q;        // 진입차수가 0인 큐를 넣고 빼고
}

int main() { 
  vector<int> v[500]; // 500개 원소 선언
  vector<int> v(500); // 500개 원소를 0으로 초기화 
}

/*

NODE
1->2,3,4   이 모양은 graph에 그대로 넣는다. 그리고 각 노드에서 걸리는 시간은 time으로 넣고 time에 들어간 값을 통해 result를 max로 비교하여 넣는다
3->4,5

main에서 입력을 받는다
step1: x=10, time[1]=10
step2: x=10, time[2]=10, indegree[2]=1, graph[1]=2
step3: x=4, time[3]=4, indegree[3]=1, graph[1]=3
step4: x=4, time[4]=4, indegree[4]=2, graph[3]=4, graph[1]=4
step5: x=3, time[5]=3, indegree[5]=1, graph[3]=5
*/
