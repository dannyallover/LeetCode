class Solution {
public:
    static bool comp(int a, int b) {
        string s1 = to_string(a);
        string s2 = to_string(b);
        return (s1 + s2 > s2 + s1);
    }
    
    string largestNumber(vector<int>& nums) {
        string s = "";
        if(nums.size() == 0)
            return s;
        
        bool onlyZeros = true;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                onlyZeros = false;
                break;
            }
        }
        
        if(onlyZeros) return "0";
        
        sort(nums.begin(), nums.end(), comp);
        
        for(auto num : nums)
            s += to_string(num);
        
        return s;
    }
};
