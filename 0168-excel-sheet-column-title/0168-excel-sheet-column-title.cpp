class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";

        while (columnNumber > 0) {
            columnNumber--;
            char character =  (char)(columnNumber % 26 + 65);
            result = character + result;
            columnNumber /= 26;
        }

        return result;
    }
};