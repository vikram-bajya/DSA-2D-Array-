// //Question 2

// #include <iostream>
// #include <string>
// using namespace std;

// bool swapString(string st1,string st2){

//  if(st1.length()!=st2.length()){
//     return false;
//  }
//  char diffChar1=0;
//  char diffChar2=0;
//  char diff=0;

//  for( int i=0;i<st2.length();i++){
//     if (st1[i]!=st2[i]){
//         if(!diff){
//             diffChar1=st2[i];
//             diffChar2=st1[i];

//         }else{
//             if(st1[i]!=diffChar2 || st2[i]!=diffChar1){
//                 return false;
//             }
//         }
//         diff++;
//     }
//     if(diff>2){
//         return false;
//     }
     
    
//     }
//     if(diff==1){
//         return false;
//     }
//     return true;

// }

// int main (){
//     string st1 ="bank";
//     string st2="kbnb";

//    cout <<  swapString(st1,st2);
//     return 0;
// }
