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
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    // //output
    // *****
    // *****
    // *****
    // *****
    // *****

}