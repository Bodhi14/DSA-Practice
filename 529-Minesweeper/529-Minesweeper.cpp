                for(int k=0;k<8;k++){
                    int irow=i+row[k],jcol=j+col[k];
                    if(irow>=0 && jcol>=0 && irow<m && jcol<n){
                        vector<int>v={irow,jcol};
                        updateBoard(board,v);
                    }
                }
            }
        
        return board;
    }
};
[
