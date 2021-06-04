#include <iostream>
 
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
 
int diff(int x){
    if(x>2)return x-2;
    else return 2-x;
}
 
int main() {
    int arr[5][5];
    int posx,posy;
 
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            fastscan(arr[i][j]);
            if(arr[i][j] == 1) {
                posx = i;
                posy=j;
                goto jump;
            }
        }
    }
 
    jump:
    int result = diff(posx) + diff(posy);
 
    cout << result << endl;
 
 
 
    return 0;
}
