// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
       
       //constructor
//     node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };
// int main(){
//     node* n = new node(10);
//     cout<<n -> data<<endl;
//     cout<<n -> next<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Node{
//      public:
//      int data;
//      Node* next;

//      //constructor
//      Node(int data){
//         this->data = data;
//         this->next = NULL;
//      }
// };
// void InsertAtHead(Node* &head,int data){
//     Node* temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }
// void print(Node* &head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }cout<<endl;
// }
// int main(){
//     Node* n1 = new Node(10);

//     //head pointed to node1
//     Node* head = n1;
//     print(head);
//     InsertAtHead(head,15);
//     print(head);
//     InsertAtHead(head,20);
//     print(head);

// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//          this->data = data;
//          this->next = NULL;
//     }
// };
// void insertAtHead(Node* &head, int data){
//     Node* temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }
// void print(Node* &head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }cout<<endl;
// }

// int main(){
//     Node* node1 = new Node(10);
//     Node* head = node1;
//     print(head);
//     insertAtHead(head,13);
//     print(head);
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data=data;
//         this->next = NULL;
//     }
// };
// void insertAtTail(Node* &tail,int data){
//     Node* temp = new Node(data);
//     tail->next = temp;
//     tail = temp;
// }
// void print(Node* &tail){
//     Node* temp = tail;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }cout<<endl;
// }
// int main(){
//     Node* node1 = new Node(10);
//     Node* tail = node1;
//     print(tail);
//     insertAtTail(tail,12);
//     print(tail);
//     insertAtTail(tail,15);
//     print(tail);
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void insertAtTail(Node* &tail,int data){       
//     //creating new node
//     Node* temp = new Node(data);
//     tail->next = temp;
//     tail = temp;
// }
// void print(Node* tail){
//     Node* temp = tail;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }cout<<endl;
// }
// int main(){
//     Node* node1 = new Node(10);
//     Node* tail = node1;
//     print(tail);
//     insertAtTail(tail,12);
//     print(tail);
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* previous;
//     Node(int d){
//         this->data = d;
//         this->next = NULL;
//         this->previous = NULL;
//     }
// };
// void insertAtHead(Node* &head,Node* &tail,int data){
//     //empty list
//     if(head == NULL){
//         Node* temp = new Node(data);
//         head = temp;
//         tail = head;
//     }
//     Node* temp = new Node(data);
//     temp->next = head;
//     head->previous = temp;
//     head = temp;
// }
// void insertAtTail(Node* &tail,Node* &head,int data){
//     //empty tail
//     if(tail == NULL){
//         Node* temp = new Node(data);
//         tail = temp;
//         head = temp;
//     }
//     Node* temp = new Node(data);
//     tail->next = temp;
//     temp-> previous = tail;
//     temp = tail;
// }
// void insertAtAnyPosition(Node* &tail,Node* &head,int data,int key){
//     if(key == 1){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     Node* temp = head;
//     int cnt = 1;
//     if(cnt<key-1){
//         temp = temp->next;
//         cnt++;
//     }
//     if(temp->next == NULL){
//         insertAtTail(tail,head,data);
//         return;
//     }
//     Node* nodeToinsert = new Node(data);
//     nodeToinsert->next = temp->next;
//     temp->next->previous = nodeToinsert;
//     temp->next = nodeToinsert;
//     nodeToinsert->previous = temp;
// }
// void print(Node* &head,Node* &tail){
//     Node* temp = head;
    
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<" head "<<head->data<<endl;
//     cout<<" tail "<<tail->data<<endl;
//     cout<<endl;
// }
// int sizeofLinkedList(Node* &head){
//     int count = 0;
//     Node* temp = head;
//     while(temp!=NULL){
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// int main(){
//     // Node* node1 = new Node(NULL);
//     Node* head = NULL;
//     Node* tail = NULL;
//     // print(head);
//     // cout<<sizeofLinkedList(head);
//     insertAtHead(head,tail,12);
//     print(head,tail);
//     insertAtTail(tail,head,133);
//     print(head,tail);
//     insertAtAnyPosition(tail,head,199,2);
//     print(head,tail);
//     insertAtAnyPosition(tail,head,13,1);
//     print(head,tail);
// }

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free with node at data: "<<value<<endl;
    }
};
void insertAtNode(Node* &tail,int data,int element){
    //empty list
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp->next = tail;
    }
    
    else{
        //non empty list
        //assuming that element is present in the list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        //after finding the element 
        Node* newNode = new Node(data);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}
void deleteNode(Node* &tail,int value){
    //empty list
    if(tail == NULL){
        cout<<"empty list"<<endl;
    }
    else{
        //delete at any pos
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data!= value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        //for 1 node
        if(prev = curr){
            tail = NULL;
        }

        //>=2 node
        else if(tail = curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
bool isCircular(Node* head){
    //empty list
    if(head==NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){return true;}
    return false;
}
void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"empty list"<<endl;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
    cout<<endl;
}

int main(){
    Node* tail = NULL;
    insertAtNode(tail,12,5);
    print(tail);
    
    /*insertAtNode(tail,3,12);
    print(tail);
     insertAtNode(tail,7,3);
    print(tail);
     insertAtNode(tail,8,12);
    print(tail);
     insertAtNode(tail,9,8);
    print(tail); 
    insertAtNode(tail,3,12);
    print(tail);
    deleteNode(tail,12);
    print(tail);*/
    // deleteNode(tail,12);
    // print(tail);

    if(isCircular(tail)){
        cout<<"Circular linked list"<<endl;
    }
    else{
        cout<<"Linked list is not circular"<<endl;
    }
}


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     // Node* prev;
//     Node* next;
//     Node(int d){
//         this->data = data;
//         // this->prev = NULL;
//         this->next = NULL;
//     }  
// };
// void insertAtNode(Node* &tail,int data, int element){
//     //if tail is empty
//     if(tail == NULL){
//         Node* newNode = new Node(data);
//         tail = newNode;
//         newNode->next = tail;
//     }
//     else{
//         //if it is non empty
//         Node* curr = tail;
//         if(curr->data!=element){
//             curr = curr->next;
//         }
//         Node* newNode = new Node(data);
//         newNode->next = curr->next;
//         curr->next = newNode;
//     }
// }
// void print(Node* &tail){
//     if(tail==NULL){
//         cout<<"empty list"<<endl;
//     }
//     int count = 0;
//     Node* temp = tail;
//     do{
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }while (temp!=tail);
//     cout<<endl;
// }
// int main(){
//     Node* tail = NULL;
//     insertAtNode(tail,12,9);
//     print(tail);
// }