#include <iostream>

using namespace std;

int main()
{
    int n, m, time=0;
    cin >> n >> m;
    int nums[m+1];
    nums[0]=1;
    for (int i=1; i<m+1; i++)
    {
        cin >> nums[i];
    }
    for (int i=1; i<m+1; i++)
    {
        if (nums[i]==nums[i-1])
        {
            continue;
        }
        else if (nums[i]<nums[i-1])
            {
            time+=n;
            }
        else time++;
    }
    cout << time;
    return 0;
}
