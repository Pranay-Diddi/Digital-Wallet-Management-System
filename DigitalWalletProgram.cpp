#include <bits/stdc++.h>

using namespace std;

void customSort(int users[][2], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (users[i][1] > users[j][1] || (users[i][1] == users[j][1] && users[i][0] > users[j][0]))
            {

                swap(users[i][0], users[j][0]);
                swap(users[i][1], users[j][1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int users[n][2];

    for (int i = 0; i < n; i++)
    {
        cin >> users[i][0] >> users[i][1];
    }

    int noOfQueries;
    cin >> noOfQueries;

    for (int i = 0; i < noOfQueries; i++)
    {
        int fromUser, toUser, transactionAmount;
        cin >> fromUser >> toUser >> transactionAmount;

        int fromIndex = -1, toIndex = -1;
        for (int j = 0; j < n; j++)
        {
            if (users[j][0] == fromUser)
            {
                fromIndex = j;
            }
            if (users[j][0] == toUser)
            {
                toIndex = j;
            }
        }

        if (fromIndex == -1 || toIndex == -1)
        {
            cout << "Failure" << endl;
        }
        else if (users[fromIndex][1] < transactionAmount)
        {
            cout << "Failure" << endl;
        }
        else
        {
            users[fromIndex][1] -= transactionAmount;
            users[toIndex][1] += transactionAmount;
            cout << "Success" << endl;
        }
    }

    cout << endl;

    customSort(users, n);

    for (int i = 0; i < n; i++)
    {
        cout << users[i][0] << " " << users[i][1] << endl;
    }

    return 0;
}