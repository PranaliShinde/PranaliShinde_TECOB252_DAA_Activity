#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) 
{

 int i,a[200],j,size,p,t,c;

 a[0]=1;
size=1;
for(i=2;i<=n;i++)
    {
        p=size;c=0;
        for(j=0;j<size;j++)
         {
                t=a[j]*i+c;
                c=t/10;
                a[j]=t%10;
        }
    while(c)
        {
            a[j]=c%10;
            size++;
        j++;
            c=c/10;
        }
    }

    for(i=size-1;i>=0;i--)
    {
        cout<<a[i];
    }
}        


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
