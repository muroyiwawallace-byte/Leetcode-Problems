int maxProfit(int* prices, int pricesSize) {
    int i,c=0,j;
    for(i=0;i<pricesSize-1;i++){
        if(prices[i+1]>prices[i]){
            c=c+prices[i+1]-prices[i];
         }
    }
    return c;
}
