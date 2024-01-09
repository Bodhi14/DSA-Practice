class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int ,int> > pc; 
        int n=profits.size();
        for(int i=0;i<n;i++)
        {
            pair<int,int> p=make_pair(capital[i],profits[i]);
            pc.push_back(p);
        }
        sort(pc.begin(),pc.end()); 
        
        priority_queue<int> q;
        int i=0;
        while(k>0)
        {
            while(pc[i].first<=w && i<n)
            {
                q.push(pc[i].second);
                i++;
            }
            if(q.empty())
                break;
            else
            {
                w+=q.top();
                q.pop();
            }
            k--;
        }
        return w;
    }
};