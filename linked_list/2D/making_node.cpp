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

};

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    DLL dl;
    Node* head = dl.makeDoublyLinkedList(arr);
    dl.iterateLinkedList(head);

    return 0;
}