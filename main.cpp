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
    return 0;
}