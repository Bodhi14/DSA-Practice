                grid[i][j] = grid[j][i];
                grid[j][i] = temp;
            }
        }
        for(int i = 0; i<n; ++i) cols[grid[i]]++;
        for(auto &it:rows) {
            if(cols.find(it.first)!=cols.end()) ans += it.second*cols[it.first];
        }
        return ans;
    }
};
[
