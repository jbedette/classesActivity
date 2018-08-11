#include "head.h"
/*
 * John Bedette, CS162
 * Building an activity holder using classes and dynamically allocated arrays
 * It didn't work out too hot. I've really struggled with this. I don't know why I haven't gotten help. I guess I sort of just expected it to make sense eventually.
 * It doesn't. I think my lack of a destructor has made it so my memory is ruined. Things were at least working a while ago.
 */
act::act(){
   // /*
    name [0] = '\0';
    desc[0] = '\0';
    season[0] = '\0';
    toBring[0] = '\0';
   ///
   /*
    char * name;
    char * desc;
    char * season;
    char * toBring;
    */
    
}
act::act(int inLen, char inName[], char inDesc[], char inSeason[], char inToBring[]){
    length = inLen;
    strcpy(name, inName);
    strcpy(desc,inDesc);
    strcpy(season, inSeason);
    strcpy(toBring, inToBring );
}
/*
    int tSize = 0;
    char actName[tSIZE];
    char actDesc[tSIZE];
    char actSeason[tSIZE];
    char actToBring[tSIZE];
*/

act::~act(){
    delete []name;
    delete []desc;
    delete []toBring;
    delete []season;
}

int act::input(){
    
    char inName[SIZE];
    char inDesc[SIZE];
    char inSeason[SIZE];
    char inToBring[SIZE];
    char * newName;
    char * newDesc;
    char * newSeason;
    char * newToBring;
    int success = 1;
    cout << ">> Enter activity name" << "\n\n";
      // cin.get(inName, SIZE, '\n');
       cin.get(name, SIZE, '\n');
        cin.ignore(100,'\n');
    if(!cin){ 
        success = 0;
    }else{
        cout << ">> Enter activity description" << "\n\n";
       // cin.get(inDesc, 50, '\n');
        cin.get(desc, 50, '\n');
        cin.ignore(100,'\n');
        if(!cin){ 
            success = 0;
        }else{
            cout << ">> Enter season activity is best in" << "\n\n";
           // cin.get(inSeason, SIZE, '\n');
            cin.get(season, SIZE, '\n');
                cin.ignore(100,'\n');
                if(!cin){
                    success = 0;
                }else{
                    cout << ">> Enter what you should bring to activity" << "\n\n";
                    cin.get(inToBring, SIZE, '\n');
                   // cin.get(toBring, SIZE, '\n');
                        cin.ignore(100,'\n');
                        if(!cin){
                            success = 0;
                        }
                }
        }
    }
    newName = new char[strlen(inName)+1];
    newDesc = new char[strlen(inDesc)+1];
    newSeason = new char[strlen(inSeason)+1];
    newToBring = new char[strlen(inToBring)+1];
    strcpy(name,inName);
    strcpy(desc,inDesc);
    strcpy(season,inSeason);
    strcpy(toBring,inToBring);

    /*
    char name[strlen(inName)];
    dynamicArrSetter(name,inName);
    char desc[strlen(inDesc)];
    dynamicArrSetter(desc,inDesc);
    char season[strlen(inSeason)];
    dynamicArrSetter(season,inSeason);
    char toBring[strlen(inToBring)];
    dynamicArrSetter(toBring,inToBring);
    */
   // cout << inName<<inDesc<<inSeason<<inToBring<<'\n';
    cout << '\n' << name << desc<< season<< toBring <<'\n';
    return success;
}
void act::set(int inLen, char inName[], char inDesc[], char inSeason[], char inToBring[]){
    cerr<<"........actset"<<'\n';
    length = inLen;
    strcpy(name, inName);
    strcpy(desc,inDesc);
    strcpy(season, inSeason);
    strcpy(toBring,inToBring );
}

int act::copy(act & source){
    cout<<"........actcopy"<<'\n';
    //name = new char[]

    length = source.length;
    strcpy(name, source.name);
    strcpy(desc, source.desc);
    strcpy(season, source.season);
    strcpy(toBring, source.toBring);

}
void act::display(){
    cout << ">> " << name << '\n';
    cout << ">> " << desc << '\n';
    cout << ">> " << season << '\n';
    cout << ">> " <<  toBring << "\n\n";
    cout << sizeof(name)<<'\n';
    cout << sizeof(desc)<<'\n';
    cout << sizeof(season)<<'\n';
    cout << sizeof(toBring)<<'\n';
}
