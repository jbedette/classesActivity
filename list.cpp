#include "head.h"
 /* John Bedette, CS162
 * Building an activity holder using classes and dynamically allocated arrays
 * It didn't work out too hot. I've really struggled with this. I don't know why I haven't gotten help. I guess I sort of just expected it to make sense eventually.
 * It doesn't. I think my lack of a destructor has made it so my memory is ruined. Things were at least working a while ago.
 */

//confused here
list::list(){
    numActs=0;
}
list::list(int length, char inName[], char inDesc[], char inSeason[], char inToBring[]){
    //intercept determined values and set dynamic size
    cout<<"........listconstructor"<<'\n';
    
    //typeActs[0].set(length,name,desc,season,toBring);
    typeActs[0].set(length,inName,inDesc,inSeason,inToBring);
    numActs = 1;
}
void list::input(){
    cout << ">>Activity number #: ";
    cout << numActs + 1 << "\n\n";
    cerr<<"........listinputpre"<<'\n';
    typeActs[numActs].input();
    cerr<<"........listinput"<<'\n';
    ++numActs;
}
void list::display(){
    for(int i = 0; i < numActs; ++i)
        typeActs[i].display();
}
void list::addToList(act & toAdd){
    cerr<<"........listadd"<<'\n';
    typeActs[numActs].copy(toAdd);
    ++numActs;
}
void dynamicArrSetter(char outTerm[], char inTerm[]){
    cerr<<"........dynamic arr"<<'\n';
    int max = strlen(outTerm);
    for(int i = 0; i < max; ++i){
        outTerm[i] = inTerm[i];
    }
}
