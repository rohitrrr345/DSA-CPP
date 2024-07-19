class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size(); //rows
        int n = matrix[0].size(); //columns

        int rMinMax = INT_MIN;
        
        for(int row = 0; row < m; row++) {

            int rMin = INT_MAX;
            for(int col = 0; col < n; col++) {
                rMin = min(rMin, matrix[row][col]);
            }

            rMinMax = max(rMinMax, rMin);

        }

        int cMaxMin = INT_MAX;
        for(int col = 0; col < n; col++) {

            int cMax = INT_MIN;
            for(int row = 0; row < m; row++) {
                cMax = max(cMax, matrix[row][col]);
            }

            cMaxMin = min(cMaxMin, cMax);

        }


        if(rMinMax == cMaxMin) {
            return {rMinMax}; //{cMaxMin}
        }

        return {};
    }
};
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        map<int,int>mp;
        
        for(int i=0;i<n;i++){
            int t=INT_MAX;
            for(int j=0;j<m;j++){
                
                if(matrix[i][j]<t)
                t=matrix[i][j];
                
            }
            mp[t]++;
        }
        
        for(int j=0;j<m;j++){
            int t=INT_MIN;
            for(int i=0;i<n;i++){
            
                if(matrix[i][j]>t)
                t=matrix[i][j];
                
            }
            mp[t]++;
        }
        
        vector<int>v;
        for(auto x:mp){
            if(x.second>1)v.push_back(x.first);
        }
        
        return v;
    }
};