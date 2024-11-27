#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int datum){
        data = datum;
        next = nullptr;
    }
};

class LinkedList{
    public:
    Node* makeLinkedList(vector<int> arr){
        Node* head = new Node(arr[0]);
        Node* it = head;
        for(int i = 1; i < arr.size(); i++){
            it->next = new Node(arr[i]);
            it = it->next;
        }
        return head;
    }
    void iterateLinkedList(Node* head){
        auto it = head;
        while(it != nullptr){
            cout<<it->data<<"\t";
            it = it->next;
        }
        cout<<"\n";
    }
    Node* insertAtFront(Node* head, int data){
        if(head == nullptr){
            auto temp = new Node(data);
            return temp;
        }
        auto temp = new Node(data);
        temp -> next = head;
        head = temp;
        return head;
    }
    Node* insertAtLast(Node* head, int data){
        if(head == nullptr){
            auto temp = new Node(data);
            return temp;
        }
        auto it = head;
        while(it ->next != nullptr){
            it = it -> next;
        }
        auto temp = new Node(data);
        it->next = temp;
        return head;
    }
    Node* insertAtPos(Node* head, int data, int pos){
        if(head == nullptr){
            auto temp = new Node(data);
            return temp;
        }
        if(pos == 1){
            auto temp = new Node(data);
            temp -> next = head;
            head = temp;
            return head;
        }
        auto it = head;
        Node* itPrev = nullptr;
        int position = 1;
        while(position < pos && it != nullptr){
            position++;
            itPrev = it;
            it = it->next;
        }
        auto temp = new Node(data);
        itPrev->next = temp;
        temp->next = it;
        return head;
    }
    Node* insertBeforeValue(Node* head, int data, int value){
        if(head == nullptr){
            auto temp = new Node(data);
            return temp;
        }
        if(head ->data == value){
            auto temp = new Node(data);
            temp -> next = head;
            head = temp;
            return head;
        }
        auto it = head;
        Node* itPrev = head->next;
        while(it->data != value && it != nullptr){
            itPrev = it;
            it = it->next;
        }
        if(it->data == value){
            auto temp = new Node(data);
            temp -> next = itPrev->next;
            itPrev->next = temp;
        }
        return head;
    }
};

int main(){
    LinkedList l;
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = l.makeLinkedList(arr);
    l.iterateLinkedList(head);
    head = l.insertAtFront(head, 11);
    l.iterateLinkedList(head);
    head = l.insertAtLast(head, 11);
    l.iterateLinkedList(head);
    head = l.insertAtPos(head, 111, 1);
    l.iterateLinkedList(head);
    head = l.insertBeforeValue(head, 666, 111);
    l.iterateLinkedList(head);


    return 0;
}