                flows++;
                strf++;
            }
            while(endf < nf && flowerBloomEnd[endf] < peps[i].first){
                endf++;
                flows--;
            }
            ans[peps[i].second] = flows;
        }
        return ans;
    }
};
[
