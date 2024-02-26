        minFreq = 0;
        currSize = 0;
    }

    int get(int key) {
        if (addrOfKey.find(key) == addrOfKey.end()) {       
            return -1;
        }
        Node *resNode = addrOfKey[key];                     
        int res = resNode->val;                             
        updateFreqListMap(resNode);                         
        return res;                                         
    }
[
