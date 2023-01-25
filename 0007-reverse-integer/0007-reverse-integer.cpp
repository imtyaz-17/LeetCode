class Solution
{
    public:
        int reverse(int x)
        {

            long reverse_int = 0;
            while (x != 0)
            {
                int last_digit = x % 10;
                reverse_int = reverse_int *10 + last_digit;
                x = x / 10;
            }
           	// if (reverse_int > 0x7FFFFFFF || reverse_int < -0x7FFFFFFF){
           	//     return 0;
           	// }
            // 
            if (reverse_int < INT_MIN || reverse_int > INT_MAX)
            {
                return 0;
            }
            return (int) reverse_int;
        }
};