#include <iostream>
using namespace std;


//O(n*m)
// void sortingQ(int arr[][4],int key,int n ,int m ){
//     for (int  i = 0; i < n; i++)
//     {
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==key){
//                 cout<<i<<j;
//             }
//         }
//     }
     
            
    
// }

void secondApproach(int arr[][4],int key,int n,int m){
    int i=0;
    int j=m-1;
    
    while (i<n && j>=0)
    {
        if(arr[i][j]==key){
        cout<<i<<j;
        break;
    }
    else if(arr[i][j]>key){
        j--;


    }else{
        i++;
    }
        
  
    }
    

    


}

int main(){

    int arr[4][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};

    int key=33;

    // sortingQ(arr,key,4,4);
    secondApproach(arr,key,4,4);
    return 0;
}