#include <iostream>
#include <cstring>
 
using namespace std;
 
void fastscan(int &x)
{
    bool neg=false;
    register int c;
    x =0;
    c=getchar();
    if(c=='-')
    {
        neg = true;
        c=getchar();
    }
    for(;(c>47 && c<58);c=getchar())
        x = (x<<1) + (x<<3) +c -48;
    if(neg)
        x *=-1;
}
 
int main() {
    int in;
    fastscan(in);
    if (in%2 == 0 && in != 2) cout << "YES" << endl;
    else cout << "NO" << endl;
 
    return 0;
}
