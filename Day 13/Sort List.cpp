class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }
        if (head->next == nullptr) {
            return head;
        }

        // Extract the elements from the linked list
        std::vector<int> elements;
        ListNode* current = head;
        while (current != nullptr) {
            elements.push_back(current->val);
            current = current->next;
        }

        // Sort the elements
        std::sort(elements.begin(), elements.end());

        // Create a new sorted linked list
        ListNode* result = new ListNode(elements[0]);
        ListNode* resultPointer = result;
        for (size_t i = 1; i < elements.size(); ++i) {
            resultPointer->next = new ListNode(elements[i]);
            resultPointer = resultPointer->next;
        }

        return result;
    }
};
