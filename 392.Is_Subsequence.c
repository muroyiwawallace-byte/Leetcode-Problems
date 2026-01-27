bool isSubsequence(char* s, char* t) {
int i=0,j=0;
    while(s[j]!='\0' && t[i]!='\0'){
        if(s[j]==t[i]){
            j++;
            }
            i++;
        }
        if(s[j]=='\0'){
            return true;
        }
        else{
        return false;

        }
}
