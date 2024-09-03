#include<bits/stdc++.h>

using namespace std;

// int main()
// {
//     int n=0;
//     int fact=1;
//     while(n!=0)
//     {
//         fact*=n;
//         n--;
//     }
//     int count=0;
//     int r=0;
//     while(fact!=0)
//     {
//         r = fact%10;
//         if(r==0)
//         {
//             count++;
//         }
//         else
//         {
//             break;
//         }
//         fact/=10;
//     }

//     cout<<"Count is : "<<count;
//     return 0;
// }

int main()
{
    string str = "asdfghjklqwertyuiopzxcvbnm";
    set<char> s;
    for(char c : str)
    {
        s.insert(c);
    }
    if(s.size()==26)
    {
        cout<<"True";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
