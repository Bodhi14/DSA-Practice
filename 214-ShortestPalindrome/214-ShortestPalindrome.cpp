                j++;
            }
            lps[i] = j;
        }
        int diff = n - lps[2*n];
        while(diff){
            rev.push_back(rev[diff-1]);
            diff--;
        }
        return rev;
    }
};
"
