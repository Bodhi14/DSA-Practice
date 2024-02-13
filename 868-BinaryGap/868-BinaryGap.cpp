            ++i;
        }
        if(i>=m) return 0;
        prev = i;
        ++i;
        while(i<m) {
            if(binary_rep[i]=='1') {
                maxDist = max(i-prev, maxDist);
                prev = i;
            }
            ++i;
2
