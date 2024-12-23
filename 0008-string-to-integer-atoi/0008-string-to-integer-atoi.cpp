class Solution {
public:
    int myAtoi(string s) {
       int j=0,mul=1;
       while(s[j]==' ')j++;
       if(s[j]=='-'){
        mul=-1;
        j++;}
        else if(s[j]=='+'){
            mul=1;
            j++;
        }
        int min=INT_MIN,max=INT_MAX;
       long result=0;
       int n=s.length();
       for(int i=j;i<n;i++){
        int x=s[i]-'0';
        if(x>=0 && x<=9){
            if(mul==1 && (result*10+x)>max)return max;
            if(mul==-1 && (result*10+x)*-1<min)return min;
            result=result*10+x;
        } else{
            break;
        }
        }
        result=result*mul;
        int res=(int)result;
       return res; 
    }
};