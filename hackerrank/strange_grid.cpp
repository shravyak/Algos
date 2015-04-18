#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int r;
    cin >> r;
    int c;
    cin >> c;
    r = r - 1;
   cout << ((r - ((r % 2) & 1))  * 5) + ((r % 2) & 1) + 2 * (c - 1) << endl;
    return 0;
}
