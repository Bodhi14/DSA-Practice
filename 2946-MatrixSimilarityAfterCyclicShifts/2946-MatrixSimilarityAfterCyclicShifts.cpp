            for (int j = 0; j < k; j++) {
                int first = temp[i][0];
                temp[i].erase(temp[i].begin());
                temp[i].push_back(first);
            }
        }
    }
    return temp==mat;
    }
};
[
