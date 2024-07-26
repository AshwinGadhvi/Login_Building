#include<iostream>
#include<conio.h>
#include<algorithm>
#include<math.h>

using namespace std;

int convertToDecimal(int n2)
{
    int l_digit = 0;
    int sum = 0;
    int count = 0;
    while(n2!=0)
    {
        l_digit = n2%10;
        sum += l_digit*pow(2,count);
        n2=n2/10;
        count++;
    }
    return sum;
}

string convertToBinary(int n)
{
    string str = "";
    while (n != 0)
    {
        if(n%2==1)
        {
            str+="1";
        }
        else
        {
            str+="0";
        }
        n=n/2;
    }
    reverse(str.begin(),str.end());
    return str;
}
int setBitCheck(int n)
{
    int l_digit=0;
    int count=0;
    while(n!=0)
    {
        l_digit = n%10;
        if(l_digit==1)
        {
            count++;
        }
        n=n/10;
    }
    return count;
}

int main()
{
    int n,n2,n3;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<convertToBinary(n)<<endl;
    cout<<"Enter Binary Number : ";
    cin>>n2;
    cout<<convertToDecimal(n2)<<endl;
    cout<<"Enter Binary Number : ";
    cin>>n3;
    cout<<setBitCheck(n3);
}