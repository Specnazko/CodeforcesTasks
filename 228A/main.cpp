#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> A;
    for (int i=0, j; i<4; i++)
    {
        cin >> j;
        A.insert (j);
    }
    cout<<4-A.size();
    return 0;
}
