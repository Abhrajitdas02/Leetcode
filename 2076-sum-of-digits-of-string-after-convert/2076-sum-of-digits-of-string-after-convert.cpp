class Solution {
public:
    int getLucky(string s, int k) {
    
    string transformed = "";
    for (char ch : s) {
        int num = ch - 'a'+1; 
        transformed += to_string(num);  
    }
    
    
    int sum = 0;
    for (char ch : transformed) {
        sum += ch - '0'; 
    }
    
    while (--k > 0) {
        int newSum = 0;
        while (sum > 0) {
            newSum += sum % 10;
            sum /= 10;
        }
        sum = newSum;
    }
    
    return sum;
}

};