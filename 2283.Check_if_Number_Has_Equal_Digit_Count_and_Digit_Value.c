
#include<string.h>
bool digitCount(char* num) {
    int m=strlen(num);
    if(m<=1){
        return false;
    }
     int c=0,i,count[10]={0};
     for(i=0;i<m;i++)
     {
        count[num[i]-'0']++;
     } 
for(i=0;i<m;i++){
    if(count[i]==num[i]-'0'){
        continue;
    }
    else{
        return false;
        break;
    }
}
return true;
}
