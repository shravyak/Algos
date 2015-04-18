
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print_elems(int n, vector<int> in_arr){
    int min_index = 0;
    int abs_diff[n - 1];
    sort(in_arr.begin(),in_arr.end());
    int min_elem = abs(in_arr[1] - in_arr[0]) ;
    for(int i = 0; i < n - 1 ; i++){
        abs_diff[i] = abs(in_arr[i + 1] - in_arr[i]);
        if(min_elem > abs_diff[i]){
            min_elem = abs_diff[i];
        }
    }
    for (int i = 0; i < n - 1; i++){
        if(min_elem == abs_diff[i])
          cout << in_arr[i] << '\t' <<  in_arr[i + 1] << '\t';
    }
        
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int length;
    cin >> length;
    vector<int> array;
    int input;
    while(cin >> input){
        array.push_back(input);
    }
    print_elems(length, array);
    return 0;
}
