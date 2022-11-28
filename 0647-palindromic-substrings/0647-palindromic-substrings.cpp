class Solution
{
    public:
        int countSubstrings(string s)
        {
            int n = s.size();
            if (n == 0) return 0;
            int count = 0;
            char c[n];

            for (int i = 0; i < n; i++)
            {
                count += isPalindrome(i, i, s);
                count += isPalindrome(i, i + 1, s);
            }

            return count;
        }

    int isPalindrome(int st, int ed, string c)
    {
        int ct = 0;
        while (st >= 0 && ed < c.size() && c[st--] == c[ed++])
        {
            ct++;
        }

        return ct;
    }
};




/**
 * Explanation:
 * https://www.youtube.com/watch?v=pp8K5C2hMr4
 */