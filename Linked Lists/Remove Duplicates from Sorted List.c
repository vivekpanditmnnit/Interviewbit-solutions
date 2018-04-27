/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* deleteDuplicates(listnode* A) {
    if(A==NULL)
        return A;
    else if(A->next==NULL)
        return A;
    listnode *temp,*ptr;
    ptr=A;
    while(ptr->next!=NULL){
        temp=ptr->next;
        if(ptr->val==temp->val){
            ptr->next=temp->next;
            free(temp);
        }
        else
            ptr=ptr->next;
    }
    return A;
}
