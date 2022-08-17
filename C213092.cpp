#include <bits/stdc++.h>
using namespace std;
int main()
{
 int a;
 ifstream file("input.txt");
  file>>a;
    file.close();
     int f=0;
      for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                f=1;
                break;
            }
        }
    string x;
    if(f==1)
    x=" is a composite";
    else
    x=" is a prime";
    ofstream y;
    y.open("output.txt");
    y<<a<<x
    <<endl;
    y.close();

}
