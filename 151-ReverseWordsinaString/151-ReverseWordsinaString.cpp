            }
            else
            temp+=s[i];
        }
        reverse(temp.begin(), temp.end());
        ans+=temp;
        int i = 0, j = ans.size()-1;
        while(ans[i]==' ') i++;
        while(ans[j]==' ') j--;
"
