#include <iostream>
#include <conio.h>
#include<algorithm>

using namespace std;

int main()
{
    int Row, Column;
    cout << "Enter the number of rows: ";
    cin >> Row;
    cout << "Enter the number of columns: ";
    cin >> Column;
    // Pattern 1
    //  for(int i=0;i<Row;i++)
    //  {
    //      for(int j=0;j<Column;j++)
    //      {
    //          cout<<"*";
    //      }
    //      cout<<endl;
    //  }

    // //output
    // *****
    // *****
    // *****
    // *****
    // *****

    // Pattern 2
    //  for(int i=0;i<Row;i++)
    //  {
    //      for(int j=0;j<=i;j++)
    //      {
    //          cout<<"*";
    //      }
    //      cout<<endl;
    //  }

    // output of 2'nd
    //  *
    //  **
    //  ***
    //  ****
    //  *****

    // pattern 3
    //  for(int i=1;i<=Row;i++)
    //  {
    //      for(int j=1;j<=i;j++)
    //      {
    //          cout<<j;
    //      }
    //      cout<<endl;
    //  }

    // output 3rd
    //  1
    //  12
    //  123
    //  1234
    //  12345

    // pattern 4
    //  for(int i=1;i<=Row;i++)
    //  {
    //      for(int j=1;j<=i;j++)
    //      {
    //          cout<<i;
    //      }
    //      cout<<endl;
    //  }

    // output 4th
    //  1
    //  22
    //  333
    //  4444
    //  55555

    // pattern 5
    //  for(int i=Row;i>0;i--)
    //  {
    //      for(int j=i;j>0;j--)
    //      {
    //          cout<<"*";
    //      }
    //      cout<<endl;
    //  }

    // output 5th
    //  *****
    //  ****
    //  ***
    //  **
    //  *

    // pattern 6
    // for (int i = Row; i > 0; i--)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // output 6th
    //  54321
    //  4321
    //  321
    //  21
    //  1

    // pattern 7
    //  for(int i=0;i<Row;i++)
    //  {
    //          for(int j=0;j<Column-i-1;j++)
    //          {
    //              cout<<"-";
    //          }
    //          //star
    //          for(int j=0;j<(2*i)+1;j++)
    //          {
    //              cout<<"*";
    //          }
    //          //space
    //          for(int j=0;j<Column-i-1;j++)
    //          {
    //              cout<<"-";
    //          }
    //      cout<<endl;
    //      }
    // output 7
    //  ----*----
    //  ---***---
    //  --*****--
    //  -*******-
    //  *********
    // pattern 8

    // for(int i=0;i<Row;i++)
    // {
    //     //space
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<"-";
    //     }
    //     //star
    //     for(int j=0;j<(2*Row)-(i*2)-1;j++)
    //     {
    //         cout<<"*";
    //     }
    //     //space
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<"-";
    //     }
    //     cout<<endl;
    // }

    // output 8th
    //  *********
    //  -*******-
    //  --*****--
    //  ---***---
    //  ----*----
    // for (int i = 0; i < Row; i++)
    // {
    //     for (int j = 0; j < Column - i - 1; j++)
    //     {
    //         cout << "-";
    //     }
    //     // star
    //     for (int j = 0; j < (2 * i) + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     // space
    //     for (int j = 0; j < Column - i - 1; j++)
    //     {
    //         cout << "-";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < Row; i++)
    // {
    //     // space
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "-";
    //     }
    //     // star
    //     for (int j = 0; j < (2 * Row) - (i * 2) - 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     // space
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "-";
    //     }
    //     cout << endl;
    // }
    // output
    //  ----*----
    //  ---***---
    //  --*****--
    //  -*******-
    //  *********
    //  *********
    //  -*******-
    //  --*****--
    //  ---***---
    //  ----*----

    // Pattern 9
    //  for(int i=0;i<Row;i++)
    //  {
    //      for(int j=0;j<i;j++)
    //      {
    //          cout<<"*";
    //      }
    //      cout<<endl;
    //  }
    //  for(int i=0;i<Row;i++)
    //  {
    //      for(int j=Column;j>i;j--)
    //      {
    //          cout<<"*";
    //      }
    //      cout<<endl;
    //  }

    // output
    //  *
    //  **
    //  ***
    //  ****
    //  *****
    //  ****
    //  ***
    //  **
    //  *

    // // Pattern 10
    // int start = 1;
    // for (int i = 1; i <= Row; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         start = 1;
    //     }
    //     else
    //     {
    //         start = 0;
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << start;
    //         start = 1 - start;
    //     }
    //     cout << endl;
    // }
    // output
    // 0
    // 10
    // 010
    // 1010
    // 01010

    // pattern 11

    // int space = 2 *( Row - 1);
    // for (int i = 1; i <= Row; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j;
    //     }

    //     cout << endl;
    //     space-=2;
    // }

    // output
    // 1        1
    // 12      21
    // 123    321
    // 1234  4321
    // 1234554321

    //pattern 12

    //     for(int i=65;i<Row;i++)
    // {
    //     for(int j=65;j<=i;j++)
    //     {
    //         cout<<(char)j;
    //     }
    //     cout<<endl;
    // }

    //output
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    // ABCDEF

}