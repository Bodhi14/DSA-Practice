        temp.push_back(candidates[j]);
        sum+=candidates[j];
        for(int j=i;j<n;++j) {
        solve(candidates, n, target, j, sum, temp, ans);
        sum-=candidates[j];
        temp.pop_back();
        }
        return;
    }
        }
[
