            if(isValid(i+rowD[k], j+colD[k], n, m)){
                if(board[i+rowD[k]][j+colD[k]]) live++;
            }
        }
        for(int k = 0; k<8; ++k) {
        if(isLive) {
            if(live<2 || live>3) ans[i][j] = 0;
            return;
        }
        else if(live==3) ans[i][j] = 1;
        else ans[i][j] = board[i][j];
            else ans[i][j] =1;
[
