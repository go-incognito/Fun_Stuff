#include<bits/stdc++.h>
using namespace std;
 

//Driver program to test above functions


string temp;
string enter = "press: Enter/return";
int var;
void give_line_and_enter(){
    cout<<"press 1 to continue"<<endl;
    cin>>var;
}


void pos1(){
    cout<<"\nthank you very much for continuing :) \n let's know something about you"<<endl;
    cout<<"\nCan you please fill in your name: ";
    string name;
    cin>>name;

    cout<<"\nDo you like coffee ? ,if yes press 1 else press 2: ";
    int coffee;
    cin>>coffee;
    if(coffee==1){
        cout<<"\nYayy !! i also like coffee, Can we go for a coffee today evening ? press 1 if yes else 2\n"<<endl;
        int yes;
        cin>>yes;
        if(yes==1){
            cout<<"\nYo!! \n i have tried to write some programme to communicate, but unfortunately i couldn't design the whole programme in such small interval of time. \n IG: Tony_xyz (Tony xyz) is my instagram we can get connected over there or just search of fb you will find easily\n\n";
        }
        else{
            string reason;
            cout<<"\nCan you please specify the reason ?\n" ;
            cin>>reason;
            // cout<<"\nreason: \n"<<reason<<endl;
            cout<<"\nYo!! \ni have tried to write some programme to communicate, but unfortunately i couldn't design the whole programme in such small interval of time. \nIG: Tony_xyz (Tony xyz) is my instagram we can get connected over there or just search on fb you will find easily\n\n";
            // cout<<"Thanks :)\n";
        }
    }
    else{
        cout<<"\nIs there any other place where we can spend some time while communicating with each other like students starbucks/Mc Donald's/ Domino's ? \npress 1 if yes press 2 if No: ";
        int choice;
        cin>>choice;
        if(choice==1){
            cout<<"\nYo !!, what's the place ?\nPlace: ";
            string place;
            cin>>place;
            cout<<"\nYo!! \ni have tried to write some programme to communicate, but unfortunately i couldn't design the whole programme in such small interval of time. \nIG: Tony_xyz (Tony xyz) is my instagram we can get connected over there or just search on fb you will find easily\n\n";
        }
        else{
            cout<<"\nCool, thanks i appreciate your time :)\n"<<endl;
        }
    }   
        


}

void last(){
    cout<<"\nDid you like the programme ? "<<endl;
    string temp;
    cin>>temp;
    cout<<"\nThank you for the feedback about the programme\nBBye.\n";
}

void pos2(){
    cout<<"Thank you very much :)\n";
}

int main() {
    
    // cout<<enter<<endl;
    // give_line_and_enter();  
    string hi = "\nHi, good afternnon. \n i have written this programme to communicate with you, i have tried to make it simple, it's not robust. So please don't give random inputs\n";
    cout<<hi<<endl;
    give_line_and_enter();
    string intro = "\nMy name is Tony , and i have got some crush on you, from past 15 min. I wanted to talk, but we can create some disturbance in library hence i did what i am good at, i.e. Wrote programme. Let's continue. \n";
    cout<<intro<<endl;
    give_line_and_enter();
    string give_choice = "\nIf you don't like the programme or anything, you can quit by pressing 2 if you wanna continue press 1 \n";
    cout<<give_choice<<endl;
    int choice;
    cin>>choice;
    if(choice==1) pos1();
    else pos2();
    last();


    return 0;
}