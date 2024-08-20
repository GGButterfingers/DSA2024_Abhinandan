class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        map<int,map<int,int>> info;
        map<int,vector<int>> nbrs;
        //vector<int> nbrs;
        int dist = 0,city1,city2;

        for(int i = 0;i < edges.size();i++) {
            city1 = edges[i][0];
            city2 = edges[i][1];
            dist = edges[i][2];

            info[city1][city2] = dist;
            info[city2][city1] = dist;
        }

        for(const auto& nbr : info) {

            int distance = 0;
            vector<int> closest;
            int city1 = nbr.first;
            map<int,int> connections = nbr.second;
            
            for(cosnt auto& con : connections) {
                distance += connections.second;
                if (distance <= distanceThreshold) {
                    closest.push_back(connections.first);
                }
            }
        }