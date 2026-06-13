#include <iostream>
using namespace std;

void transpose(int mat[][3],int n,int m){

    // int i=0;
    // int j=0;

    // while (i<2&&j<3)
    // {
    //     swap(mat[i][j],mat[j][i]);
    //     i++,j++;
    // }
    //    cout<<mat[i][j];
    

    int transpose[n][m]={{0}};

for(int i=0;i<2;i++){
   for( int j=0;j<3;j++){
       transpose[j][i] =mat[i][j];

    //    cout<<mat[i][j];
    
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
         cout<<transpose[i][j]<<"";
        }
        cout<<endl;
    }

}

int main (){

    int mat[][3]={{1,2,3},
                  {4,5,6}};

transpose(mat, 2,3);

    return 0;
}