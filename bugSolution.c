int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20; //Modify the value using the pointer
    printf("%d\n", x); //This prints 20
    int y = 30; 
    ptr = &y; //Point to another variable
    *ptr = 40; //Modify the value of y
    printf("%d\n", x); //This still prints 20. 
    printf("The address of x is: %p\n", &x);
    printf("The address of y is: %p\n", &y);
    printf("The address ptr points to is: %p\n", ptr);
    return 0; }