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
    Node* deleteFromFront(Node* head){
        if(head == nullptr) return head;
        auto temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        return head;
    }
    Node* deleteFromEnd(Node* head){
        if(head == nullptr)return head;
        if(head->next == nullptr){
            delete head;
            return nullptr;
        }
        auto it = head;
        Node* itPrev = nullptr;
        while(it->next != nullptr){
            itPrev = it;
            it = it->next;
        }
        itPrev->next = nullptr;
        delete it;
        return head;
    }
    Node* deleteAtPosition(Node* head, int pos){
        if(head == nullptr) return head;
        auto it = head;
        Node* itPrev = nullptr;
        if(pos == 1){
            auto temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
            return head;
        }
        int position = 1;
        while(position < pos && it != nullptr){
            position++;
            itPrev = it;
            it = it->next;
        }
        itPrev->next = it->next;
        it->next = nullptr;
        delete it;
        return head;
    }
    Node* deleteByValue(Node* head, int key){
        if(head == nullptr)return head;
        if(head->next == nullptr && head->data == key){
            delete head;
            return nullptr;
        }
        if(head->next == nullptr && head -> data != key){
            return head;
        }
        if(head->data == key){
            auto temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
            return head;
        }
        auto it = head;
        Node* itPrev = nullptr;
        while(it->data != key && it != nullptr){
            itPrev = it;
            it = it->next;
        }
        if(it->data == key){
            itPrev ->next = it->next;
            it->next = nullptr;
            delete it;
        }
        return head;
    }
};

int main(){
    LinkedList l;
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = l.makeLinkedList(arr);
    l.iterateLinkedList(head);
    head = l.deleteByValue(head, 2);
    l.iterateLinkedList(head);

    return 0;
}