#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int puzzles[m];
    for (int i=0; i < m; i++)
    {
       cin >> puzzles[i];
    }
    for(int i=0;i<m;i++)
    {
            for(int j=0;j<m;j++)
            {
                if(puzzles[i]<puzzles[j])
                {
                    swap(puzzles[i], puzzles[j]);
                }
            }
    }
        int min=1000;
        n--;
        for(int i=0; i<(m-n); i++){
            if(min > puzzles[i+n]-puzzles[i])
                min=puzzles[i+n]-puzzles[i];
        }

        cout<<min;
    return 0;
}
