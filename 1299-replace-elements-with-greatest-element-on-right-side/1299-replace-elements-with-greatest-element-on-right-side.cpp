class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    int mx=-1;
    int temp;
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        temp=arr[i];
        arr[i]=mx;
        mx=max(mx,temp);//storing the latest max 
    }
    return arr;

    }
};