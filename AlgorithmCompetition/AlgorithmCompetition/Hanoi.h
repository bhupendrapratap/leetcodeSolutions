#include"Header.h"
class Hanoi{
    public:
    Hanoi(int disks):totalDisks(disks){}
    void solve();
    private:
    int totalDisks;
    void move(int numDisks,string init,string temp,string desti);
    void moveOne(int numDisk,string init,string desti);
};

void Hanoi::solve()
{
    string init="A";
    string temp="B";
    string desti="C";
    move(totalDisks,init,temp,desti);
}

void Hanoi::moveOne(int numDisk,string init,string desti)
{
    cout<<"Move disk No."<<numDisk<<" from "<<init<<" to "<<desti<<endl;
}

void Hanoi::move(int numDisks,string init,string temp,string desti)
{
    if(numDisks==1)moveOne(1,init,desti);
    else
    {
        move(numDisks-1,init,desti,temp);
        moveOne(1,init,desti);
        move(numDisks-1,temp,init,desti);
    }
}