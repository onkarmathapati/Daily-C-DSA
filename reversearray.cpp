#include <iostream>
using namespace std;

int main()
{

          int n;
          cin >> n;

          int a[n];
          for (int i = 0; i < n; i++)
          {
                    cin >> a[i];
          }
          int start = 0;
          int end = n - 1;
          while (start <= end)
          {
                    swap(a[start], a[end]);
                    start++;
                    end--;
          }

          cout << "after reverse" << endl;
          for (int i = 0; i < n; i++)
          {
                    cout << a[i] << endl;
          }

          return 0;
}