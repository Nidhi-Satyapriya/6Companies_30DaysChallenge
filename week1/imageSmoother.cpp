class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        //10-15 min baad toh samajh hi aya 
        int m= img.size();int n= img[0].size();
        vector<vector<int>>arr(m, vector<int>(n,0));
         int dr[]={-1, -1,-1,0,0,1,1,1};
         int dc[]={-1,0,1,-1,1,-1,0,1};
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int sum=img[i][j]; int ct=1;
                for(int k=0;k<8;k++){
                    int ir= i+dr[k]; int ic=j+ dc[k];
                    if(ir>=0 && ir<m && ic>=0 && ic< n) {sum+=img[ir][ic]; ct++;}
                }
                arr[i][j]= floor(sum/ct);
            }
         }
         return arr;
       //completed in 14:53 mins; run and compiled in first go.
    }
};