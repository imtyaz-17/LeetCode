class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            if (s.length() == 0)
                return 0;

            if (s.length() == 1)
                return 1;

            int maxLength = 0;
            bool visited[256] = { false
            };

            int left = 0, right = 0;

            for (; right < s.length(); right++)
            {
                if (visited[s[right]] == false)
                {
                    visited[s[right]] = true;
                }
                else
                {
                    maxLength = max(maxLength, (right - left));
                    while (left < right)
                    {
                        if (s[left] != s[right])
                        {
                            visited[s[left]] = false;
                        }
                        else
                        {
                            left++;
                            break;
                        }

                        left++;
                    }
                }
            }

            maxLength = max(maxLength, (right - left));
            return maxLength;
        }
};