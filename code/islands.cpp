////
//// Created by Raymond Li on 2019-02-10.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <map>
//#include <utility>
//
//using namespace std;
//
//class Solution {
//public:
//    int numIslands(vector<vector<char>>& grid) {
//        if (grid.empty()) {
//            return 0;
//        }
//        const size_t l = grid.size();
//        const size_t w = grid[0].size();
//        int num = 0;
//        int visited[l][w] ;
//        for (int i = 0; i< l; ++i) {
//            for (int j = 0; j < w; ++j) {
//                visited[i][j] = 0;
//            }
//        }
//        queue<pair<int, int>> q;
//         for (int i = 0; i < l; ++i) {
//            for (int j = 0; j < w; ++j) {
//                if (visited[i][j] == 0) {
//                    visited[i][j] = 1;
//                    if (grid[i][j] == '1') {
//                        num++;
//                        q.push(pair(i,j));
//
//                        while (!q.empty()) {
//                            pair<int,int> now = q.front();
//                            q.pop();
//                            int x = now.first;
//                            int y = now.second;
//                            //cout << x << " " << y << endl;
//                            if (x+1 < l && grid[x + 1][y] == '1') {
//
//                                if (visited[x+1][y] == 0) {
//                                    // cout << visited[x+1][y] << endl;
//                                    // cout << x << " " << y << endl;
//                                    q.push(pair(x+1, y));
//                                    visited[x+1][y] = 1;
//                                }
//                            }
//                            //cout << grid[0][2]  <<  ' ' << visited[0][2]<< endl;
//
//                            if (y+1 < w && grid[x][y + 1] == '1') {
//                                // cout << x << " h " << y + 1 << endl;
//                                if (visited[x][y + 1] == 0) {
//                                    // cout << x << " h " << y + 1 << endl;
//                                    q.push(pair(x, y+1));
//                                    visited[x][y + 1] = 1;
//                                }
//                            }
//
//                            if (y-1 >= 0 && grid[x][y - 1] == '1') {
//                                // cout << x << " h " << y + 1 << endl;
//                                if (visited[x][y - 1] == 0) {
//                                    // cout << x << " h " << y + 1 << endl;
//                                    q.push(pair(x, y-1));
//                                    visited[x][y - 1] = 1;
//                                }
//                            }
//
//                            if (x-1 >= 0 && grid[x-1][y] == '1') {
//                                // cout << x << " h " << y + 1 << endl;
//                                if (visited[x-1][y] == 0) {
//                                    // cout << x << " h " << y + 1 << endl;
//                                    q.push(pair(x-1,y));
//                                    visited[x-1][y] = 1;
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//        return num;
//    }
//};
