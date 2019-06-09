#include <iostream>
#include <stdio.h>

using namespace std;

//structure to create a node with data and next pointer to store address of next node
struct node{
    int data;
    node *next;
};

class list{
private:
    node *head, *tail;
public:
    //constructor to point head and tail to NULL instead of garbage values
    list(){
        head = NULL;
        tail = NULL;
    }
    //create node, head points to start of linked list and tail points to end node.
    void createnode(int value){
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        if (head == NULL){
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }

    //loop through list to print all nodes
    void display(){
        node *temp = new node;
        temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"\n";
            temp = temp->next;
        }
    }

    //insert at head node
    void insert_start(int value){
        node *temp = new node;
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    //insert at tail node
    void insert_end(int value){
        node *temp = new node;
        temp->data = value;
        temp->next = tail;
        tail = temp;
    }

    //insert at a position in linked list
    void insert_position(int value, int pos){
        node *temp = new node;
        node *pre = new node;
        node *cur = new node;
        cur = head;
        temp->data = value;
        for(int i=0; i<pos; i++){
            pre = cur;
            cur = cur->next;
        }
        pre->next = temp;
        temp->next = cur;
    }

    //delete first node
    void delete_first(){
        node *temp = new node;
        temp = head;
        head = head->next;
        delete temp;
    }

    //delete last node
    void delete_end(){
        node *pre = new node;
        node *cur = new node;
        cur = head;
        while(cur->next!=NULL){
            pre = cur;
            cur = cur->next;
        }
        tail = pre;
        pre->next = NULL;
        delete cur;
    }

    //delete at a particular position
    void delete_position(int pos){
        node *pre = new node;
        node *cur = new node;
        cur = head;
        for(int i = 0; i < pos; i++){
            pre = cur;
            cur = cur->next;
        }
        pre->next = cur->next;
        delete cur;
    }

};


int main(){

    int *data = new int; int len;
    list obj;

    cout << "Enter the length" << endl;
    cin >> len;
    cout << "Enter the numbers: ";
    for (int i = 0; i < len; i++){
        cin >> data[i];
        obj.createnode(data[i]);
    }
    obj.display();
    obj.delete_first();
    obj.delete_position(2);
    cout<<"\n";
    obj.display();

    return 0;
}
