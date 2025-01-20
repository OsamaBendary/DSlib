#include <iostream>
using namespace std;

class node {
    public:
    string data;
    node* next;
    node(string d) {
        data = d;
        next = NULL;
    }
};

class linkedlist {
    public:
    node* head = NULL;

    bool is_empty() {
        return head == NULL;
    }

    void insertatbeginning(string value) {
        if (is_empty()) {
            node* newnode = new node(value);
            head = newnode;
            newnode->next = NULL;
        } else {
            node* newnode = new node(value);
            newnode->next = head;
            head = newnode;
        }
    }

    void insertatend(string value) {
        node* newnode = new node(value);
        if (is_empty()) {
            head = newnode;
        } else {
            node* temp;
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            newnode->next = NULL;
            temp->next = newnode;
        }
    }

    void insertatposition(string value, int position) {
        if (position < 1) {
            return;
        }

        node* newnode = new node(value);
        if (is_empty()) {
            if (position == 1) {
                head = newnode;
                newnode->next = NULL;
            } else {
                delete newnode;
            }
            return;
        } else if (position == 1) {
            newnode->next = head;
            head = newnode;
        } else {
            node* temp;
            temp = head;
            for (int i = 1; i < position - 1; i++) {
                if (temp->next == NULL) {
                    break;
                }
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }

    void deletefirst() {
        if (is_empty()) {
            return;
        } else {
            node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void deletelast() {
        if (is_empty()) {
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    void deleteatposition(int position) {
        if (position < 1) {
            return;
        }

        if (position == 1) {
            deletefirst();
            return;
        }

        if (is_empty()) {
            return;
        }

        node* temp = head;
        for (int i = 1; i < position - 1; i++) {
            if (temp->next == NULL) {
                return;
            }
            temp = temp->next;
        }

        if (temp->next == NULL) {
            return;
        }

        node* to_delete = temp->next;
        temp->next = temp->next->next;
        delete to_delete;
    }

    void display() {
        if (is_empty()) {
            return;
        }
        node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "end";
    }
};
