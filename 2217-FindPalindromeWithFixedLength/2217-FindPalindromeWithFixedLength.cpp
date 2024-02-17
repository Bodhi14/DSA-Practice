            // len of palindrome should be intLength, otherwise -1
            if (palindrome.size() == intLength)
                result.push_back(stoll(palindrome));
            else
                result.push_back(-1);
        }
········return·result;
    }
};
[1,2,3,4,5,90]
