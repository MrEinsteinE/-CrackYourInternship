class Solution {
public:
    
    string intToRoman(int num) {
        vector<int> arr = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> str = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string s = "";
        int i=0;
        while(num>0){
             if(num>=arr[i]){
                s+=str[i];
                num = num-arr[i];
             }
             else{
                i++;
             }
        }
        return s;
    }
};