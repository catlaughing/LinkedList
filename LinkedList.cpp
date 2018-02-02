#include <iostream>
#include "LinkedList.h"

using namespace std;

//lihat dulu struck node di file .h nya

node* findelm(node* head, int x)
{
    node* temp = head;
    while (temp != NULL && temp->angka != x)
        temp = temp->next;
    return temp;
}

node* insertbegin(node* head,int x) //insert di awal
{
    //Membuat variable node temporary
    node *temp = new node;
    /**
    Memasukkan data dan pointer ke temporary
    karena kita ingin memasukkan angka tersebut di awal
    kita hanya perlu membuat node temp ini 'menunjuk' ke node yang ditunjuk
    oleh variable 'head' setelah itu membuat 'head' menunjuk ke node temp
    **/
    temp->angka = x;
    temp->next = head; //ini yang dsebut dengan menunjuk ke node yang ditunjuk oleh head
    head  = temp; // dan membuat head menunjuk ke node temp
    return head; // return head yang telah berubah

}

void Print(node* head) // Prosedur buat print
{
    while (head != NULL)
    {
        cout<<head->angka<<" ";
        head = head->next;
    }
}


node *insertafter(node* head,int x) //Fungsi insert di belakang salah satu angka
{
    int index;
    node* temp = new node;
    temp->angka = x; // masukkan data ke temporary node
    temp->next = NULL; // *penting harus didefinisikan kare itu biar saja temporary node ini menunjuk ketiadaan
    Print(head);
    cout<<endl;
    cout<<"Masukkan di belakang angka: "; // meminta user memasukkan index
    cin>>index;
    node *temp2 = findelm(head,index);
    temp->next = temp2->next;
    temp2->next = temp;
    return head; // kembalikan head sebagai awal dari list yang telah diubah
}


node* insertlast(node* head, int x) // insert sebagai elemen terakhir
{
    node *temp = new node; // seperti biasa buat 1 node temporary
    node *point = head;// sekarang kita hanya perlu jari telunjuk kanan
    temp->angka = x;// masukkan data
    temp->next = NULL;//biarkan temp menunjuk ke NULL
    if (head == NULL)// jika list masih kosong
    {
        head = temp; //kita nya perlu membuat head menunjuk ke node temp
    }
    else // jika tidak
    {
        while(point->next != NULL)// jika setelah jari kita telah menunjuk node yang terakhir
            point = point->next; // pindahkan jari telunjuk
        point->next = temp; // kita hanya perlu membuat node yang kita tunjuk untum menunjuk ke node temp
    }
    return head;
}
