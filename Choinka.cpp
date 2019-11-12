#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
    int k=3;
    string s = "*";
    for(int i=0;i<4;i++) {
         for(int j=0;j<7;j++) {
            cout<<" ";
            if(j==k-i) cout<<s;
         }
         cout<<endl;
         s+="**";
    }
    printf("%5c",'#');
    return 0;
}

