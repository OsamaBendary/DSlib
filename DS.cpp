#include<iostream>
using namespace std;

class node{
    public:
    string data;
    node* next;
    node(string d){
        data = d;
        next = NULL;
    }
};

class linkedlist{
    node* head = NULL;

    bool is_empty(){
        return head == NULL;
    }

    void insertatbeginning(string value){
        if(is_empty()){
            node* newnode = new node(value);
            head = newnode ;
            newnode->next = NULL;
        }
        else{
            node* newnode = new node(value);
            newnode -> next = head;
            head = newnode;
        }
    }
    
    void insertatend(string value){
        if(is_empty()){
            node* newnode = new node(value);
            head = newnode ;
            newnode->next = NULL;
        }
        else{
            node* temp;
            temp = head;
            while(temp){
                temp = temp->next;
            }
            node* newnode = new node(value);
            newnode->next = NULL;
            temp->next = newnode;
        }
    }
    
    void insertatposition(string value,int position){
      if (position < 1) {
        cout << "Position must be greater than 0." << endl;
        return;
    }

    node* newnode = new node(value);
     if (is_empty()) {
        if (position == 1) {
            head = newnode;
            newnode->next = NULL;
        } else {
            cout << "Invalid position. List is empty." << endl;
            delete newnode; // Avoid memory leak
        }
        return;
    }
    else if(position == 1){
    newnode -> next = head;
    head = newnode;
    }
    else{
        node* temp;
        temp = head;
        for(int i = 1; i < position -1; i++){
            if(temp->next == NULL){
                break;
            }
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        
    }
    }

    void deletefirst(){
        
        if(is_empty()){
            cout << "list is empty!";
            return;
        }
        else{
        node* temp = head;
        head = head->next;
        delete temp;
    }
    }

    void deletelast(){
        if(is_empty()){
            cout << "list is empty!";
            return;
        }
        else{
            node* temp = head;
            while(temp != NULL){
                temp = temp->next->next;
            }
            delete temp->next;
            temp->next = NULL;
        } 
    }

    void deleteatposition(int position){
    if (position < 1) {
        cout << "Position must be greater than 0." << endl;
        return;
    }

    if(position==1){
        if(is_empty()){
            cout << "list is empty!";
            return;
        }
        deletefirst();
    }
    else{
        if(is_empty()){
            cout << "list is empty!";
            return;
        }
        node* temp = head;
        for(int i =1; i< position -1; i++){
            temp = temp->next->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    }

    void display(){
        node* temp = head;
        while(temp){
            cout << temp->data << " -> " ;
            temp = temp->next;
        }
        cout << "end";
    }
    
};

