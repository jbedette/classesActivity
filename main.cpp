#include "head.h"
 /* John Bedette, CS162
 * Building an activity holder using classes and dynamically allocated arrays
 * It didn't work out too hot. I've really struggled with this. I don't know why I haven't gotten help. I guess I sort of just expected it to make sense eventually.
 * It doesn't. I think my lack of a destructor has made it so my memory is ruined. Things were at least working a while ago.
 */


int main(){

    cout << "greetings, enter an activity" << "\n\n";
    list hiking;
    
    do{
    hiking.input();
    }while(again());
    hiking.display();
    
    return 0;
}
bool again(){
    char option;
    cout << ">>Enter another?"<< '\n'<<"enter y/n"<<'\n';
    cin >> option;
    cin.clear();
    cin.ignore(100,'\n');
    if(tolower(option) == 'y')
        return true;
    else 
        return false;
}


/*

int menu(int &  i, act arr[]){
    char option = ' ';
    menuText();//display menu text 
    cin >> option;
    cin.clear();//get rid of nasty error inputs
    cin.ignore(100,'\n');
    option = tolower(option);                                                  
    
    if(option == 'a'){
        actAdd(arr[i],i);            
        ++i;
        option = ' ';
        menu(i, arr);
    }else if(option == 's'){                                               
        actSearch(i,arr);                                                  
        option = ' ';
        menu(i, arr);
    }else if(option == 'd'){                                                
        for(int all = 0; all < i; ++all){ 
            actDisplay(arr[all]);  
        } 
        option = ' ';
        menu(i, arr);
    }else if(option == 'q'){
        cout << ">> Goodbye"<< "\n\n";
        return 0;
    }else{
        cout << ">> Please Select an option" << "\n\n";
        option = ' ';
        menu(i,arr);
    } 
}
*/
/*
bool comparer(char search[], char type[]){
    char termA[inArrSize];
    char termB[inArrSize];
    
    for(int i = 0; i < inArrSize; ++i){
        termA[i]=tolower(search[i]);
        termB[i]=tolower(type[i]);
    }
    return !strcmp(termA,termB);
}
*/
void menuText(){
    cout << ">> Would you like to:" << '\n';                                   
    cout << ">> [A]dd an activity?" << '\n';                                   
    cout << ">> [S]earch for an activity by type" << '\n';                     
    cout << ">> [D]isplay all activitites" << '\n'; 
    cout << ">> [Q]uit" << '\n';
}
void read(int size, char result[]){
    cin.get(result,size,'\n');
    cin.ignore(282,'\n');
}

/*
void actSearch(int i, act arr[]){
    char search[20];

    cout << ">> What type of activity would you like to see all of?" << "\n\n";
    //was trying to iterate through the types and only display one of a kind
    //cout << ">> These are the current types of activities stored: ";
    //displayType(i,arr);
    cin.get(search,20,'\n');
    cin.ignore(100,'\n');

    for(int all = 0; all < i; ++all){ 
        if(comparer(search, arr[all].type)){
            actDisplay(arr[all]);  
        }
    } 
}
int getAct(){
    int success = 1;
    int inArrSize =280;
    char name[inArrSize];
    char desc[inArrSize];
    char season[inArrSize];
    char toBring[inArrSize];

    cout << ">> Enter activity name" << "\n\n";
    cin.get(name, inArrSize, '\n');
    cin.ignore(100,'\n');
    if(!cin){ 
        success = 0;
    }else{
        cout << ">> Enter activity description" << "\n\n";
        cin.get(desc, inArrSize, '\n');
        cin.ignore(100,'\n');
        if(!cin){ 
            success = 0;
        }else{
            cout << ">> Enter season activity is best in" << "\n\n";
            cin.get(season, inArrSize, '\n');
            cin.ignore(100,'\n');
            if(!cin){
                success = 0;
            }else{
                cout << ">> Enter what you should bring to activity" << "\n\n";
                cin.get(toBring, inArrSize, '\n');
                cin.ignore(100,'\n');
                if(!cin){
                    success = 0;
                }
            }
        }
    }
    
    return success;

}
*/
