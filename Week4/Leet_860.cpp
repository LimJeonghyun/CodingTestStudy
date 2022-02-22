#include <iostream>
#include <vector>
using namespace std;

int main(){
    string result = "true";
    int fives=0;
    int tens=0;
    int change1=0;
    int change2=0;
    string result="true";
    vector<int> bills={10,10};
    for(int i = 0; i<bills.size(); i++){
        //156ms
        // cout << fives << "-" << tens << endl;
        // if(bills[i]==10){
        //     if(fives<=0) {
        //         cout<<"false" << endl;
        //         break;
        //     }
        //     else{
        //         fives--;
        //         tens+=1;
        //     }
        // }
        // else if(bills[i]==5) fives++;
        // else{
        //     if(tens<=0){
        //         if(fives>=3) fives-=3;
        //         else {
        //             cout << "false" << endl;
        //             break;
        //         }
        //     }
        //     else{
        //         if(fives<=0) {
        //             cout<< "false" << endl;
        //             break;
        //         }
        //         else{
        //             tens-=1;
        //             fives-=1;
        //         }
        //     }

        // 149ms
    //     if(bills[i]==10){
    //             if(change1<=0){
    //                 result=false;
    //                 break;
    //             }
    //             change1-=1;
    //             change2+=1;
    //         }
    //         else if(bills[i]==20){
    //             if(change1<=0 || change2<=0){
    //                 if(change1<3){
    //                     result=false;
    //                     break;
    //                 }
    //             }
    //             if(change1>0 && change2>0){
    //                 change1-=1;
    //                 change2-=1;
    //             }
    //             else if(change1>=3 && change2<=0) change1-=3;

    //         }
    //         if(bills[i]==5) change1+=1;
    //     }
    //     return result;
    // }
    // cout << "true" << endl;
        }      
    return 0;
}