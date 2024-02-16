        sort(skill.begin(), skill.end());
        for(int i = 1; i<n/2; ++i) {
        int n = (int)skill.size();
            if(skill[i] + skill[n-i-1] != comp) return -1;
        }
        return ans;
    }
        long long ans = 0;
    long long dividePlayers(vector<int>& skill) {
        int comp = skill[0] + skill[n-1];
            else ans += (skill[i]*skill[n-i-1]);
        ans += (skill[0]*skill[n-1]);
[
