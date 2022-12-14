class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int work = logs[0][1];
              int id = logs[0][0];
        
              int len = logs.size();
        
              for(int i = 1; i < len; i++) {
                  int time_diff = logs[i][1] - logs[i-1][1];
                  if(time_diff > work) {
                      id = logs[i][0];
                      work = time_diff;
                  }
                  else if(time_diff == work) {
                      if(id > logs[i][0])
                          id = logs[i][0];
                      work = time_diff;
                  }
              }
        return id;
    }
};