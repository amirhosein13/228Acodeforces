#include <iostream>

using namespace std;

int main()
{
    int a[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        for (int j = i-1; j >= 0; j--)
        {
            if (a[i] == a[j])
            {
                a[i] = -i;
                count++;
            }
        }
    }

    cout << count << endl;
}