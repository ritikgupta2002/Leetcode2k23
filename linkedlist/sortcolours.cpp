class greatercmp
{
  public:
    bool operator()(int a, int b )
    {
        return a>b;
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
 
    vector<int> v(3,0);
    for(int i =0;i<nums.size();i++)
    {
        v[nums[i]]++;
        
    }
        int zero=v[0];
        int ones=v[1];
        int twos=v[2];
        int i=0;
       while(zero--)
        {
            nums[i]=0;
            i++;
            
        }
        while(ones--)
        {
            nums[i]=1;
                i++;
        }
        
        while(twos--)
        {
            nums[i]=2;
            i++;
        }
        
    
    
        
    }
};