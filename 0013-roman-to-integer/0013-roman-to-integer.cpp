class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int sum=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I' && ((s[i+1]=='V') || (s[i+1]=='X')))
               {
                   sum+=mp[s[i+1]]-1;
                   i++;
               }
            
             else if(s[i]=='X' && ((s[i+1]=='L') || (s[i+1]=='C')))
                {
                    sum+=mp[s[i+1]]-10;
                    i++;
                }
             else if(s[i]=='C' && ((s[i+1]=='D') || (s[i+1]=='M')))
                {
                    sum+=mp[s[i+1]]-100;
                    i++;
                }
            else
             sum+=mp[s[i]];
            
        }
                return sum;
    }
};