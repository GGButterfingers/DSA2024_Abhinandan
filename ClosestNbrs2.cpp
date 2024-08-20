class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        map<int,vector<int>> nbrs,distances,comp;
        int city1,city2,dist;
        for(int i = 0;i < edges.size();i++) {
            city1 = edges[i][0];
            city2 = edges[i][1];
            dist = edges[i][2];

            nbrs[city1].push_back(city2);
            nbrs[city2].push_back(city1);

            distances[city1].push_back(dist);
            distances[city2].push_back(dist);
        }

        for(const auto& pair : nbrs) {
            int city1 = pairs.first;
            vector<int> nbr = pairs.second;
            int dist = 0;
            for(int i = 0;i < nbr.size(); i++) {
                int neighbour = nbr[i];
                dist += distance[city1][i];
                if (distance <= distanceThreshold) {
                    comp[city1].push_back(neighbour);
                    comp[city1].push_back(dist);
                }
                else
                    break;
                auto key = nbrs.find(neighbour);
                vector<int> nbr = key.second;
                for(int i = 0;i < nbr.size(); i++) {
                    dist += distance[key][i];
                    if (distance <= distanceThreshold) {
                        comp[city1].push_back(key);
                        comp[city1].push_back(dist);
                    }
                    else
                        break;
                }
            }
        }
    }
};