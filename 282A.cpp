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
    int m;
    fastscan(m);
 
    int initInt = 0;
    char s;
    cin >> s;
    cin >> s;
    if (s == '+'){
        initInt++;
        m--;
    } else{
        initInt--;
        m--;
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < 3; ++j) {
            cin >> s;
        }
        if (s == '+'){
            initInt++;
        } else{
            initInt--;
        }
    }

    cout << initInt << endl;
 
    return 0;
}
