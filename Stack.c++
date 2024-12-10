// #include <stdio.h>
// #include <stdlib.h>
// struct stack
// {
//     char items[10];
//     int Top;
// };
// /***************************/
// struct stack S;
// /***************************/
// void Initialize()
// {
//     S.Top = -1;
// }
// /***************************/
// int IsEmpty()
// {
//     if (S.Top == -1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// /***************************/
// int Push(char x)
// {
//     if (S.Top == 9)
//     {
//         printf("Stack Overflow");
//         exit(1);
//     }
//     else
//     {
//         S.Top = S.Top + 1;
//         S.items[S.Top] = x;
//     }
// }
// /***************************/
// int Pop()
// {
//     if (IsEmpty())
//     {
//         printf("Stack Underflow");
//         exit(1);
//     }
//     else
//     {
//         int x = S.items[S.Top];
//         S.Top = S.Top - 1;
//         return x;
//     }
// }
// /***************************/
// int StackTop(stack S)
// {
//     int x = S.items[S.Top];
//     return x;
// }
// /***************************/
// int main()
// {
//     // char str(10);
//     Initialize();
//     Push('A');
//     Push('B');
//     Push('C');
//     Push('D');
//     Push('E');
//     Push('F');
//     Push('G');
//     char ans = Pop();
//     printf("%c\n", ans);
//     ans = Pop();
//     printf("%c\n", ans);
//     ans = Pop();
//     printf("%c\n", ans);
//     ans = Pop();
//     printf("%c\n", ans);
//     ans = Pop();
//     printf("%c\n", ans);
//     ans = Pop();
//     printf("%c\n", ans);
//     return 0;
// }











