#include <iostream>
using namespace std;

void print(int arr[][3],int key,int n,int m){
    int num=0;
    for (int  i = 0; i <=n-1; i++)
    {
        for(int j=0;j<=m-1;j++){
            if(arr[i][j]==key){
                num++;
            }
        }
    }
    cout<<num;
    
}

int main (){

    int arr[][3]={{4,7,8},
                    {8,8,7}};
                  int  key=7;
                    print(arr,key,2,3);


    return 0;
}