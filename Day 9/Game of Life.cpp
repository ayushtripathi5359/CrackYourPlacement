class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size(), n = board[0].size();
        vector<pair<int,int>> directions = {{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};
        vector<pair<int,int>> toOne, toZero;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int liveNeighbors = 0;
                for (int k = 0; k < 8; k++) {
                    int row = i + directions[k].first;
                    int col = j + directions[k].second;
                    if (row >= 0 && col >= 0 && row < m && col < n && board[row][col] == 1) {
                        liveNeighbors++;
                    }
                }
                if (board[i][j] == 1) {
                    if (liveNeighbors < 2 || liveNeighbors > 3) {
                        toZero.push_back({i, j});
                    }
                } else {
                    if (liveNeighbors == 3) {
                        toOne.push_back({i, j});
                    }
                }
            }
        }

        for (auto cell : toZero) {
            board[cell.first][cell.second] = 0;
        }
        for (auto cell : toOne) {
            board[cell.first][cell.second] = 1;
        }
    }
};
