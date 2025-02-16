#include<iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void push_head(Node* &head,int data){
 
    if(head==nullptr){
      head=new Node(data);
      return ;
    }
    Node* newNode=new Node(data);
    head->next=NULL;
    newNode->next=head;
    head=newNode;
    
}

void push_tail(Node* &head,int data){
    
    if(head==nullptr){
       head=new Node(data);
       return ;
    }
    Node* newNode=new Node(data);
    Node* temp=head;
    Node* pre=nullptr;
    while(temp!=nullptr){
        pre=temp;
        temp=temp->next;
    }
    pre->next=newNode;
    
}
void push_at(Node* &head,int data, int k){
    
    Node* newNode=new Node(data);
   if(k==1){
     newNode->next=head;
     head=newNode;
     return;
   }
   int cnt=1;
   Node* temp=head;
   while(temp!=NULL && cnt<k-1){
         temp=temp->next;
         cnt++;
   }
   newNode->next=temp->next;
   temp->next=newNode;
}
void show(Node* head){
    if(head==nullptr){
        printf(" list is empty \n");
    }
    else{
     
        while(head!=NULL){
            printf("%d -> " ,head->data);
           
            head=head->next;
        }
        printf("NULL\n");
    }
}

int Head(Node* head){
    if(head==nullptr){
        return -1;
    }
    return head->data;
}
int Tail(Node* head){
    if(head==nullptr){
        return -1;
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    return temp->data;
}

void Rev(Node* &head){
    if(head==NULL){
        return ;
    }
    else{
        Node* forward=NULL;
        Node* pre=NULL;
        Node* curr=head;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=pre;
            pre=curr;
            curr=forward;
        }
        head=pre;
    }
}

void pop_front(Node* &head){
      if(head==NULL){
        return ;
      } 
      Node* temp=head;
      head=head->next;
      
}

void pop_back(Node* &head){
    if(head==NULL){
      return ;
    } 
    Node* temp=head;
   Node* pre=NULL;
    while(temp->next!=NULL){
        pre=temp;
        temp=temp->next;
    }
 pre->next=NULL;
}

void pop_pos(Node* &head,int k){
    if(k==1){
        pop_front(head);
        return ;
    }
    else{
        Node* temp=head;
        Node* pre=NULL;
        int cnt=1;
        while(temp!=NULL && cnt<k){
             pre=temp;
             temp=temp->next;
             cnt++;
        }
        pre->next=temp->next;
        temp->next=NULL;

    }
}
