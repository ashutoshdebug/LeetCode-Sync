class Solution {
public:
    bool isAlphaNumeric(char ch) {
        return (ch >= 97 && ch <= 122) || (ch >= 48 && ch <= 57);
    }

    bool isPalindrome(string s) {
        int size = s.size();
        int l = 0;
        int r = size - 1;

        while (l < r) {
            char cl = tolower(s[l]);
            char cr = tolower(s[r]);

            if (!isAlphaNumeric(cl)) {
                l++;
            } else if (!isAlphaNumeric(cr)) {
                r--;
            } else {
                if (cl != cr) {
                    return false;
                }
                l++;
                r--;
            }
        }

        return true;
    }
};
