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
 
 
char to_lowercase(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
 
    return c;
}
 
int main() {
    string string1;
    string string2;
 
    cin >> string1;
    cin >> string2;
 
    for (char &c: string1) {
        c = to_lowercase(c);
    }
 
    for (char &c: string2) {
        c = to_lowercase(c);
    }
 
    if (string1 == string2){
        cout << 0 << endl;
    }
    if(string1 > string2){
        cout << 1 << endl;
    }
    if (string1 < string2){
        cout << -1 << endl;
    }
 
 
 
/*
    for (int i = 0; i < string1.length(); ++i) {
        if ((string1.at(i) == string2.at(i))
            || string1.at(i)+32 == string2.at(i)
            || string1.at(i) == string2.at(i)+32
        ){
 
 
        }
    }*/
 
    return 0;
}
