#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "size: ";
    cin >> n;

    int *p = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    /* int maxSum = 0;
     int currSum = 0;

     for (int i = 0; i < n; i++)
     {
         currSum += p[i];
         if (currSum > maxSum)
         {
             maxSum = currSum;
         }

         if (currSum < 0)
         {
             currSum = 0;
          }
 cout<<"maximum sum is: " <<maxSum;*/
    //-->this algo wont work if all the elements in the array are negative!!!

    int maxSum = p[0];
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += p[i];
        if (currSum < p[i])
        {
            currSum = p[i];
        }
        if (maxSum < currSum)
        {

            maxSum = currSum;
        }
    }

    cout << "the maximum sum is: " << maxSum;
}
