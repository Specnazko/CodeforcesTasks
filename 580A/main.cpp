#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i=0; i<n; i++)
    {
        cin >> nums[i];
    }
    int size = 1, maxsize=1;
    for (int i=0; i<n-1; i++)
    {
        if (nums[i]<=nums[i+1]) {
            size++;
            if (size>maxsize) maxsize=size;
        }
        else size=1;
    }
    cout << maxsize;
    return 0;
}
