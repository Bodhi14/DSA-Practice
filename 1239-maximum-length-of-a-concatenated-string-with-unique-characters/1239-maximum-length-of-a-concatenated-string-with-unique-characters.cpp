class Solution {
private:
    
bool isValid(vector<int> &taken, string &curr){
    
    vector<int> repeatedCheck(26, 0); 
    
    for(int i=0; i<curr.size(); i++){
               
        if (repeatedCheck[curr[i]-'a']==1){ 
            return false ; 
        }
        repeatedCheck[curr[i]-'a']=1;
    }
 
    for(int i=0; i<curr.size(); i++){
     
        if (taken[curr[i]-'a']==1)
            return false;
    }
    return true;
}


int recursive(int ind, vector<string> &arr, vector<int> &taken, int len){    
    if(ind==arr.size()){
        return len;
    }

    string curr=arr[ind];
    if(isValid(taken, curr)==false){    
        return recursive(ind+1, arr, taken, len) ;
    }
    else{
        
        for(int j=0; j<curr.size(); j++){
            taken[curr[j]-'a']=1; 
        }
        
        len+=curr.size();
        int pick=recursive(ind+1, arr, taken, len); 

        for(int j=0; j<curr.size(); j++){
            taken[curr[j]-'a']=0; 
        }
        
        len-=curr.size() ;         
        int notpick=recursive(ind+1, arr, taken, len);

        return max(pick, notpick); //longest length
    }
}

public:
    int maxLength(vector<string>& arr) {
    vector<int> taken(26, 0); //keep track of chars taken/not taken
    return recursive(0, arr, taken, 0);    
    }
};
