#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct {
    char data[25];
    int top;
} CharStack;

typedef struct {
    int data[25];
    int top;
} IntStack;

void initCharStack(CharStack* s) {
    s->top = -1;
}

void pushChar(CharStack* s, char x) {
    s->data[++s->top] = x;
}

char popChar(CharStack* s) {
    return s->data[s->top--];
}

char peekChar(CharStack* s) {
    return s->data[s->top];
}

void initIntStack(IntStack* s) {
    s->top = -1;
}

void pushInt(IntStack* s, int x) {
    s->data[++s->top] = x;
}

int popInt(IntStack* s) {
    return s->data[s->top--];
}

int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {
    CharStack s;
    initCharStack(&s);

    int i = 0, j = 0;
    char ch;

    while((ch = infix[i++]) != '\0') {

        // Operand
        if(isdigit(ch)) {
            postfix[j++] = ch;
        }

        // (
        else if(ch == '(') {
            pushChar(&s, ch);
        }

        // )
        else if(ch == ')') {
            while(peekChar(&s) != '(')
                postfix[j++] = popChar(&s);
            popChar(&s); // '(' at
        }

        // Operator
        else {
            while(s.top != -1 && precedence(peekChar(&s)) >= precedence(ch))
                postfix[j++] = popChar(&s);
            pushChar(&s, ch);
        }
    }

    while(s.top != -1)
        postfix[j++] = popChar(&s);

    postfix[j] = '\0';
}
int evaluatePostfix(char postfix[]) {
    IntStack s;
    initIntStack(&s);

    int i = 0;
    char ch;

    while((ch = postfix[i++]) != '\0') {

        if(isdigit(ch)) {
            pushInt(&s, ch - '0');
        } else {
            int b = popInt(&s);
            int a = popInt(&s);

            switch(ch) {
                case '+': pushInt(&s, a + b); break;
                case '-': pushInt(&s, a - b); break;
                case '*': pushInt(&s, a * b); break;
                case '/': pushInt(&s, a / b); break;
            }
        }
    }

    return popInt(&s);
}

int main() {
    char infix[] = "2*(2+3)";
    char postfix[25];

    infixToPostfix(infix, postfix);

    printf("Infix   : %s\n", infix);
    printf("Postfix : %s\n", postfix);
    printf("Sonuc   : %d\n", evaluatePostfix(postfix));

    return 0;
}
