#include <iostream>
using namespace std;
int first_occurance(int a[1000], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + e / 2;
        if (a[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (a[mid] > key)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int last_occurance(int a[1000], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + e / 2;
        if (a[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (a[mid] > key)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    cout << first_occurance(a, n, key)<<endl;
    cout << last_occurance(a, n, key)<<endl;

    return 0;
}