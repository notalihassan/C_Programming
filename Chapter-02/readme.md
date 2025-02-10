=================Summary================

*Instructions = are the statements 
=> 3 types 

 1. Type declaration Instructions : "declare variable before using"
  * in a same line assignment and declaration is not possible like.
    E.g. int x = y = z = 4; //which gives error
    instead first declare variable like int x,y; then assign them value x = y = 4;

 2. Arithmatic Instructions : "+,-,/,*,%"
  * a + b // a and b are the opersnds. + is the operator
  * variable must be on the left side of the assignment opertaor (=)
  * on the left side of the assignment operator "only single variable" will be declare. 
    E.g. int X, Y = a * b; //it assign the value to Y but not to A.
    ==> Valid: y = a+b; 
    ==> Invalid: a+b = y; || y = ab || y = a^b
  * % is used to get remainder
    ==> it works only on integer values. i does not work on float values.
  * Types conversion:    //OP means operation
    int OP int --> int
    float OP float --> float
    int OP float --> float
    // int = 2byte , float= 4byte
  * Conversion:
    ==> implicit conversion: jo compiler khud kr deta ha
    Error: koch error a skte jb hum aik float yh double value ko int me store krwana chahein ge.
    Like int a = 1.999999;  //but in my case it gives 1 without using (int)
    Reason: kio k int small (2byte) value store krta ha jb ke float or double large vale store krte hn unka dabbba (storing area bara ha).
    ==> explicit conversion: jo programmer forcefully krta ha (external)
    E.g. int a = (int)1.999999; //using (int)

 3. Control Instructins


