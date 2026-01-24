int findNumbers(int* nums, int numsSize) {
    int i ,c,d=0;
    for(i=0;i<numsSize;i++){
        c=0;
        while(nums[i]>0){
            c++;
            nums[i]=nums[i]/10;
        }
        if(c%2==0){
            d++;
        }
    }
    return d; 
}
