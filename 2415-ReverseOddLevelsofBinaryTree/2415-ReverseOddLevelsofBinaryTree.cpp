                if(temp->left)  levelTraversal.push(temp->left);
                if(temp->right) levelTraversal.push(temp->right);
                if((l+1)%2==1){
                   if(temp->left) levelVals.push(temp->left->val);
                   if(temp->right) levelVals.push(temp->right->val);
                }
            }
            l++;
        }
    return root;
    }
[
