class Solution {
public:
//right rotate by k steps 
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        k%=n;
        reverse(arr.begin(),arr.end()-k);
        reverse(arr.end()-k,arr.end());
        reverse(arr.begin(),arr.end());
    }



//left rotate by k steps 
    // void rotate(vector<int>& arr, int k) {
    // int n=arr.size();
    // k %= n;
    //    reverse(arr.begin(),arr.begin()+k);
    //    reverse(arr.begin()+k,arr.end());
    //    reverse(arr.begin(),arr.end());
    // }
     
};

// 1 3 5 9 7 ->right rotate by 2 steps ->9 7 1 3 5 

// 5 3 1 9 7 
// 5 3 1 7 9
// 9 7 1 3 5

// 1 3 5 9 7 ->left  rotate by 2 steps ->5 9 7 1 3
 
// 3 1 5 9 7 
// 3 1 7 9 5 
// 5 9 7 1 3 



