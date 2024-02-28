            }
        }
        return result;
    }
    NestedInteger deserialize(string s) {
        if (s[0] == '[') {
            return evaluateList(s, 0);
        }
        return NestedInteger(stoi(s));
    }
};
"
