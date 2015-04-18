#include <iostream>
#include <string>
#include <set>
#include <bitset>
using namespace std;

string comchr2(string &a, string &b)
{
    string r;
    set<char> s;
    bitset<256> t;
    if (a.length()+b.length()<=1)    return "";
    if (a.compare(b)==0)    return a;
    for (string::size_type i=0; i<a.length(); i++)
        if (!t.test(a[i]))
            t.set(a[i]);
    for (string::size_type i=0; i<b.length(); i++)
        if (t.test(b[i]))
            s.insert(b[i]);
    for (set<char>::iterator it=s.begin(); it!=s.end(); it++)
        r.push_back(char(*it));
    return r;
}

int main()
{
    int num_rocks;
    cin >> num_rocks;
    string s1, s2;
    int count = 0;
    cin >> s1;
    while(count < num_rocks-1){
        cin >> s2;
        s1 = comchr2(s1,s2);
        count ++;
    }
    cout << s1.length() << endl;
}
