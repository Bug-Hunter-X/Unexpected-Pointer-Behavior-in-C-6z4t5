int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20; //Modify the value using the pointer
    printf("%d", x); //This prints 20
    int y = 30; 
    ptr = &y; //Point to another variable
    *ptr = 40; //Modify the value of y
    printf("%d", x); //This still prints 20. 
    return 0; }