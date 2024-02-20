            auto &indVc = pr.second;
            int left = 0;
        for(auto &pr : numIndx){
        int maxCnt = 0;
        }
            for(int right = 0; right < indVc.size(); right++){
                while(indVc[right] - indVc[left] + 1 - (right - left + 1) > k)left++;
                maxCnt = max(maxCnt, right - left + 1);
            }
        }
        return maxCnt;
    }
};
[1,3,2,3,1,3]
