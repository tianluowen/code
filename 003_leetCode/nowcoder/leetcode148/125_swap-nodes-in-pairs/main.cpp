// date: 2020-05-16
// desc: 将给定的链表中每两个相邻的节点交换一次，返回链表的头指针
//       例如,
//       给出1->2->3->4，你应该返回链表2->1->4->3。
//       你给出的算法只能使用常量级的空间。你不能修改列表中的值，只能修改节点本身。

#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // 空链表
        if (head == nullptr)
            return nullptr;

        ListNode* returnhead = new ListNode(0);
        ListNode* tempHead = returnhead;
        ListNode* tempNode;

        // 每 2 个节点处理
        while (head && head->next)
        {
            // 交换两个节点，先记录下 2 个节点后面的节点，在依次链接 第 2 个 第 1 个 节点
            tempNode = head->next->next;
            tempHead->next = head->next;
            tempHead->next->next = head;

            // 更新 head 和 tempHead 节点的位置
            head = tempNode;
            tempHead = tempHead->next->next;
        }

        // 根据剩余情况处理链表
        if (head == nullptr)
            tempHead->next = nullptr;
        else
            tempHead->next = head;

        // 返回
        return returnhead->next;
    }
};

int main(void)
{
    Solution s;
    
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(3);
    l1->next->next->next = new ListNode(4);
    
    ListNode *temp = l1;
    while (temp != nullptr)
    {
        cout << temp->val;
        if (temp->next != nullptr)
            cout << "->";
        temp = temp->next;
    }
    cout << endl;
    
    l1 = s.swapPairs(l1);

    temp = l1;
    while (temp != nullptr)
    {
        cout << temp->val;
        if (temp->next != nullptr)
            cout << "->";
        temp = temp->next;
    }
    cout << endl;

    delete l1->next->next->next;
    delete l1->next->next;
    delete l1->next;
    delete l1;

    return 0;
}
