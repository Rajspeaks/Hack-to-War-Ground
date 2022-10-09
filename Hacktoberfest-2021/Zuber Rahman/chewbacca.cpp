#include <iostream>
using namespace std;
int numOfDigits(int no)
{
    int count = 0;
    while (no > 0)
    {
        no = no / 10;
        count++;
    }
    return count;
}
int main()
{
    long long int no = 0;
    cin >> no;
    long long int n = numOfDigits(no);
    int digitsArray[n];
    int index = n - 1;
    while (no > 0)
    {
        int lastDigit = no % 10;
        if (lastDigit >= 5)
        {
            if (lastDigit == 9)
            {
                //do nothing
            }
            else
            {
                lastDigit = 9 - lastDigit;
            }
        }

        digitsArray[index] = lastDigit;
        no /= 10;
        index--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << digitsArray[i];
    }

    return 0;
}



// #include<iostream>
// using namespace std;
// int main() {
//     long long int num, n;
//     cin >> num;
//     n = num;
//     long long int ans = 0;
//     long long int mult = 1;
//     while(n != 0){

//       long long int rem = n % 10;

//       if(rem >= 5){

//         if(rem == 9 && (n/10) == 0){
//          //do nothing
//         }else{
//           rem = 9 - rem;
//         }
//       }
//       ans += rem * mult;
//       mult *= 10;
//       n /= 10;
//     }
//     cout << ans;
//     return 0;
// }
