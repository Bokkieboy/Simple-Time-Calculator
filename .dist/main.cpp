#include <iostream>
#include <string>

void displaymenu(){ //This is the function to display the menu where the user can choose what convertion they would like to use
    using namespace std;
    cout<<"\n ===================================================== \n";
    cout<<" \t\tTime Calc \t \n ";
    cout<<"===================================================== \n";
    cout<<" 1.Convert seconds to hours\n";
    cout<<" 2.Convert seconds to minutes\n";
    cout<<" 3.Convert minutes to hours \n";
    cout<<" 4.Convert hours to seconds \n";
    cout<<" 5.Convert minutes to seconds \n";
    cout<<" 6.Exit \n";
}

int secToHour(){ //This function asks for the input of seconds and gives back the hours
    int seconds, result;
    using namespace std;

    cout << "How many seconds? ";
    cin >> seconds;
    result = seconds / 60 / 60;
    cout << result;
}
int secToMin(){ //This function asks for the input of seconds and gives back the minutes
    int seconds, result;
    using namespace std;

    cout << "How many seconds? ";
    cin >> seconds;
    result = seconds / 60;
    cout << result;
}
int minToHour(){ //This function asks for the input of minutes and gives back the hours
    int minute, result;
    using namespace std;

    cout << "How many minutes? ";
    cin >> minute;
    result = minute / 60;
    cout << result;
}
int hourToSec(){ //This function asks for the input of hours and gives back the seconds
    int hour, result;
    using namespace std;

    cout << "How many hours? ";
    cin >> hour;
    result = hour * 60 * 60;
    cout << result;
}
int minToSec(){ //This function asks for the input of minutes and gives back the seconds
    int min, result;
    using namespace std;

    cout << "How many minutes? ";
    cin >> min;
    result = min * 60;
    cout << result;
}

int main(){
    int choice;
    displaymenu();

    std::cout << "Please enter option "; //Asks the user for an option
    std::cin >> choice;

    switch (choice){ //Uses switch case to send the user to a specific funciton
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

    default: std::cout<<"invalid"; break; //If the wrong value is entered the program resets

    }

    return 0;
}

