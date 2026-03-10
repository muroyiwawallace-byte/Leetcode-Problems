double average(int* salary, int salarySize) {
    int i=0,l,m,s=0;
    for(i=0;i<salarySize;i++){
        s=s+salary[i];
    }
    i=0;
    if(salary[i]>salary[i+1])
    {
        l=salary[i];
        m=salary[i+1];
    }
    else
    {   
         m=salary[i];
         l=salary[i+1];
    }
    for(i=2;i<salarySize;i++)
    { 

        if (salary[i]>l)
        {
            l=salary[i];
        }
        else if (salary[i]<m){
            m=salary[i];
        }
    }
    s=s-(l+m);
    return s/(salarySize-2);  
}
