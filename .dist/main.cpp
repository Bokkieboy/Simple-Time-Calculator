#include <iostream>
#include <string>

void displaymenu(){
    using namespace std;
    cout<<"===================================================== \n";
    cout<<" \t\tTime Calc \t \n ";
    cout<<"===================================================== \n";
    cout<<" 1.Convert seconds to hours\n";
    cout<<" 2.Convert seconds to minutes\n";
    cout<<" 3.Convert minutes to hours \n";
    cout<<" 4.Convert hours to seconds \n";
    cout<<" 5.Convert minutes to seconds \n";
    cout<<" 6.Exit \n";
}


int main(){
    int choice;
    displaymenu();

    std::cout << "Please enter option";
    std::cin >> choice;

    switch (choice){
    case 1:
        secToHour(); break;
    case 2:
        secToMin(); break;
    case 3:
        minToHour(); break;
    case 4:
        hourToSec(); break;
    case 5:
        minToSec(); break;
    case 6:
        return 0;

    default: std::cout<<"invalid"; break;

    }

    return 0;
}

int secToHour(){

}
int secToMin(){

}
int minToHour(){

}
int hourToSec(){

}
int minToSec(){

}