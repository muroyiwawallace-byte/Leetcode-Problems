#include<string.h>
char** fizzBuzz(int n, int* returnSize) {
    *returnSize=n;
    char **answer=(char**)malloc(n*sizeof(char*));
    int i;
    for(i=1;i<=n;i++){
    if(i%3==0 && i%5==0){
        answer[i-1]=(char*)malloc(9);
        answer[i-1]="FizzBuzz";
    }
    else if(i%3==0){
        answer[i-1]=(char*)malloc(5);
        strcpy(answer[i-1],"Fizz");
    }
    else if(i%5==0){
    answer[i-1]=(char*)malloc(5);
    strcpy(answer[i-1],"Buzz");
    }
    else{
    answer[i-1]=(char*)malloc(12);
    sprintf(answer[i-1],"%d",i);
    }
    }
     return answer;
}
