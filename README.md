# CircusChoregraphy-


This is the code for the following problem

You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e.,
toward positive infinity).
The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump.
The second kangaroo starts at location x2 and moves at a rate of v2meters per jump.
You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return the int representing the position
at which the kangaroos are meeting, otherwise return -1.
For example, kangaroo 1 starts at x1=2 with a jump distance v1=1 and kangaroo 2 starts at x2=1 with a jump distance of v2=2. After one jump, they are both at x=3,
(x1 + v1=2+1, x2+v2 = 1+2 ), so the answer is 3.
What is the Ask:
Create an API that will accept the position and velocity of the two kangaroos.
I should be able to submit values into the API if I'm member of AD group CIRCUS_CHOREOGRAPH
The API should persist into a DB the parameters of kangaroos that met.
I should be able to retrieve the parameters of kangaroos that met via a second API only if I'm member of AD group CIRCUS_ADMIN.
