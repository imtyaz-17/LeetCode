class Solution {
public:
    int reverse(int x) {
      if (x == INT_MIN) {
        return 0;
    }
    bool is_negative = false;
    if (x < 0) {
        is_negative = true;
        x = -x;
    }
    int result = 0;
    while (x > 0) {
        int last_digit = x % 10;
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && last_digit > INT_MAX % 10)) {
            return 0;
        }
        result = result * 10 + last_digit;
        x = x / 10;
    }
    if (is_negative) {
        if (result > INT_MAX) {
            return 0;
        }
        result = -result;
    }
    return result;
    }
};