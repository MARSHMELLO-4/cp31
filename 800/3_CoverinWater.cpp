#include <bits/stdc++.h>
using namespace std;

int solve(vector<char> &row)
{
    int currCount = 0;
    int n = row.size();
    int totalEmptyCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (row[i] == '.')
        {
            currCount++;
            if (currCount >= 3)
            {
                return 2;
            }
            totalEmptyCount++;
        }
        else
        {
            // it is # then it means it is blocked operation
            currCount = 0;
        }
    }

    return totalEmptyCount;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> row(n);

        for (int i = 0; i < n; i++)
        {
            cin >> row[i];
        }

        // now
        // if the row contains continous 3 ... then we can reutrn 2 else

        cout << solve(row) << endl;
    }

    return 0;
}