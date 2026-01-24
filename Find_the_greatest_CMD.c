int findGCD(int* nums, int numsSize) {
    int l,s;
    if(nums[0]>nums[1]){
    l=nums[0];
     s=nums[1];
    }
    else{
      s=nums[0];
      l=nums[1];
    }
    for(int i=2;i<numsSize;i++)
    {
        if(nums[i]>l){
            l=nums[i];
        }
        if(nums[i]<s){
            s=nums[i];
        }
    }
    int i,g=1;
    for(i=1;i<=s;i++){
        if(l%i==0 && s%i==0){
            g=i;
            
        }
    }
     return g;
    


}
