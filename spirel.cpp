#include <iostream>
using namespace std;

void print(int arr[][4],int n,int m){

     int srow=0;
                int erow=n-1;
                int scol=0;
                int ecol=m-1;

                while (ecol>=scol && erow>=srow)
                {
                   
               
                

                //top
                for(int j=scol;j<=ecol;j++){
                    cout<<arr[srow][j]<<" , ";
                }

                //right

                for(int i=srow+1;i<=erow;i++){
                    cout<<arr[i][ecol]<<" , ";
                }
                //bottom

                for(int j=ecol-1;j>=scol;j--){
                    if(srow==erow){//middle
                        break;
                    }
                    cout<<arr[erow][j]<<" , ";
                }
                //left
                for(int i=erow-1;i>=srow+1;i--){
                    if(scol==ecol){//middle
                        break;
                    }
                    cout<<arr[i][scol]<<" , ";
                }
               
                srow++,scol++,erow--,ecol--;
                 }
}



int main(){
    int arr[4][4]={{1,2,3,4},
                  {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}};
;
            
               

    print(arr,4,4);


    return 0;
}