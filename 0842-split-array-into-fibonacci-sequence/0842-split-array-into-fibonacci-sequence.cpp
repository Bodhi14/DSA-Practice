class Solution 
{
private:

bool solve(string &num,int ind,vector<int> &res)
{
    if(ind==num.length())
    {
        return res.size()>2;
    }

    int temp=0;

    for(int i=ind;i<num.length();i++)
    {
        temp=(long)temp*10+(int)(num[i]-'0');

        if(temp<0) 
        {
            return false;
        }

        if(ind!=i && temp<=9) 
        {
            return false;
        }

        if(res.size()>=2 && (long)res[res.size()-2]+(long)res.back()!=temp)
        {
            continue;
        }

        res.push_back(temp);

        if(solve(num,i+1,res)==true)
        {
            return true;
        }

        res.pop_back();
    }

    return false;
}

public:
    vector<int> splitIntoFibonacci(string num) 
    {
        vector<int> res;

        solve(num,0,res);

        if(res.size()<=2)
        {
            return {};
        }
        
        return res;
    }
};