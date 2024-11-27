#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int datum){
        data = datum;
        next = nullptr;
        prev = nullptr;
    }
};

class DLL{
    public:
    Node* makeDoublyLinkedList(vector<int> arr){
        Node* head = new Node(arr[0]);
        auto it = head;
        for(int i = 1; i < arr.size(); i++){
            it->next = new Node(arr[i]);
            it->next->prev = it;
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
    Node* insertHead(Node* head, int data){
        if(head == nullptr)return head;
        auto temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
        return head;
    }
    Node* insertTail(Node* head, int data){
        if(head == nullptr)return head;
        auto it = head;
        while(it -> next != nullptr){
            it = it->next;
        }
        auto temp = new Node(data);
        it->next = temp;
        temp->prev = it;
        return head;
    }
    Node* insertAtPos(Node* head, int data, int pos){
        if(head == nullptr) return head;
        if(pos == 1){
            auto temp = new Node(data);
            temp->next = head;
            head->prev = temp;
            head = temp;
            return head;
        }
        int position = 1;
        auto it = head;
        while(position < pos && it != nullptr){
            it = it->next;
            position++;
        }
        if(it->next != nullptr){
            auto temp = new Node(data);
            temp->prev = it->prev;
            temp->next = it;
            it->prev->next = temp;
            it->prev = temp;
            return head;
        }
        if(it->next == nullptr){
            auto temp = new Node(data);
            temp->prev = it;
            it->next = temp;
            return head;
        }
        return head;
    }
    Node* insertAfterValue(Node* head, int data, int value){
        if(head == nullptr){
            return head;
        }
        else if(head->data == value && head->next == nullptr){
            auto temp = new Node(data);
            head->next = temp;
            temp->prev = head;
            return head;
        }else if(head->data == value){
            auto temp = new Node(data);
            temp->prev = head;
            temp->next = head->next;
            head->next->prev = temp;
            head->next = temp;
            return head;
        }
        auto it = head;
        while(it ->data != value && it != nullptr){
            it = it->next;
        }
        if(it->data == value && it->next != nullptr){
            auto temp = new Node(data);
            temp->prev = it;
            temp->next = it->next;
            it->next = temp;
            temp->next->prev = temp;
            return head;
        }
        if(it->data == value && it->next == nullptr){
            auto temp = new Node(data);
            temp->prev = it;
            it->next = temp;
            return head;
        }
        return head;
    }
};

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    DLL dl;
    Node* head = dl.makeDoublyLinkedList(arr);
    dl.iterateLinkedList(head);
    head = dl.insertHead(head, 11);
    dl.iterateLinkedList(head);
    head = dl.insertTail(head, 11);
    dl.iterateLinkedList(head);
    head = dl.insertAtPos(head, 111, 8);
    dl.iterateLinkedList(head);
    head = dl.insertAfterValue(head, 666, 11);
    dl.iterateLinkedList(head);

    return 0;
}