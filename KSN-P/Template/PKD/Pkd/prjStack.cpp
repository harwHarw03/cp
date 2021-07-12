#include <iostream>

using namespace std;
#define max 5

struct Tumpukan{
    int atas;
    int data[max];
}T;

void awal(){
    T.atas=-1;
}

int kosong(){
    if(T.atas== -1)
        return 1;
    else
        return 0;
}
int penuh(){
    if(T.atas==max-1)
        return 1;
    else
        return 0;
}

void push(int data){
if(kosong()==1)
    {
       T.atas++;
       T.data[T.atas]=data;
       cout<<"\nData "<<T.data[T.atas]<<" masuk ke stack";
    }

else if(penuh()==0)
{   T.atas++;
    T.data[T.atas]=data;
    cout<<"\nData "<<T.data[T.atas]<<" masuk ke stack";}

else
    cout<<"Tumpukan penuh";
}

void pop(){
    if(kosong()==0){
        cout<<"\nData teratas sudah terambil";
        T.atas--;
    }
    else
        cout<<"Data kosong";
}
void tampil(){
if(kosong()==0)
   {for(int i=T.atas;i>=0;i--)
    {cout<<"\nTumpukan ke "<<i<<"="<<T.data[i];}
   }
   else
   cout<<"\nTumpukan kosong";
}


int main()
{

    awal;
    tampil();
    push(10);
    tampil();
    push(20);
    //push(30);
    //push (40);
    //push (50);
    tampil ();
    return 0;

}

