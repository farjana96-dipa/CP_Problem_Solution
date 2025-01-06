class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i =0 ,j =0;
        int mx = 0;
        unordered_set<char>ch;
        while(j<n){
            if(ch.find(s[j])==ch.end()){
                ch.insert(s[j]);
                mx = max(mx,j-i+1);
                j++;
            }
            else{
                ch.erase(s[i]);
                i++;
            }
        }
        return mx;
    }
};