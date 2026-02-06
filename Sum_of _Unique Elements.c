int sumOfUnique(int* nums, int numsSize) {
    int s=0,i,c[101]={0};
    for(i=0;i<numsSize;i++){
        c[nums[i]]++;
        }
        for(i=0;i<numsSize;i++){
            if(c[nums[i]]==1){
                s=s+nums[i];
            }
        }
    return s;
}
