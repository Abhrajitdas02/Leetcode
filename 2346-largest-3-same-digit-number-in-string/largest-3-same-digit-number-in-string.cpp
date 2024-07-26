class Solution {
public:
    string largestGoodInteger(string num) {
        char max='\0';
       for(int i=0;i<num.length()-2;i++){
        if(num[i]==num[i+1]){
         if(num[i+1]==num[i+2]){
          if(max<num[i])max=num[i];
        }
       }
       }
       if(max=='\0') return "";
       else return string(3,max); 
    }
};