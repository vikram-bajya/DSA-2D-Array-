// Count how many times lowercase vowels occurred in a String entered by the user.

#include <iostream>
#include <string>
using namespace std;

void vowels_count(string str){
    int count=0;
    for (char ch:str){
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u'){
            count++;
        }
    }
    cout<<count;
}

int main (){
    string str="";
    getline(cin,str);
    
    vowels_count(str);

    return 0;
}