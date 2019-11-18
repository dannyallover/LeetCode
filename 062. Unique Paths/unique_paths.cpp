class Solution {
public:
    int uniquePaths(int m, int n) {
        int rights = m-1;
        int downs = n-1;
        
        double result = 1;
        for(int i = rights + downs; i > 0; i--) {
            result = result * i;
            if(rights > 1)
                result = result / rights;
            if(downs > 1)
                result = result / downs;
            rights--;
            downs--;
        }
        
        return round(result);
    }

};
