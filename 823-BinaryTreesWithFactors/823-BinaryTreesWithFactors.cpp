            {
                
                if( arr[i]%arr[j]==0 && mp.find(arr[i]/arr[j]) != mp.end())
                {
                    mp[arr[i]] = ( mp[arr[i]] + (mp[arr[j]]*(mp[arr[i]/arr[j]]))%mod )%mod  ;
                }
            }
        }
        for( auto i : mp ) ans = (ans + i.second)%mod;
        return ans ;
    }
};
[
