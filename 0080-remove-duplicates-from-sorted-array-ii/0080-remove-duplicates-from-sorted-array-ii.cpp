class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m ;
        for(auto i : nums ){
            m[i]++;
        }
        int count=0;
        int k=0;
        for(auto i=m.begin();i!=m.end();i++){
           for(int j=0;j<2;j++){
               if(i->second){
                   nums[k++]=i->first;
                   i->second--;
               }
           }
        }
        return k;
    }
};