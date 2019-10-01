#include <iostream>
#include <set>
using namespace std;

int main()
{
    int levels, x, y;
    bool yes=true;
    set <int> LEVELS;
    cin >> levels >> x;
    for (int i=0, a; i<x; i++)
    {
        cin >> a;
        LEVELS.insert(a);
    }
    cin >> y;
    for (int i=0, a; i<y; i++)
    {
        cin >> a;
        LEVELS.insert(a);
    }
    for (int i=1; i<levels+1; i++)
    {
        if (LEVELS.find(i) != LEVELS.end()) yes=true;
        else
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
     cout << "I become the guy.";
    return 0;
}
