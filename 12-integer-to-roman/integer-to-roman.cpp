class Solution {
public:
    string intToRoman(int num) {
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hens[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thou[]={"","M","MM","MMM"};
        string ans=thou[num/1000]+hens[(num%1000)/100]+tens[(num%100)/10]+ones[num%10];
        return ans;
    }
};