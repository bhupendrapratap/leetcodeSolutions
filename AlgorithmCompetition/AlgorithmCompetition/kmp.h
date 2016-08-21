#include"Header.h"
vector<int> buildnext(string p)
{
    int n=p.size();
    vector<int>f(n+1,0);
    for(int i=1;i<n;++i)
    {
        int j=f[j];
        while(j && p[j]!=p[i])j=f[j];
        f[j+1]=p[j]==p[i]?j+1:0;
    }
    return f;
}

void kmp(string t,string p)
{
    int n=t.size(),m=p.size();
    vector<int>next=buildnext(p);
    for(int i=0,j=0;i<n;++i)
    {
        while(j && t[i]!=p[j])j=next[j];
        if(p[j]==t[i])j++;
        if(j==m)
        {
            printf("Pattern occurs with shift:%d \n",(i-m+1));
        }
    }
}