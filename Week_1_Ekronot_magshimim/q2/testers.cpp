#include "stack.h"
#include  "Utils.h"
#include "allTester.h"

void linkListTester();

void stackTester();

void utilsTester();

int main()
{
    int ans = 0;

    while(ans != 5)
    {
        cout << "choose a tester:\n 1) linkList\n 2) stack\n 3) utilsTester\n 4) all tester\n 5) to break\n";
        cin >> ans;

        switch (ans)
        {
        case 1:
            linkListTester();
            break;

        case 2:
            stackTester();
            break;

        case 3:
            utilsTester();
            break;

        case 4:
            allTester();
            break;

        default:
            break;
        }
    }
    
    return 0;
}

void linkListTester()
{
    linkedList* head = new linkedList;
    head->value = 100;
    head->next = nullptr;

    head = pushList(head, 99);

    printf("%d\n", head->value);
    printf("%d\n", head->next->value);

    head = popList(head);

    if (head != NULL)
    {
        printf("%d\n", head->value);
    }
    else
    {
        printf("List is empty\n");
    }

    head = popList(head);

    if (head == NULL)
    {
        printf("List is now empty\n");
    }
}

void stackTester()
{
    Stack* head = new Stack;
    initStack(head);

    push(head, 100);
    push(head, 99);

    printf("%d\n", head->list->value);
    printf("%d\n", head->list->next->value);

    pop(head);

    printf("%d\n", head->list->value);

    cleanStack(head);

    if (head->list)
    {
        printf("didnt work\n");
    }
    else
    {
        printf("works\n");
    }
}

void utilsTester()
{
    printf("Enter 10 numbers for reverse10 function:\n");
    int* reversedArray = reverse10();

    printf("Reversed array from reverse10: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", reversedArray[i]);
    }
    printf("\n");

    delete[] reversedArray;

    int nums[5] = { 1, 2, 3, 4, 5 };

    printf("\nOriginal array for reverse function: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    reverse(nums, 5);

    printf("Reversed array from reverse: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
