            {
                int c1 = mp[{x2,y2}];
                int c2 = mp[{x2,y1}];
                int c3 = mp[{x1,y2}];
                count += c1*c2*c3;
            }
        }
        return count;
            if(x1!=x2 && y1!=y2 && abs(x1-x2)==abs(y1-y2) && mp.find({x1,y2})!=mp.end() && mp.find({x2,y1})!=mp.end())
[
