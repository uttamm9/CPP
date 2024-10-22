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
          while (temp->next 
          != nullptr)
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
      void display(){
        Node* temp = head;
        while(temp!=nullptr){
          cout<<temp->data<<" -> ";
          temp = temp->next;
        }
        cout<<"NULL"<<endl;
      }

      void popfront(int val){
              Node *newnode = new Node(val);
              if(head == nullptr){
                head = newnode;
              }
              else{
                newnode->next = head;
                head = newnode;
              }
      }
      int length(){
        int count = 0;
        Node *temp = head;
        while(temp!=nullptr)
        {
          count++;
          temp = temp->next;
        }
        return count;
        
      }
       void insert(int val,int pos){
        if(pos>length()){
          cout<<"Invalid position\n";
          return;
        }
        Node *temp = head;
        while ((pos--))
        {
          temp = temp->next;
        }
        Node *newnode = new Node(val);
        newnode->next = temp->next;
        temp->next = newnode;        
       }

       bool find(int val){
        if(head==nullptr){
          return false;
        }
        else{
          Node *temp = head;
          while(temp!=nullptr){
            if(temp->data == val){
              return true;
            }
            temp = temp->next;
          }
          return false;
        }
       }

       void reverse(){
        Node *prev = nullptr, *current = head, *next = nullptr;
          while(current!=nullptr){
            next = current->next; //store next node
            current->next = prev; // reverse the link
            prev = current; // move prev to one step forward
            current = next;  //move current one step forward
          }
          head = prev; // update head to last node (new node)
       }
};
int main(){
    LinkedList list;
    list.pushback(10);
    list.pushback(15);
    list.pushback(20);
    list.display();
    list.popback();
    list.popfront(44);
    list.display();
    cout<<list.length()<<endl;
    list.insert(77,2); //77 is value ans 2 is index no(2+1).
    list.display();
    cout<<list.find(10)<<"\n";
    list.reverse();
    list.display();
  return 0;
}