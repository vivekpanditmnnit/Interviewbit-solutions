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
 * @Output Integer
 */
int lPalin(listnode* A) {
    if(A==NULL || A->next==NULL)
        return 1;
    listnode *ptr,*prev,*temp;
    ptr=A;
    int size=1;
    ptr=ptr->next;
    //map<int,bool>has;
    while(ptr!=NULL){
        size++;
        ptr=ptr->next;
    }
    ptr=A;
    int x=size/2;
    int i=0;
    int arr[x];
    while(x--){
        arr[i++]=ptr->val;
        ptr=ptr->next;
    }
    if(size%2==1)
        ptr=ptr->next;
    i--;
    while(ptr!=NULL){
        if(arr[i--]!=ptr->val)
            return 0;
        else
            ptr=ptr->next;
    }
    return 1;
}
