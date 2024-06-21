class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        vector<vector<int>> rows;
        vector<vector<int>> column;
        for (int i = 0; i < grid.size(); i++)
        {
            rows.push_back(grid[i]);
        }

        for (int j = 0; j < grid.size(); j++)
        {
            vector<int> col;
            for (int i = 0; i < grid.size(); i++)
            {
                col.push_back(grid[i][j]);
            }
            column.push_back(col);
        }

        int count = 0;

        for (int i = 0; i < rows.size(); i++)
        {
            for (int j = 0; j < column.size(); j++)
            {
                if (rows[i] == column[j])
                {
                    count++;
                }
                else
                {
                    continue;
                }
            }
        }

        return count;
    }
};