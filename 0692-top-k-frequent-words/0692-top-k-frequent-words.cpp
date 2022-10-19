class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> freq;
        
         // use map to count the appearance of word
        // then use bucket sort to get the top k frequent elements
        map<string, int> map;
        for(auto word: words)
            map[word]++;
        
        vector<vector<string>> buckets(words.size());
        for(auto it: map)
            buckets[it.second].push_back(it.first);
        
        vector<string> res;
        for(int i= buckets.size()-1; i>= 0 && k> 0; i--){
            if(buckets[i].size() == 0) continue;
            //have element in the bucket, find out how many we need to get
            //because we need to follow alphabetical order
            int n= min(k, (int)buckets[i].size());
            res.insert(res.end(), buckets[i].begin(), buckets[i].begin()+n);
            k-=n;
        }
        return res;
    }
};





/**
 * Explanation:
 * https://www.youtube.com/watch?v=oF3D2t4UULQ
 */