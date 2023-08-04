#include "b.h"

Stack creatStack(){
    Stack S;
    top(S) = NULL;
    return S;
};
adr newElm(int INP){
    adr p = new ElmStack;

    info(p) = INP;
    next(p) = NULL;

    return p;
};
void push(Stack &S, adr p){
    if (top(S) == NULL){
        top(S) = p;
    }else{
        next(p) = top(S);
        top(S) = p;
    }
};
int getIntValue(){
    int INP;
    cout << "Input Bilangan Bulat : ";
    cin >> INP;
    return INP;
};
string getBiner(){
    string INP;
    cout << "Input Biner String : ";
    cin >> INP;

    string hasil;

    int len = INP.size();
    for (int i = 0; i <= len ; i++){
        hasil += INP[i];
    }
    return hasil;
};
string twoNdComplement(string bin1){

    //String balik (mengubah 1 menjadi 0 dan sebaliknnya
    string balik;


    string bin2, hasil;
    int carry, re;
    int len = bin1.size();
    for(int i= 0 ; i< len; i++){
        if (bin1[i] == '1'){
            balik += '0';
        }else{
            balik += '1';
        }
    }

    //Perhitungan 2ndComplement

    for(int i= 0 ; i< (len -1); i++){
        bin2.append("0");
    }
    bin2.append("1");
    hasil = "";


    carry = 0;
    for(int i=(len-1); i>-1; i--){
        re = carry;
        if(balik[i] == '1')
            re = re+1;
        else
            re = re+0;
        if(bin2[i] == '1')
            re = re+1;
        else
            re = re+0;
        if(re%2==1)
            hasil = '1' + hasil;
        else
            hasil = '0' + hasil;
        if(re<2)
            carry = 0;
        else
            carry = 1;
    }
    if(carry!=0){
        hasil = '1' + hasil;
    }
    return hasil;
};
Stack Des2Bin(int INP){

    Stack S = creatStack();

    // Untuk memastikan bahwa input merupakan bilangan positif
    // Berfungsi untuk memastikan program konversi dapat berjalan
    int input = INP;
    if (INP < 0){
        input = -INP;
    }


    string temp;
    while(input > 0){
        temp.append(to_string(input % 2));
        input /= 2;
    }


    string balikString;
    for(int i = temp.length() - 1 ; i >= 0; i-- ){
        balikString += temp[i];
    }

    //Membuat fix 16digit biner
    string enamBelas ;
    for (int i = 0 ; i < 16 - balikString.length();i++){
        enamBelas.append("0");
    }

    enamBelas.append(balikString);
    //Jika input merupakan desimal positif
    for(int a=(enamBelas.size()-1); a>-1; a--){
        if(INP >= 0 ){
            push(S,newElm(enamBelas[a]));
        }
    }

    //Jika input merupakan desimal negatif
    string hasil = twoNdComplement(enamBelas);
    if (INP < 0){
        for (int i = hasil.size() ; i >0 ; i--){
        push(S,newElm(hasil[i]));
        }
    }

    cout<<"Isi Stack : ";
    ShowBinary(S);
    cout<<endl;


    return S;
};
int Bin2Des(string INP){
    Stack S = creatStack();
    int i,N,decimalNumber=0,p=0;
    N=INP.size() - 1;
    for(i=N-1;i>=0;i--)
    {
        push(S,newElm(INP[i]));
        if(INP[i]=='1'){
            decimalNumber+=pow(2,p);
        }
        p++;
    }

    cout<<"Isi Stack : ";
    ShowBinary(S);
    cout<<endl;

    return decimalNumber;
};
void ShowBinary(Stack INP){
    adr cur = top(INP);
    while(cur != NULL){
        cout<<info(cur);
        cur = next(cur);
    }
};
int menu(){
    int input;
    cout << "MENU" <<endl;
    cout<< "1. Decimal To Binary"<<endl;
    cout<< "2. Binary To Decimal"<<endl;
    cout<< "3. Selesai"<<endl;
    cout<<endl;

    cout <<"Pilih Menu : ";
    cin >>input;
    cout<<endl;

    return input;
};
