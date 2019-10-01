#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset <int> coub;
    for (int i=0, temp; i<n; i++)
    {
        cin >> temp;
        coub.insert(temp);
    }
    for(auto i : coub)
    {
            cout << i << " ";
    }
    return 0;
}
