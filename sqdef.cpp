Stack:
A stack is an abstract data type (ADT), commonly used i  most programming languages. It is named stack
as it behaves like a real-world, ex: a deck of cards
LAST IN FIRST OUT

PUSH void push (stack *s, int element);
POP int pop (stack *s);
CREATE void create (stack *s);
ISEMPTY int isEmpty (stack *s);
ISFULL int isFull (stack *s);
APPLICATIONS:
web browser
undo sequence in text editor
validate xml

Queue:
an abstract data structure, somewhat similar to Stacks.
Unlike stacks, a queue is open at both ends. One end is always used to 
insert data (enqueue) and the other is used to remove data (dequeue).

FIRST IN FIRST OUT 

enqueue void enqueue (queue *q, int element);
dequeue int dequeue (queue *q);
create queue void create (queue *q);
isEmpty int isEmpty (queue *q);
size int size (queue *q);
