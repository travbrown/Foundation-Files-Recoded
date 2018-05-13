#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(){
    /*
    Main Menu:
    -Intro Prompt-
        1. Add() -
            a. Check Max Limit
                --> Read plyrIndex file
                --> If is 20 then return to Main
                --> Else continue;
            b. Take info
            c. Append to File
        2. Edit() -
            a. Who?
                --> Search function
                --> populate ref param
            b. Edit what exactly?
            c. Enter new, Write to file 
        3. View() -
            a. Who?
                --> Search Function
                --> populate ref param
            c. Print to User
        4. Delete()
            a. Who? 
            b. Confirm Person
            c. Delete / Rewrite without them
        5. Quit / End While Loop
    */
   do{
    int choice=0, Playr_count=0; system("color F0"); 
    cout << "\t\tWelcome to Foundation Files\n\n\n";
    cout << "Please enter the number that corresponds with your choice.";
    cout << "\n\t1. Add Player\n\t2. Edit Player\n\t3. View Player\n\t4. Delete Player\n\t";
    cout << "5. Quit\n";
    cout << "You selected: ";
    cin >> choice;
    
    switch(choice){
            case 1:
                system("clear");
                //Call add();
                break;
            case 2:
                system("clear");
                //Call add();
                break;
            case 3:
                system("clear");
                //Call add();
                break;
            case 4:
                system("clear");
                //Call add();
                break;
            case 5:
                system("clear");
                cout << "Thank you for using Foundation Files. Ball is life" << endl;
                choice = 5;
                break;
            default:
                system("clear");
                cout << "I'm sorry this option does not exist. Please try again."
                break;
    }
   }while(choice != 5);

    return 0;
}


/*
Future adjustments:
    --> Allows user to confirm player being able to see
            all their data. This is in the event of 2 players
            having nearly identical info.
*/