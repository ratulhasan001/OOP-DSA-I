// circular linked list

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node *next;
    Node (int val) {
        this->val=val;
        this->next = NULL;
    }

};

void insert_at_head(Node *&head, Node *&tail, int val) {  
    Node *newNode = new Node(val);
    newNode->next = head;
    tail->next=newNode;
    if(head==NULL) {
        tail=newNode;
    }
    head = newNode;

}
void insert_at_tail(Node *&head, Node *&tail, int val) { 
    Node *newNode= new Node(val);
    if(head==NULL) {
        head= newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    tail->next=head;
}
void insert_at_pos(Node *head, int position, int val) {  
    Node *newNode= new Node(val);
    Node *temp= head;
    for(int i=1; i<=position-1; i++) {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void print_linked_list(Node *head) {   
    Node *temp=head;
    while(temp->next!=head) {
        cout<<temp<<" "<<temp->val<<" "<<temp->next<<endl;
        temp=temp->next;
    }
    cout<<temp<<" "<<temp->val<<" "<<temp->next<<endl;
    cout<<endl<<endl<<endl;
}

int size(Node *head) { 
    Node *tmp = head;
    int cnt = 0;
    while (tmp->next != head )
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt+1;
}
void delete_node(Node *&head,Node* &tail,int val) { 
    Node *temp1 = head;
    if(temp1==NULL) {
        cout<<"EMPTY!"<<endl;
        return;
    }
    if(temp1->val==val) {
        Node *deleteNode = head;
        head = head->next;
        tail->next=head;
        delete deleteNode;
        return;
    }
    int pos=0;
    while(temp1!=NULL) {
        if(temp1->val==val) break;
        temp1=temp1->next;
        pos++;
    }
    Node *temp=head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit); 
    
    Node *head=NULL;
    Node *tail = NULL;
    int value;
    cout<<"Input linked list: "<<endl;
    while(true) {
        cin >> value;
        if(value==-1) break;
        insert_at_tail(head,tail,value);

    }
    cout<<endl;


    while(true) {
        cout<<"1. Delete Node"<<endl<<"2. Insert at head"<<endl<<"3. Insert at tail "<<endl<<"4. Insert at position"<<endl<<"5. Print Linked List"<<endl<<"6. Count number of nodes"<<endl<<"7. Terminate"<<endl;
        cout<<endl<<"Input Operation: ";
        int x; cin >> x;
        if(x==1) {
            cout<<"Input value to delete: ";
            int del; cin >> del;
            delete_node(head,tail,del);
            print_linked_list(head);
            cout<<endl<<endl;
        }
        else if(x==2) {
            cout<<"Insert the value of head: ";
            int val; cin >> val;
            insert_at_head(head,tail,val);
            print_linked_list(head);
            cout<<endl<<endl;
        }
        else if(x==3) {
            cout<<"Insert the value of tail: ";
            int val; cin >> val;
            insert_at_tail(head,tail,val);
            print_linked_list(head);
        }
        else if(x==4) {
            cout<<"Input value and position : ";
            int val,pos; cin >> val >> pos;
            insert_at_pos(head,pos,val);
            print_linked_list(head);
        }
        else if(x==5) {
            cout<<endl<<"Printing Linked List"<<endl<<endl;
            print_linked_list(head);
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
