#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
      int data;
      Node* next;
    Node(int data){
      this->data=data;
      next=nullptr;
    }
};
class LinkedList{
        private:
          Node *head;
        public:
        LinkedList(){
          head = nullptr;
        }
      void pushback(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
          head = newNode;
        }
        else{
          Node *temp = head;
          while (temp->next == nullptr)
          {
            temp = temp->next;
          }
          temp->next = newNode;
        }
      }
};
int main(){
    LinkedList list;
    list.pushback(10);
  return 0;
}