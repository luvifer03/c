 
#include <stdio.h>
using namespace std;
 
// function to convert decimal to binary
void dec_Binary(int n)
{
    // array to store binary number
    int binaryNum[100];
 
    // counter for binary array
    int i = 0;
    while (n > 0)
    {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf(binaryNum[j]);
}
