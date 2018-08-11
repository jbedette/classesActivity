#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>
using namespace std;
 /* John Bedette, CS162
 * Building an activity holder using classes and dynamically allocated arrays
 * It didn't work out too hot. I've really struggled with this. I don't know why I haven't gotten help. I guess I sort of just expected it to make sense eventually.
 * It doesn't. I think my lack of a destructor has made it so my memory is ruined. Things were at least working a while ago.
 */


//consts
    const int SIZE = 40;
//classes
class act{
    public:
        act();
        act(int length, char name[], char desc[], char season[], char toBring[]); 
        int input();
        int copy(act &);
        void display();
        void set(int, char[],char[],char[],char[]);
        ~act();
    private:
        char  name[100];
        char  desc[100];
        char  season[100];
        char  toBring[100];
        int length;
};
class list{
    public:
        list();
        list(int length, char name[], char desc[], char season[], char toBring[]);
        void input();
        void display();
        void addToList(act & toAdd);
    private:
        act typeActs[20];
        int numActs;
};

//proto
bool again();
void dynamicArrSetter(char[],char[]);
void menu();
void actSearch(int, act[]);
bool comparer(char [], char []);
void coutFormat(char[],int);
void menuText();
void read(int, char result[]);
int getAct();

int getStrLen(char[]);
