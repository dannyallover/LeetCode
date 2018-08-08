class Solution {
public:
    
    int findPalindrome(string s, int left, int right) {
        // left and right enter,
        if(s[left] != s[right])
            return 0;
        while(left > 0 && right < s.length() && s[left - 1] == s[right + 1]) {
            left--;
            right++;
        }
        return right - left;
    }
    string longestPalindrome(string s) {
        if(s.length() == 0 || s.length() == 1)
            return s;
        
        int start = 0;
        int end = 0;
        for(int i = 0; i < s.length(); i++) {
            int len1 = findPalindrome(s, i, i);
            int len2 = findPalindrome(s, i, i + 1);
            int maxLength = max(len1, len2);
            cout << maxLength << endl;
            if(maxLength > end - start) {
                start = i - (maxLength/ 2);
                end = i + ((maxLength + 1)/ 2);
                if(start < 0)
                    start = 0;
                if(end > s.length())
                    end = s.length();
            }
        }
        return s.substr(start, (end - start + 1));
    }
};
