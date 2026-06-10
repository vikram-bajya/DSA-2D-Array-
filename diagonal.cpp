#include <iostream>
using namespace std;

void diagonalSum(int arr[][4],int n,int m){

    int PD=0;
    int SD=0;
    int DT;

    //O(n^2)
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             if(i==j){
//                 PD=PD+arr[i][j];
                
//             } else if (j== n-i-1)
//             {
//                 SD=SD+arr[i][j];
//             }
            
//         }
//     }
//     cout<<PD;
    
//     cout<<SD ;
//    DT=PD+SD;
//    cout<< DT;

//O(n)

for (int i = 0; i < n; i++)
{
    PD+=arr[i][i];
    if(i!=n-i-1){
    SD+=arr[i][n-i-1];
    }
}
    cout<<PD;
    
    cout<<SD ;
   DT=PD+SD;
   cout<< DT;

}


int main (){
   int arr[][4]={{1,2,3,4},
                 {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}};

    diagonalSum(arr,4,4);

    return 0;
}