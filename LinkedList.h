#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

struct node // buat sebuah struct bernama node untuk menyimpan 1 angka dan alamat ke node berikutnya
{
    int angka;
    node *next;
};

node* insertbegin(node* head, int x);
node* insertindex(node* head, int x);
void Print(node* head);
node* insertlast(node* head, int x);



#endif // LINKEDLIST_H_INCLUDED
