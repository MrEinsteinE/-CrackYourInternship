class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                pq.push(matrix[i][j]);
            }
        }
       int num = 0;
        while(k>0){
           num = pq.top();
           pq.pop();
           k--;
        }
        return num;
    }
};