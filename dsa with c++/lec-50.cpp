#include<iostream>
#include<map>
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
};
void insertAtBottom(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*,bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp] == true){
            cout<<"Cycle is present"<<temp->data<<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
Node* floydDetectLoop(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && slow!=NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        
        }
        slow = slow->next;
        if(slow == fast){
            cout<<"Present at "<<slow->data<<endl;
            return slow;
        }

        // else{
        //     // cout<<"Value present at fast pointer -> "<<fast->data<<endl;
        //     // cout<<"Value present at slow pointer -> "<<slow->data<<endl;

        //     return slow;
        // }
    }return NULL;
}
Node* getStartingNode(Node* head){
    if(head == NULL)
    {   return NULL;}
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeLoop(Node* head){
    if(head == NULL){
        return ;
    }
    Node* startingLoop = getStartingNode(head);
    Node* temp = startingLoop;
    while(startingLoop!=temp->next){
        temp = temp->next;
    }
    temp->next = NULL;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtBottom(head,12);
    print(head);
    insertAtBottom(head,23);
    print(head);
    insertAtBottom(head,13);
    print(head);
    insertAtBottom(head,52);
    print(head);
    insertAtTail(tail,44);
    print(head);
    tail->next = head->next->next;
    // if(floydDetectLoop(head)){
    //     cout<<"loop is present: "<<endl;
    // }
    // else{
    //     cout<<"Loop is not present: "<<endl;
    // }
    Node* intersectionPoint = floydDetectLoop(head);
    cout<<"node at the loop is "<<intersectionPoint->data<<endl;
    Node* intersection = getStartingNode(head);
    cout<<"Loop starting at -> "<<intersection->data<<endl;
    removeLoop(head);
    print(head);
}