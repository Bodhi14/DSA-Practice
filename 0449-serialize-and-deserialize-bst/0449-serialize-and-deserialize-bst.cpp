/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* r) {
        string s;
        encode(r,s);
        return s;
    }
    
    void encode(TreeNode *r, string &s)
    {
        if(!r)
            return ;
        
        s=s+to_string(r->val)+"-";
        encode(r->left,s);
        encode(r->right,s);
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string s) {
        
        string c;
        stringstream ss(s);
        TreeNode* r = NULL;
        while(getline(ss,c,'-'))
        {
            r = insert(r,stoi(c));
        }
        
        return r;
        
        
    }
    
    TreeNode* insert(TreeNode* r, int c)
    {
        if(!r)
        {
            r = new TreeNode(c);
            return r;
        }
        else if(c<=r->val)
        {
            r->left =  insert(r->left, c);
        }
        else
            r->right= insert(r->right,c);
        return r;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;