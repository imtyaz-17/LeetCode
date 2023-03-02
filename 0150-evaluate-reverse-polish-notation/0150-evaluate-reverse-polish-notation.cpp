class Solution
{
    public:
        int evalRPN(vector<string> &tokens)
        {
            stack<int> stk;
            for (auto x: tokens)
            {
                if (x == "+" || x == "-" || x == "/" || x == "*")
                {
                    int operand2 = stk.top();
                    stk.pop();
                    int operand1 = stk.top();
                    stk.pop();

                    if (x == "+")
                    {
                        stk.push(operand1 + operand2);
                    }
                    if (x == "-")
                    {
                        stk.push(operand1 - operand2);
                    }
                    if (x == "*")
                    {
                        stk.push(operand1 *operand2);
                    }
                    if (x == "/")
                    {
                        stk.push(operand1 / operand2);
                    }
                }
                else
                {
                   	stk.push(stoi(x));
                }
            }
            
            return stk.top();
        }
};