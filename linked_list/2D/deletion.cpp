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
    Node* deleteHead(Node* head){
        if(head == nullptr)return head;
        head = head->next;
        auto temp = head->prev;
        temp->next = nullptr;
        head->prev = nullptr;
        delete temp;
        return head;
    }
    Node* deleteTail(Node* head){
        if(head == nullptr) return head;
        auto it = head;
        while(it->next->next != nullptr){
            it = it->next;
        }
        it->next->prev = nullptr;
        delete(it->next);
        it->next = nullptr;
        return head;
    }
    Node* deleteAtPos(Node* head, int pos){
        if(head == nullptr) return head;
        if(pos == 1){
            head = head->next;
            auto temp = head->prev;
            temp->next = nullptr;
            head->prev = nullptr;
            delete temp;
            return head;
        }

        auto it = head;
        int position = 1;
        while(position < pos && it != nullptr){
            it = it->next;
            position++;
        }
        if(it->next != nullptr && it != nullptr){
            it->prev->next = it->next;
            it->next->prev = it->prev;
            it->next = nullptr;
            it->prev = nullptr;
            delete it;
            return head;
        }
        else if(it->next == nullptr){
            it->prev->next = nullptr;
            delete it;
            return head;
        }else{
            return head;
        }
    }
    Node* deleteValue(Node* head, int value){
        if(head == nullptr)return head;
        if(head->data == value && head->next == nullptr){
            delete head;
            return nullptr;
        }
        if(head->data == value && head-> next != nullptr){
            head = head->next;
            auto temp = head->prev;
            temp->next = nullptr;
            head->prev = nullptr;
            delete temp;
            return head;
        }
        auto it = head;
        while(it->data != value && it != nullptr){
            it = it->next;
        }
        if(it->data == value && it->next != nullptr){
            it->prev->next = it->next;
            it->next->prev = it->prev;
            delete it;
        }else if(it->next == nullptr){
            it->prev->next = nullptr;
            delete it;
        }
        return head;
    }

};

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    DLL dl;
    Node* head = dl.makeDoublyLinkedList(arr);
    dl.iterateLinkedList(head);
    head = dl.deleteHead(head);
    dl.iterateLinkedList(head);
    head = dl.deleteTail(head);
    dl.iterateLinkedList(head);
    head = dl.deleteAtPos(head, 1);
    dl.iterateLinkedList(head);
    head = dl.deleteValue(head, 5);
    dl.iterateLinkedList(head);
    // head = dl.deleteValue(head, 4);
    // dl.iterateLinkedList(head);

    return 0;
}