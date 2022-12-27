#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class CStudent{
private:
    string name;
public:
    CStudent(string nm){
        name = nm;
    }
    string getName();
};

class Node{
private:
    void* data;
    Node* next_node;
public:

    void* get_data();
    void set_data(void* data);
    Node* det_next_node(Node* next);
    Node* get_next_node();
};

int main(){
    CStudent c1("Jason");
    CStudent c2("Jake");
    CStudent c3("Gio");
    CStudent c4("Lucas");
    Node* head = new Node;

    Node* n1 = new Node;
    n1->set_data(&c1);


    Node* n2 = new Node;
    n2->set_data(&c2);
    Node* n3 = new Node;
    n3->set_data(&c3);
    Node* n4 = new Node;
    n4->set_data(&c4);


    n1->det_next_node(n2);
    n2->det_next_node(n3);
    n3->det_next_node(n4);
    n4->det_next_node(nullptr);

    head = n1;
    Node* temp_node = head;

    while(temp_node != nullptr){
        CStudent* sptr = (CStudent*)temp_node->get_data();
        cout << sptr->getName() << endl;
        temp_node = temp_node->get_next_node();
    }





    return 0;
}

string CStudent:: getName(){
    return name;
}

void* Node:: get_data(){
    return data;
}

Node* Node:: det_next_node(Node* next){
    next_node = next;
}

void Node:: set_data(void* dta){
    data = dta;
}

Node* Node:: get_next_node(){
    return next_node;
}
