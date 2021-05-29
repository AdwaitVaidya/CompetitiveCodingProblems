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
   int tc;
   fastscan(tc);
   for(int k = 0;k<tc;k++) {
       string in;
       cin>>in;
       int strLength = in.size();
       int size = strLength-2;
       if(strLength > 10) cout << in.at(0) << size << in.at(strLength-1) << endl;
       else cout << in << endl;
   }
    return 0;
}
