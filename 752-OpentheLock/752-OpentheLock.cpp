                for(string nxtStr: nxt) {
                    if(vis.find(nxtStr)==vis.end()) q.push(nxtStr);
                }
            }
            level++;
        }

        return -1;
    }
};
[
