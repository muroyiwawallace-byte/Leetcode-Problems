int maxFrequencyElements(int* nums, int numsSize) {
    int c[10]={0},i,l=0,t=0;
    for(i=0;i<numsSize;i++){
        c[nums[i]]++;
        if(c[nums[i]]>l){
            l=c[nums[i]];
        }
    }
    for(i=0;i<10;i++){
        if(c[i]==l){
            t=l+t;
        }
    }
    return t;
}
