            int status = 3;
            if(row1.find(word[0])!=row1.end()) status = 1;
            else if(row2.find(word[0])!=row2.end()) status = 2;
            int n = (int)word.size();
            for(int i = 0; i<n; ++i) {
                int currstatus = 3;
                if(row1.find(word[i])!=row1.end()) currstatus = 1;
                else if(row2.find(word[i])!=row2.end()) currstatus = 2;
                if(currstatus!=status) {
                    isSame = false;
                    break;
[
