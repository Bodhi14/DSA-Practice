    }
    string tictactoe(vector<vector<int>>& moves) {
        int n=moves.size();
        for(int i=0; i<n; i++){
            int idx=3*moves[i][0]+moves[i][1];
            if (i&1) Board[idx]='O';
            else Board[idx]='X';
        }
        if (check()==1) return "A";
        else if (check()==2) return "B";
[
