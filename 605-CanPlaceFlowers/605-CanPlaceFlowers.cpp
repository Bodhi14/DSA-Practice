                }
                else i++;
            }
           else if(v[i]==0 && v[i-1]==0 && v[i+1]==0){
                i+=2;
                x++;
            }
            else i++;
        }
        if(x>=n)return true;
        else return false;
    }
};
[
