extern "C"{
    // Add the header files required to run your main 
    #include <stdio.h>
}


int sumtail (int n, int total)
{
    if (n == 1)
    return 1;
    else
    return (sumtail((n - 1),(total + n)));
}
// File for sandboxing and trying out code
int main(int argc, char **argv)
{
printf("%d",sumtail(3,4));
    return 0;
}