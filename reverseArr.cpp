#include <iostream>
using namespace std;

void reverse(char ch[],int size){
    int st=0;
    int end=size-1;

    while(st<end){
        swap(ch[st],ch[end]);
        st++,end--;

    }
}


int main (){
    char ch[]="code";
//    int  size=sizeof(ch)/sizeof(char)-1;
int size = sizeof(ch) - 1;
   reverse(ch,size);

   cout<<ch;


    return 0;
}