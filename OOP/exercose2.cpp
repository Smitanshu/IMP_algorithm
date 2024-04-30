#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    int n = 12345;
    vector<int> ans;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        if (bit % 2 == !0)
        {
            int num = bit * bit;
            ans.push_back(num);
        }
        n = n / 10;
    }

    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
    return 0;
}