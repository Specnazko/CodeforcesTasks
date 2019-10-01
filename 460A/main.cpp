#include <iostream>

using namespace std;

int main()
{
    long long int n, m, time=0;
    cin >> n >> m;
    long long int nums[m+1];
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
            time+=n-nums[i-1]+nums[i];
            }
        else time+=nums[i]-nums[i-1];
    }
    cout << time;
    return 0;
}
