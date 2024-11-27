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
    Node* makeLinkedListFromArray(vector<int> arr){
        Node* head = new Node(arr[0]);
        Node* it = head;
        for(int i = 1; i < arr.size(); i++){
            auto temp = new Node(arr[i]);
            it->next = temp;
            it = it->next;
        }
        return head;
    }
    void traverseLinkedList(Node* head){
        auto it = head;
        while(it != nullptr){
            cout<<it->data<<"\t";
            it = it->next;
        }
        cout<<"\n";
    }
    int LinkedListLenght(Node* head){
        int len = 0;
        auto it = head;
        while(it != nullptr){
            len++;
            it = it->next;
        }
        return len;
    }
};

int main(){
    LinkedList ll;
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = ll.makeLinkedListFromArray(arr);
    ll.traverseLinkedList(head);
    cout<<"\n"<<ll.LinkedListLenght(head);
    
    return 0;
}