#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

/**
Shadieq
IF-41-08
1301171087
**/


struct node // buat sebuah struct bernama node untuk menyimpan 1 angka dan alamat ke node berikutnya
{
    int angka;
    node *next;
};

node* findx(node* head, int x);
node* insertbegin(node* head, int x);
node* insertafter(node* head, int x);
void Print(node* head);
node* insertlast(node* head, int x);



#endif // LINKEDLIST_H_INCLUDED
