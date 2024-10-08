class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=0;
        for (int i=0;i<columnTitle.length();i++)
        {
            n=n*26+(columnTitle[i]-'A'+1);
        }
        return n;
        
    }
};