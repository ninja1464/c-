#include <iostream>
#include <vector>
#include "bits.h"
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}