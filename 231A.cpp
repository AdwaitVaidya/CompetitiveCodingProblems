#include <iostream>
#include <list>
#include <vector>
using namespace std;
 
void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;
 
    number = 0;
 
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
 
        // extract the next character from the buffer
        c = getchar();
    }
 
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
 
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}
 
int main() {
    int n;
    fastscan(n);
    int counter = 0;
    for(int i = 0; i< n; i++){
        int miniCount = 0;
        for (int j = 0; j < 3; ++j) {
            int num = 0;
            fastscan(num);
            if (num == 1){
                miniCount++;
            }
        }
        if(miniCount>=2){
            counter++;
        }
 
    }
 
    cout << counter << endl;
    return 0;
}
