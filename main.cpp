#include <iostream>
#include "LinkedList.h"

/**
Shadieq
IF-41-08
1301171087
**/

using namespace std;

int number;
int menu;

node* h = NULL;
node* temp = h;

int main()
{
    while (true)
    {
        cin.ignore();
        cout<<"~Menu~"<<endl
        <<"1. Insert di Depan"<<endl
        <<"2. Insert di index ke-"<<endl
        <<"3. Insert di Belakang"<<endl
        <<"5. Mencari angka"<<endl
        <<"4. Berhenti"<<endl
        <<"Pilih: ";
        cin>>menu;

        if (menu == 4)
        {
            cout<<endl;
            cout<<"Terima kasih~~"<<endl;
            return 0;
        }

        cout<<"Masukkan angka untuk di insert ke dalam list: ";
        cin>>number;
        cout<<endl;

        if (menu == 1)
        {
            h = insertbegin(h, number);
            cout<<"List saat ini: ";
            Print(h);
            cout<<endl;
            cin.get();
        }
        else if (menu == 2)
        {
            h = insertafter(h, number);
            cout<<"List saat ini: ";
            Print(h);
            cout<<endl;
            cin.get();
        }
        else if (menu == 3)
        {
            h = insertlast(h, number);
            cout<<"List saat ini: ";
            Print(h);
            cout<<endl;
            cin.get();
        }
        else
        {
            cout<<"Maaf index tersebut tidak ada dalam menu"<<endl;
            cin.get();
        }
    }
    ;
}
