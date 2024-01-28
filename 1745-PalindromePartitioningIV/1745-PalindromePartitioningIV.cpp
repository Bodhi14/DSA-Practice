
        precomputePalindrome(s);

        for (int i = 1; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (isPalindrome[0][i - 1] && isPalindrome[i][j - 1] && isPalindrome[j][n 
- 1]) {
                    return true;
                }
"
