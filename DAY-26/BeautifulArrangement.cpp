class Solution {
public:
   void help(int n,int pos,vector<bool> &visited,int &count){
        if(pos>n){
            count++;
            return;
        }
        for(int i=1;i<=n;i++){
            if(!visited[i] && (i%pos==0 || pos%i==0)){
                visited[i]=true;
                help(n,pos+1,visited,count);
                visited[i]=false;
            }
        }
   }
    int countArrangement(int n) {
        vector<bool> visited(n+1,false);
        int count = 0;
        help(n,1,visited,count);
        return count;
    }
};