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
      void popback(){
        if(head == nullptr){
          cout<<"Nothing to delete\n";
          return;
        }
        else if(head->next==nullptr){
          delete head;
          head = nullptr;
          return;
        }
        Node *temp = head;
        while (temp->next->next!= nullptr)
        {
          temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        
      }
};
int main(){
    LinkedList list;
    list.pushback(10);
    list.pushback(15);
    list.pushback(20);
    // list.display();
    list.popback();
  return 0;
}