#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node *prev;
    Node(int val) {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_node(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    // tail->next=head;
    // head->prev=tail;

}
void delete_operation(Node *&head,Node *&tail,int val) {

    Node *temp=head;
    // head delete
    if(val==head->val) {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL) {
            tail = NULL;
            return;
        }
        head->prev = NULL;
        return;
    }

    // tail
    if(val==tail->val) {
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL) {
            head = NULL;
            return;
        }
        tail->next = NULL;
        return;
    }
    // any value
    while(temp->next->val!=val) {
        temp=temp->next;
    }
    Node *nodeDelete= temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete nodeDelete;

}
int size(Node *head) {
    Node *temp= head;
    int cnt=0;
    while(temp!= NULL) {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
void insert_head(Node *&head,Node *&tail,int val) {
    Node *newNode= new Node(val);
    if(head==NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void print_list(Node *head) {
    Node *temp=head;
    while(temp!=NULL) { // temp.next!=head
        cout<<temp->prev<<" "<<temp<<" "<<temp->val<<" "<<temp->next<<endl;
        temp=temp->next;
    }
    // cout<<temp->prev<<" "<<temp<<" "<<temp->val<<" "<<temp->next<<endl; 
}

void insert_anywhere(Node *head, Node *tail,int val,int where) {
    Node *newNode= new Node(val);
    if(where==tail->val) {
        insert_node(head,tail,val);
        return;
    }
    Node *temp=head;
    while(temp->val!= where) {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;

}
int main() {


    Node *head=NULL;
    Node *tail=NULL;
    int val;
    cout<<"Input Linked List: ";
    while(true) {
        cin >> val;
        if(val==-1) break;
        insert_node(head,tail,val);
    }
    while(true) {
            cout<<"1. Delete Node"<<endl<<"2. Insert at head"<<endl<<"3. Insert at tail"<<endl<<"4. Insert anywhere"<<endl<<"5. Print Linked List"<<endl<<"6. Count number of nodes"<<endl<<"7. Terminate"<<endl;
            cout<<endl<<"Input Operation: "<<endl;
            int x; cin >> x;
            if(x==1) {
                cout<<"Input value to delete: ";
                int del; cin >> del;
                delete_operation(head,tail,del);
                print_list(head);
                cout<<endl<<endl;
            }
            else if(x==2) {
                cout<<"Insert the value of head: ";
                int val; cin >> val;
                insert_head(head,tail,val);
                print_list(head);
                cout<<endl<<endl;
            }
            else if(x==3) {
                cout<<"Insert the value of tail: "; 
                int val; cin >> val;
                insert_node(head,tail,val);
                print_list(head);
            }
            else if(x==4) {
                cout<<"Input where to insert and what to input: ";   
                int where,value; cin >> where>> value;
                insert_anywhere(head,tail,value,where);
                print_list(head);
            }
            else if(x==5) {
                cout<<endl<<"Printing Linked List"<<endl<<endl;
                print_list(head);
                cout<<endl<<endl;
            }
            else if(x==6) {
                cout<<endl<<"Total Nodes: "<<size(head)<<endl<<endl; 
            }
            else if(x==7) break;
            else  {
                cout<<"Invalid"<<endl; 
                cout<<endl<<endl;
            }
        }    
    return 0;
}


