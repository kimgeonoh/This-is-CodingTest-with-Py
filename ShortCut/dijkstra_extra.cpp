void dijkstra(int start) {
    priority_queue<pair<int, int> > pq;
    pq.push({0, start});
    d[start] = 0;
    while (!pq.empty()) {
        int dist = -pq.top().first;  // 최소힙에서 음수를 붙여 양수로 만들어준다. 이는 cost를 계산하기 위함이다.
        int now = pq.top().second; 
        pq.pop();
      
        if (d[now] < dist) continue; // 이미 계산된 d[now]가 dist 보다 작다면 갱신할 필요가 없으므로 예외처리
      
        for (int i = 0; i < graph[now].size(); i++) {
            int cost = dist + graph[now][i].second;
          
            if (cost < d[graph[now][i].first]) {
                d[graph[now][i].first] = cost;
                pq.push({-cost, graph[now][i].first}); // -cost로 넣어서 원소들을 음수로 pq를 만들면 default로 만든 pq는 최소힙이다.
            }
        }
    }
}

int main(void) {
    
    fill(d, d + 100001, INF); // fill은 algorithm 헤더에 저장되어 있다. 이는 주로 array 또는 vector에서 자주 사용한다.
                              // fill ( 시작주소, 끝주소, val ) -> [시작주소,끝주소) 로 채워지게 된다. ex) int a[5]{}; fill(a,a+3,1); // {1,1,1,0,0} 
                              // 1차원 배열 fill
}
