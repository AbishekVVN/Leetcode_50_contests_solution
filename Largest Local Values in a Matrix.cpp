class Solution {
    public int maxi(int [][] arr,int i,int ai,int j,int bi){
        int x=0;
        for(int ot=i;ot<=ai;ot++){
            for(int jt=j;jt<=bi;jt++){
                if(arr[ot][jt]>x)
                    x=arr[ot][jt];
                    
            }
        }
        return x;
    }
    public int[][] largestLocal(int[][] grid) {
        int n=grid[0].length;
        int[][]maxlocal=new int[n-2][n-2];
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                int m=maxi(grid,i,i+2,j,j+2);
                maxlocal[i][j]=m;
            }
        }
        return maxlocal;
        
    }
}
