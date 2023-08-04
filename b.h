#ifndef B_H_INCLUDED
#define B_H_INCLUDED

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

#define top(S) ((S).top)
#define next(P) (P)->next
#define info(P) (P)->info

typedef struct ElmStack *adr;

struct ElmStack {
    string info;
    adr next ;
};

struct Stack{
    adr top;
};

Stack creatStack();
adr newElm(int INP);
void push(Stack &S, adr p);
string twoNdComplement(string bin1);
int getIntValue();
string getBiner();
Stack Des2Bin(int INP);
int Bin2Des(string INP);
void ShowBinary(Stack INP);
int menu();

#endif // B_H_INCLUDED
