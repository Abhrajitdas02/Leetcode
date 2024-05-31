class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        long long num=0;
        int flag=1;
        while(i<n){
            while(s[i]==' ' && i<n) i++;
            if(i==n) break;
            if(isdigit(s[i])){
                while(isdigit(s[i])){
                  num=num*10 + (s[i]-'0');
                  if(num>=INT_MAX) return INT_MAX;
                    i++;
                }
                break;
            }
            else if(s[i]=='+' ){
                flag=1;
                i++;
                while(isdigit(s[i])){
                    num=num*10 + (s[i]-'0');
                    if(num>=INT_MAX) return INT_MAX;
                    i++;
                }
                break;
            }
            else if(s[i]=='-'){
                flag=-1;
                i++;
                while(isdigit(s[i])){
                     num=num*10 + (s[i]-'0');
                     if(flag*num<=INT_MIN) return INT_MIN;
                    i++;
                }
                break;
            }
            else  break;
        }
        
        num=num*flag;
        return num;
    }
};