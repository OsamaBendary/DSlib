#ifndef DS_H
#define DS_H

#include <iostream>
using namespace std;

class node {
    public:
    string data;
    node* next;
    node(string d);
};

class linkedlist {
    public:
    node* head;
    linkedlist();
    bool is_empty();
    void insertatbeginning(string value);
    void insertatend(string value);
    void insertatposition(string value, int position);
    void deletefirst();
    void deletelast();
    void deleteatposition(int position);
    bool search(string value);
    void reverse();
    void display();
};

class stack : public linkedlist {
    public:
    node* top;
    void push(string value);
    void pop();
    void display();
};

class queue : public linkedlist {
    public:
    node* front;
    node* rear;
    void enqueue(string value);
    void dequeue();
    void display();
};

class nodet {
    public:
    string data;
    nodet* left;
    nodet* right;
    nodet(string d);
};

class tree {
    public:
    nodet* root;
    tree();
    void insert(string value);
    void inorder(nodet* temp);
    void preorder(nodet* temp);
    void postorder(nodet* temp);
    bool search(nodet* temp, string value);
    bool search(string value);
    void display();
};

#endif