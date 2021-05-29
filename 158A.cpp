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
 
    int k;
    fastscan(k);
 
    int out = 0;
 
    int lastNum;
    for(int i = 0; i < k; i++){
        fastscan(lastNum);
        if (lastNum <= 0){
            cout << out << endl;
            return 0;
        }
        out++;
    }
 
    int tempNum = lastNum;
    while (lastNum == tempNum){
        fastscan(tempNum);
        out++;
    }
    out--;
 
    cout << out << endl;
 
    return 0;
}
