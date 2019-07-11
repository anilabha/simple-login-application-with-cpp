#include <iostream>
#include<string>
using namespace std;

/* Created By Anilabha Baral*/

//This function check the username and return a boolean

bool checkuser(string usercheck){
    if (usercheck.length()==6){
            return true;
}
else{
    return false;
}
}
//This function check the password and return a boolean

bool checkpass(string passcheck){
    if (passcheck.length()>=8){
        return true;

    }
    else {
        return false;

    }


}


//this is the main function
int main (){
   string user,pass;
   cout<<"enter the user-name:";
   getline(cin,user);
   cout<<"enter the password:";
getline(cin,pass);
//this if-else statement will compare the user input with the required input or the main logic and print the result
if (checkuser(user)==true && checkpass(pass)==true){

    cout<<"login successful";
}
else{
    cout<<"please type the right password and username";
}



   return 0;
}

