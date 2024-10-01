#include <stdio.h>
#include <conio.h>
#define max 3
void push();
int pop();
void display();
int s[10], item, ch, top = -1, i;
void main()
{
    while (1)
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            item = pop();
            if (item != -1)
            {
                printf("popped element is %d\n", item);
            }
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;
        }
    }
    getch();
}
void push()
{
    if (top == max - 1)
    {
        printf("stack overflow\n");
        return;
    }
    printf("enter the element to be pushed\n");
    scanf("%d", &item);
    top = top + 1;
    s[top] = item;
}

int pop()
{
    if (top == -1)
    {
        printf("stack underflow\n");
        return (-1);
    }
    item = s[top];
    top = top - 1;
    return item;
}

void display()
{
    if (top == -1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("stack contents\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", s[i]);
    }
}
