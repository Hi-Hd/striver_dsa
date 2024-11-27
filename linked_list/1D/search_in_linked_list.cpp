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
    bool searchLinkedList(Node* head, int key){
        auto it = head;
        while(it != nullptr){
            if(it->data == key) return true;
            it = it-> next;
        }
        return false;
    }
};

int main(){
    LinkedList l;
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = l.makeLinkedList(arr);
    l.iterateLinkedList(head);
    cout<<"\n\n\n";
    cout<<l.searchLinkedList(head, 1);

    return 0;
}