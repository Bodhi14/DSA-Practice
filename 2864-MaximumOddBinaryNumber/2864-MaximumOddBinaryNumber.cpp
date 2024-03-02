        while(bitNum > 1) {
            bitNum--;
            ans += '1';
        }
        int rem = s.size() - ans.size();
        while(rem > 1) {
            ans+='0';
            rem--;
        }
        ans+='1';
        return ans;
    }
};
"
