/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main(){
    int A , H , B;
    string C ; 
    cout << "Enter your age: ";
    cin >> A;
    if(A <= 25){
        cout << "Enter your height: ";
        cin >> H;
        if(H < 100){
            C = "Chopper";
        }else if(H < 180){
            C = "Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> B;
        if(B > 1100000000){
                C = "Zoro";
            }else{
                C = "Sanji";
            }

        }
        
    }else if(A <= 60){
        cout << "Enter your bounty: ";
        cin >> B;
        if(B > 500000000){
            C = "Jinbe";
        }else{
            C = "Franky";
        }
    }else {
        C = "Brook";
    }
    cout << "Your character = " << C;
    return 0;
}