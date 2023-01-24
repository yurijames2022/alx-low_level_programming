#include <stdio.h>
#include <stdarg.h>
#include <string.h>



void display(char *placeholder, ...)
{
    va_list my_args;
    va_start(my_args, placeholder);

    int index = 0;
    int arg_c = strlen(placeholder);

    while (placeholder[index] == '%')
    index++;
    {
        for(index = 0; index < arg_c; index++)
        {
            if (placeholder[index] == 'd')
            {
                int int_type = va_arg(my_args, int);
                printf("%d ", int_type);
            }
            else if(placeholder[index] == 'f')
            {
                double double_type = va_arg(my_args, double);
                printf("%f ", double_type );
            }
            else if(placeholder[index] == 'c')
            {
                char char_type = va_arg(my_args, int);
                putchar(char_type);
                printf(" ");
            }
            else if(placeholder[index] == 's')
            {
                char string = va_arg(my_args, int);
                putchar(string);
            }
        }
    }printf("\n");
    va_end(my_args);

}
int main(void)
{
    display("%d%f%c%s", 4, 4.5, 'a', 'T');
    return(0);
}