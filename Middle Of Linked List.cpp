/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
  
    int count=0;
    if(head==NULL){
        return NULL;
    }
    Node *p=head;
    while(p!=NULL){
        p=p->next;
        count++;
    }
    int mid=count/2;
    p=head;
    int i=0;
    while(i<mid){
        p=p->next;
        i++;
    }
    return p;
}
