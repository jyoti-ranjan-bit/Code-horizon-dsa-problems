cycle detection
solution

bool detectCycle(Node *head)
{
	//	Write your code here
    //we can solve this using Floyd cycle detection algorithm
    if(head==NULL || head->next==NULL)
    return false;
    Node*fast=head,*slow=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        return true;
    }
    return false;
}