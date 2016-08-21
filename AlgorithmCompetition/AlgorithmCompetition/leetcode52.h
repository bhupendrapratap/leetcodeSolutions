#include"Header.h"

inline bool check(int* places,int cur)
{
    for(int i=0;i<cur;++i)
    {
        if(places[i]==places[cur]||abs(places[cur]-places[j])==cur-i)return false;
    }
    return true;
}

void solve(int cur,int n,int* places,int& cnt)
{
    if(cur==n)
    {
        cnt++;
        return;
    }
    for(int i=0;i<n;++i)
    {
        places[cur]=i;
        if(check(places,cur))solve(cur+1,n,places,cnt);
    }
}

int totalNqueens(int n)
{
    int ans=0;
    int* places=new int[n];
    solve(0,n,places,ans);
    delete []places;
    return ans;
}