// REVERSE OF THE STRING
#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 10
struct stack
{
    char items[STACKSIZE - 1];
    int Top;
};
/***************************/
struct stack S;
/***************************/
void Initialize(struct stack *S)
{
    S->Top = -1;
}
/***************************/
int IsEmpty(struct stack *S)
{
    if (S->Top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/***************************/
void Push(struct stack *S, char x)
{
    if (S->Top == STACKSIZE - 1)
    {
        printf("\nStack Overflow");
        exit(1);
    }
    else
    {
        S->Top = S->Top + 1;
        S->items[S->Top] = x;
    }
}
/***************************/
char Pop(struct stack *S)
{
    if (IsEmpty(S))
    {
        printf("Stack Underflow");
        exit(1);
    }
    else
    {
        int x = S->items[S->Top];
        S->Top = S->Top - 1;
        return x;
    }
}
/***************************/
char StackTop(struct stack S)
{
    int x = S.items[S.Top];
    return x;
}
/***************************/
int main()
{
    int i = 0, j = 0;
    struct stack S;
    char str[10];
    char answer[10];
    Initialize(&S);
    scanf("%s", str);
    while (str[i] != '\0')
    {
        Push(&S, str[i]);
        i++;
    }
    while (!IsEmpty(&S))
    {
        int x = Pop(&S);
        answer[j] = x;
        j++;
    }
    answer[j] = '\0';
    printf("reversed string is:=> %s", answer);
    return 0;
}










// // Parenthis Order
// #include <stdio.h>
// #include <stdlib.h>
// struct stack
// {
//     char items[10];
//     int Top;
// };
// /***************************/
// struct stack S;
// /***************************/
// void Initialize()
// {
//     S.Top = -1;
// }
// /***************************/
// int IsEmpty()
// {
//     if (S.Top == -1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// /***************************/
// int Push(char x)
// {
//     if (S.Top == 9)
//     {
//         printf("Stack Overflow");
//         exit(1);
//     }
//     else
//     {
//         S.Top = S.Top + 1;
//         S.items[S.Top] = x;
//     }
// }
// /***************************/
// int Pop()
// {
//     if (IsEmpty())
//     {
//         printf("Stack Underflow");
//         exit(1);
//     }
//     else
//     {
//         int x = S.items[S.Top];
//         S.Top = S.Top - 1;
//         return x;
//     }
// }
// /***************************/
// int StackTop(stack S)
// {
//     int x = S.items[S.Top];
//     return x;
// }
// int ParenthisOrder(char str[])
// {
//     struct stack S;
//     Initialize();
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         char x = str[i];
//         if (x == '{' || x=='(' || x=='[')
//         {
//             Push(x);
//         }
//         else
//         {
//             if (!IsEmpty())
//             {
//                 Pop();
//             }
//             else
//             {
//                 return 0;
//             }
//         }
//         i = i + 1;
//     }
//     if (IsEmpty())
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int DecToAnyBase(int N, int b)
// {
//     stack S;
//     Initialize();
//     int r;
//     while (N != 0)
//     {
//         r = N % b;
//         Push(r);
//         N = N / b;
//     }
//     while (!IsEmpty())
//     {
//         int x = Pop();
//         if (x >= 0 && x <= 9)
//         {
//             printf("%d", x);
//         }
//         else
//         {
//             printf("%d", 55 + x);
//         }
//     }
// }
// int main()
// {
//     char str[]="{}{}(){}{([])}";
//     // scanf("%s",&str);
//     int ans = ParenthisOrder(str);
//     if (ans == 1)
//     {
//         printf("Valid\n");
//     }
//     else
//     {
//         printf("In Valid\n");
//     }
//     int N, b;
//     scanf("%d%d",&N,&b);
//     int res = DecToAnyBase(N, b);
// }










// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #define STACKSIZE 10
// #define TRUE 1
// #define FALSE 0
// struct stack
// {
//     int items[STACKSIZE - 1];
//     int Top;
// };
// /***************************/
// struct stack S;
// /***************************/
// void Initialize(struct stack *S)
// {
//     S->Top = -1;
// }
// /***************************/
// int IsEmpty(struct stack *S)
// {
//     if (S->Top == -1)
//     {
//         return TRUE;
//     }
//     else
//     {
//         return FALSE;
//     }
// }
// /***************************/
// void Push(struct stack *S, int x)
// {
//     if (S->Top == STACKSIZE - 1)
//     {
//         printf("\nStack Overflow");
//         exit(1);
//     }
//     else
//     {
//         S->Top = S->Top + 1;
//         S->items[S->Top] = x;
//     }
// }
// /***************************/
// int Pop(struct stack *S)
// {
//     if (IsEmpty(S))
//     {
//         printf("Stack Underflow");
//         exit(1);
//     }
//     else
//     {
//         int x = S->items[S->Top];
//         S->Top = S->Top - 1;
//         return x;
//     }
// }
// /***************************/
// char StackTop(struct stack S)
// {
//     int x = S.items[S.Top];
//     return x;
// }
// /***************************/
// int FindValue(int a, int b, char symb)
// {
//     switch (symb)
//     {
//     case '+':
//         return a + b;
//     case '-':
//         return a - b;
//     case '*':
//         return a * b;
//     case '/':
//         return a / b;
//     case '%':
//         return a % b;
//     case '^':
//         return pow(a, b);
//     }
// }
// /***************************/
// int main()
// {
//     char Post[] = "785+-3*2+";
//     int i = 0, a, b, value;
//     char symb;
//     struct stack S;
//     Initialize(&S);
//     while (Post[i] != '\0')
//     {
//         symb = Post[i];
//         i++;
//         if (symb >= '0' && symb <= '9')
//         {
//             Push(&S, symb-'0');
//         }
//         else
//         {
//             b = Pop(&S);
//             a = Pop(&S);
//             value = FindValue(a, b, symb);
//             Push(&S, value);
//         }       
//     }
//     int ans = StackTop(S);
//     printf("Answer=> %d",ans);
//     return 0;
// }








#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct stack
{
    int items[STACKSIZE - 1];
    int Top;
};
/***************************/
struct stack S;
/***************************/
void Initialize(struct stack *S)
{
    S->Top = -1;
}
/***************************/
int IsEmpty(struct stack *S)
{
    if (S->Top == -1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
/***************************/
void Push(struct stack *S, int x)
{
    if (S->Top == STACKSIZE - 1)
    {
        printf("\nStack Overflow");
        exit(1);
    }
    else
    {
        S->Top = S->Top + 1;
        S->items[S->Top] = x;
    }
}
/***************************/
int Pop(struct stack *S)
{
    if (IsEmpty(S))
    {
        printf("Stack Underflow");
        exit(1);
    }
    else
    {
        int x = S->items[S->Top];
        S->Top = S->Top - 1;
        return x;
    }
}
/***************************/
char StackTop(struct stack S)
{
    int x = S.items[S.Top];
    return x;
}
/***************************/
int FindValue(int a, int b, char symb)
{
    switch (symb)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    case '^':
        return pow(a, b);
    }
}
/***************************/
int main()
{
    char Post[] = "785+-3*2+";
    int i = 0, a, b, value;
    char symb;
    struct stack S;
    Initialize(&S);
    
    while (Post[i] != '\0')
    {
        symb = Post[i];
        i++;
        if (symb >= '0' && symb <= '9')
        {
            Push(&S, symb-'0');
        }
        else
        {
            b = Pop(&S);
            a = Pop(&S);
            value = FindValue(a, b, symb);
            Push(&S, value);
        }       
    }
    int ans = StackTop(S);
    printf("Answer=> %d",ans);
    return 0;
}






