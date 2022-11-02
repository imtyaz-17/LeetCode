class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        queue<string>Q;
        unordered_set<string>visited;
        
        Q.push(start);
        visited.insert(start);
        
        int count = 0;
        
        while(!Q.empty())
        {
            int n = Q.size();
            for(int i=0;i<n;i++)
            {
                string node = Q.front();
                Q.pop();
                
                if(node == end)
                {
                    return count;
                }
                
                for(char ch :"ACGT")
                {
                    for(int j=0;j<node.size();j++)
                    {
                        string adjNode = node;
                        adjNode[j] = ch;
                       if(!visited.count(adjNode) && 
                          find(bank.begin(),bank.end(),adjNode)!= bank.end())
            {
                Q.push(adjNode);
                visited.insert(adjNode);
            }
                    }
                }
            }
             count++;
        }
       return -1; 
    }
};




/**
 * Explanation:
 *https://www.youtube.com/watch?v=_uH8GJPOKXI
 */