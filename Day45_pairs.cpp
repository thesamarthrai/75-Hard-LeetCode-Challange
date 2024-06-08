#include <bits/stdc++.h>
using namespace std;

int main()
{

    pair<int, int> p[3];
    p[0] = {1, 4};
    p[1] = {2, 5};
    p[2] = {3, 6};

    swap(p[0], p[2]);

    for (int i = 0; i < 3; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }

    // Input taking using cin in pairs

    // #include <bits/stdc++.h>
    // using namespace std;
    // int main()
    // {

    //     pair<int, int> p[5];
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout << "Enter the value for the " << i + 1 << " Pair ";
    //         cin >> p[i].first >> p[i].second;
    //     }

    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout << p[i].first << " " << p[i].second << endl;
    //     }

    //     return 0;
    // }
