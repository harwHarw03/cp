#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define max 100

using namespace std;

typedef struct{
    int data[max];
    int head;
    int tail;
}iniantri;

iniantri antrian;

void buat(){
    antrian.head=antrian.tail=-1;
}

int cek_kosong(){
    if(antrian.tail==-1){
        return 1;
    }
    else
    {
        return 0;
    }
}

int cek_penuh(){
    if(antrian.tail==max-1){
        return 1;
    }
    else
    {
        return 0;
    }
}

void input_antri(int data){
    if(cek_kosong()==1){
        antrian.head=antrian.tail=0;
        antrian.data[antrian.tail]=data;
        cout<<antrian.data[antrian.tail]<<"Masuk!"<<endl;
    }
        else
    if(cek_penuh==0){
        antrian.tail++;
        antrian.data[antrian.tail]=data;
        cout<<antrian.data[antrian.tail]<<"Masuk!"<<endl;
    }
}

int hapus_antri(){
    int e=antrian.data[antrian.head];
    for(int i=antrian.head;i<=antrian.tail-1;i++){
        antrian.data[i]=antrian.data[i+1];
    }
        antrian.tail--;
        return e;
}

void bersih(){
    antrian.head=antrian.tail=-1;
    cout<<"Antrian dikosongkan"<<endl;
}

void tampil(){
    int jum=0;
    if(cek_kosong==0){
        for(int i=antrian.head;i<=antrian.tail;i++){
            cout<<antrian.data[i];
            jum=jum+antrian.data[i];
        }
    }
    else
    {
        cout<<"Data kosong"<<endl;
    }
}

int main()
{
    int data;
    int pilihan;
    char input;

    do{
    system("cls");


    cout<<"Masukan nilai data : ";
    cin>>data;
    input_antri(data);
    cout<<endl<<"Ingin memasukan data lagi? (Y/T)";
    cin>>input;

    }while(input=='Y');

return 0;
}

