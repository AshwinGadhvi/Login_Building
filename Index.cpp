#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int Row,Column;
    cout<<"Enter the number of rows: ";
    cin>>Row;
    cout<<"Enter the number of columns: ";
    cin>>Column;
    //Pattern 1
    // for(int i=0;i<Row;i++)
    // {
    //     for(int j=0;j<Column;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // //output
    // *****
    // *****
    // *****
    // *****
    // *****

    //Pattern 2
    // for(int i=0;i<Row;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //output of 2'nd
    // *
    // **
    // ***
    // ****
    // *****

    //pattern 3
    // for(int i=1;i<=Row;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // 1
    // 12
    // 123
    // 1234
    // 12345
}