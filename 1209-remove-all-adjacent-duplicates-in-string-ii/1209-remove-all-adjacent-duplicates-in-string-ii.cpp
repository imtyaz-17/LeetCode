class Solution
{
    public:
        string removeDuplicates(string s, int k)
        {
            int n = s.size();

            vector<pair<char, int>> vpair;

            for (auto c: s)
            {
                if (vpair.empty() || vpair.back().first != c)
                {
                    vpair.push_back({ c,
                        1 });
                }
                else
                {
                    vpair.back().second++;

                    if (vpair.back().second == k)
                    {
                        vpair.pop_back();
                    }
                }
            }

            string result;

            for (auto x: vpair)
            {
                result.append(x.second, x.first);
            }

            return result;
        }
};

//**
// https://youtu.be/oANMk2_jxmU