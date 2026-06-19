#include <iostream>
using namespace std;

bool palindrome(char arr[],int n){
for(int i=0;i<n;i++){
    if(arr[i]==arr[n-i-1]){
        return true;
    }else{
        return false;
    }
}
}
int main (){

    char arr[]="raceca";
    
    int n=sizeof(arr)/sizeof(char)-1;//-1 for \n is count 

    cout<<palindrome(arr,n);



    return 0;

}