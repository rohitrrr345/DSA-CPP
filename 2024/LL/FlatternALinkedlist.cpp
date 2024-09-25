class Solution {
  public:
  Node *twoSort(Node*l1,Node*l2){
      if(l1==NULL){
          return l2;
      }
      if(l2==NULL){
          return l1;
      }
      Node*result;
      if(l1->data<l2->data){
          result=l1;
          result->bottom=twoSort(l1->bottom,l2);
      }
      else{
          result=l2;
          result->bottom=twoSort(l1,l2->bottom);
      }
      return result;
  }
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *head) {
        if(head==NULL){
            return NULL;
        }
       Node *head2=flatten(head->next);
       return twoSort(head,head2);
       Given a Linked List, where every node represents a sub-linked-list and contains two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked lists is in sorted order.
Flatten the Link List so all the nodes appear in a single level while maintaining the sorted order.

Note: The flattened list will be printed using the bottom pointer instead of the next pointer. Look at the printList() function in the driver code for more clarity.

Examples:

Input:

Output:  5-> 7-> 8- > 10 -> 19-> 20-> 22-> 28-> 30-> 35-> 40-> 45-> 50.
Explanation: The resultant linked lists has every node in a single level.(Note: | represents the bottom pointer.)
Input:
 
Output: 5-> 7-> 8-> 10-> 19-> 22-> 28-> 30-> 50
Explanation: The resultant linked lists has every node in a single level.(Note: | represents the bottom pointer.)
Note: In the output section of the above examples, the -> represents the bottom pointer.

Expected Time Complexity: O(n * n * m)
Expected Auxiliary Space: O(n)

Constraints:
0 <= number of nodes <= 50
1 <= no. of nodes in sub-LinkesList(mi) <= 20
1 <= node->data <= 103

Seen this question in a real interview before ?
Yes
No