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
    bool search(string value) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            cout << value << " found" << endl;
            return true;
        }
        temp = temp->next;
    }
    cout << value << " not found" << endl;
    return false;
}
void reverse() {
    if (is_empty()) {
        return;
    }

    node* prev = NULL;
    node* current = head;
    node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
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
        cout << "end" << endl;
    }
};

class stack : public linkedlist {
    public:
    node* top = NULL;

    void push(string value) {
        insertatbeginning(value);
    }

    void pop() {
        deletefirst();
    }

    void display() {
        linkedlist::display();
    }
};

class queue : public linkedlist {
    public:
    node* front = NULL;
    node* rear = NULL;

    void enqueue(string value) {
        insertatend(value);
    }

    void dequeue() {
        deletefirst();
    }

    void display() {
        linkedlist::display();
    }
};

class nodet {
    public:
    string data;
    nodet* left;
    nodet* right;
    nodet(string d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class tree {
    public:
    nodet* root = NULL;

    void insert(string value) {
        if (root == NULL) {
            root = new nodet(value);
        } else {
            nodet* temp = root;
            while (temp) {
                if (value < temp->data) {
                    if (temp->left == NULL) {
                        temp->left = new nodet(value);
                        break;
                    } else {
                        temp = temp->left;
                    }
                } else {
                    if (temp->right == NULL) {
                        temp->right = new nodet(value);
                        break;
                    } else {
                        temp = temp->right;
                    }
                }
            }
        }
    }

    void inorder(nodet* temp) {
        if (temp == NULL) {
            return;
        }
        inorder(temp->left);
        cout << temp->data << " ";
        inorder(temp->right);
    }

    void preorder(nodet* temp) {
        if (temp == NULL) {
            return;
        }
        cout << temp->data << " ";
        preorder(temp->left);
        preorder(temp->right);
    }

    void postorder(nodet* temp) {
        if (temp == NULL) {
            return;
        }
        postorder(temp->left);
        postorder(temp->right);
        cout << temp->data << " ";
    }
    
bool search(nodet* temp, string value) {
    if (temp == NULL) {
        cout << value << " not found" << endl;
        return false;
    }
    if (temp->data == value) {
        cout << value << " found" << endl;
        return true;
    }
    if (value < temp->data) {
        return search(temp->left, value);
    } else {
        return search(temp->right, value);
    }
}

bool search(string value) {
    return search(root, value);
}

    void display() {
        cout << "Inorder: ";
        inorder(root);
        cout << endl;
        cout << "Preorder: ";
        preorder(root);
        cout << endl;
        cout << "Postorder: ";
        postorder(root);
        cout << endl;
    }
};

