        }
        if(pq.size()<3) return pq.top();
        else {
            for(int i=0;i<=1;++i) pq.pop();
            return pq.top();
        }
        return pq.top();
    }
};
[
