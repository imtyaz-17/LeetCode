class Solution
{
    public:
        void setZeroes(vector<vector < int>> &matrix)
        {
            int r = matrix.size();
            int c = matrix[0].size();

            vector<int> x, y;

            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (matrix[i][j] == 0)
                    {
                        x.push_back(i);
                        y.push_back(j);
                    }
                }
            }

           	// row->0
            for (int i = 0; i < x.size(); i++)
            {
                int index = x[i];
                for (int j = 0; j < c; j++)
                {
                    matrix[index][j] = 0;
                }
            }

           	// col->0
            for (int i = 0; i < y.size(); i++)
            {
                int index = y[i];
                for (int j = 0; j < r; j++)
                {
                    matrix[j][index] = 0;
                }
            }
        }
};


/**
 * Explanation:
 * https://www.youtube.com/watch?v=W6La6f7POk0
 */