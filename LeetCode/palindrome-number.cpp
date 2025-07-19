class Solution {
public:
    bool isPalindrome(int x) {
    string b = to_string(x);
    
    for(int i=0, j=b.length()-1; i<b.length(), j>=i; i++, j--){
        if(b[i] != b[j])return false;
    }
    return true;
    
    }
};