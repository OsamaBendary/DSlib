#include<iostream>
#include"DS.cpp"
using namespace std;

int main(){
    linkedlist l1;
    l1.insertatbeginning("1");
    l1.insertatbeginning("2");
    l1.insertatbeginning("3");
    l1.insertatbeginning("4");
    l1.insertatbeginning("5");
    l1.insertatend("6");
    l1.insertatposition("0",2);
    l1.deleteatposition(2);
    l1.deleteatposition(1);
    l1.display();
    l1.reverse();
    l1.display();
    l1.search("3");
    l1.search("10");
    l1.deletelast();
    l1.display();
    stack s1;
    s1.push("1");
    s1.push("2");
    s1.push("3");
    s1.pop();
    s1.display();

    queue q1;
    q1.enqueue("1");
    q1.enqueue("2");
    q1.enqueue("3");
    q1.dequeue();
    q1.display();

    tree t1;
    t1.insert("5");
    t1.insert("3");
    t1.insert("7");
    t1.insert("2");
    t1.insert("4");
    t1.insert("6");
    t1.insert("8");
    t1.search("3");
    t1.display();
    return 0;
}