class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0,ans=0;
        int m = grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++){
        if(grid[i][j]=='1')
        {
           if( grid[i+1][j]=='0')cnt++;
           if( grid[i+1][j+1]=='0')cnt++;
           if( grid[i+1][j+1]=='0')cnt++;
           if( grid[i][j+1]=='0')cnt++;   
        }
                grid[i][j]=cnt;
                cnt=0;
                if(grid[i][j]==3)
                    ans++;
            }
        }
        if(grid[n-1][m-1]==1)
            ans++;
        if(grid[0][m-1]==1)
            ans++;
        if(grid[n-1][0]==1)
            ans++;
        if(grid[0][0]==1)
            ans++;
        return ans;
    }
};
