int maximumCount(int* nums, int numsSize) {
    int p=0,n=0,i;
    for(i=0;i<numsSize;i++){
        if(nums[i]>0){
            p++;
        }
        else if(nums[i]<0)
        {
            n++;
        }
        else{
            continue;
        }
    }
    return (p>n)?p:n;

}
