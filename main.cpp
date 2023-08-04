#include "b.h"

int main()
{
    int pilihan = menu();
    while(pilihan != 3){
        if (pilihan == 1){
            int intDesimal = getIntValue();
            Stack S = Des2Bin(intDesimal);
            cout<<"Biner dari "<<intDesimal<<" adalah : ";
            ShowBinary(S);
            cout<<endl;
            cout<<endl;
        }else if(pilihan == 2){
            cout<<"1.String biner biasa"<<endl;
            cout<<"2.String biner 2nd COMPLEMENT"<<endl;
            cout<<endl;
            int pilihanBiner ;
            cout<<"Input Pilihan : ";
            cin >> pilihanBiner;
            if (pilihanBiner == 1){
                string strBiner = getBiner();
                int desimal = Bin2Des(strBiner);
                cout<<"Desimal dari biner "<<strBiner<<" adalah : "<<desimal<<endl;
            }else if (pilihanBiner == 2){
                string strBiner = twoNdComplement(getBiner());
                int desimal = Bin2Des(strBiner);
                cout<<"Desimal dari biner "<<strBiner<<" adalah : "<<-1 * desimal<<endl;
            }else{
                cout<<"Input Pilihan salah, Silahkan mulai dari awal.."<<endl;
                cout<<endl;
            }

            cout<<endl;
        }else {
            cout<<"Input Pilihan salah, Silahkan input ulang.."<<endl;
            cout<<endl;
        }
        pilihan = menu();
    }


    cout<<"Terimakasih, anda telah keluar dari program..."<<endl;


}
