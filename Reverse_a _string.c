void reverseString(char* s, int sSize) {
    int i,j=sSize-1;
    char temp;
    while(i<j){
        temp=s[j];
        s[j]=s[i];
        s[i]=temp;
        i++;
        j--;

    }  
}
