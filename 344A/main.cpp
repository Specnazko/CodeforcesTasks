#include <iostream>

using namespace std;

int main()
{
    int n, a=1;
    cin >> n;
    int nums[n];
    cin >> nums[0];
    for (int i=1; i<n; i++)
    {
        cin >> nums[i];
        if (nums[i]!=nums[i-1]) a++;
    }
    cout << a;
    return 0;
}
