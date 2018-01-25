#include <iostream>
#include "LinkedList.h"

using namespace std;

//lihat dulu struck node di file .h nya

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


node *insertindex(node* head,int x) //Fungsi insert di index ke-
{
    int index; // index yang ingin diganti
    int i = 0; // untuk mengiterasi
    node* point = head; // buat variable sebagai jari penunjuk di tangan kanan
    node* prev = new node; // buat 1 lagi jari penunjuk di tangan kiri untuk mengingat node sebelum point
    node* temp = new node;// seperti biasa buat sebuah temporary node
    cout<<"Masukkan index: "; // meminta user memasukkan index
    cin>>index;
    temp->angka = x; // masukkan data ke temporary node
    temp->next = NULL; // *penting harus didefinisikan kare itu biar saja temporary node ini menunjuk ketiadaan

    if (index == 1) // jika user memasukkan index pertama berarti kita hanya perlu memanggil fungi diatas
    {
        return insertbegin(head, x);
    }
    else // jika tidak
    {
        do //looping selama pointer masih menunjuk ke sesuatu dan bukan NULL
        {
            if (i == index-1) // jika kita telah sampai ke index tujuan
            {
                temp->next = point; // kita hanya perlu membuat temp menunjuk ke node di index tersebut
                prev->next = temp; // dan membuat index sebelumnya menunjuk ke temp
            }
            prev = point; //buat jari kiri menunjuk ke node yang sama dengan jari kanan
            i++;// iterasi i
            point = point->next; // pindahkan jari kanan 1 node di depan jari kiri

        }while (point->next != NULL);
    }
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
        while (true)
        {
            if (point->next == NULL)// jika setelah jari kita telah menunjuk node yang terakhir
            {
                point->next = temp; // kita hanya perlu membuat node yang kita tunjuk untum menunjuk ke node temp
                break;// menghentika loop
            }
            point = point->next; // pindahkan jari telunjuk
        }
    }
    return head;
}
