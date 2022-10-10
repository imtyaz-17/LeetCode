class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.length()==1){
            return "";
        }
        int countA=0;
            
            for(int i=0; i<palindrome.length()/2; i++){
                //check for subsequent a's
                if(palindrome[i]=='a'){
                    countA++;
                    continue;
                 }
                //replace the first letter that is not 'a' with 'a' 
                palindrome[i] = 'a';
                break;
            }
        //if all the letters are 'a' then replace the last letter with a 'b'
        if(countA==palindrome.length()/2){
            palindrome[(palindrome.length())-1] = 'b';
        }
        return palindrome;
    }
};