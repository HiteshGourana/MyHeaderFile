#include<iostream>
#include "MyheaderFile.h"
using namespace std;
int main(){
   Node* node=NULL;
   push_head(node,10); // push in head of list 
   push_tail(node,20); // push in tail of list
   push_at(node,100,2); // push in list random positionq
    show(node); //  show list 
   //pop_front(node); // pop head of list
   //pop_back(node);  // pop tail of list
   //pop_pos(node,2);  pop random position in list
   //cout<<endl;
   //cout<<Head(node);//return head of list
   //cout<<endl;
   //cout<<Tail(node);//return tail of list
   Rev(node);// Reverse the list
   show(node);
   // thank you 
}