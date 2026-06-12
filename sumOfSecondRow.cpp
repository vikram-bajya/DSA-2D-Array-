#include <iostream>
using namespace std;

void sumOfMatrix(int num[][3],int n,int m){

    int sum=0;
    int i=1;
    int j=0;
    while (j<=m-1)
    {
         sum+=num[i][j];
         j++;
    }

    cout<<sum;
}

int main (){

    int num[][3]={{1,4,9},
                    {11,4,3},
                    {2,2,3}};

sumOfMatrix(num,3,3);
    return 0;
}