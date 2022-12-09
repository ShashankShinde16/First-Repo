#include <stdio.h>
// float km_to_miles(float value)
// {
//     return value * 0.621371;
// }
// int main()
// {

//     int value;
//     printf("km to miles converter\n");
//     scanf("%d", &value);
//     printf("%d km into miles is %f", value, km_to_miles(value));

//     return 0;
// }

int main()
{
    int input;
    int toBeConvert;
    float km = 0.621371;
    float cm = 0.393701;
    float inch = 0.0833333;
    start:
    printf("select the conversion option\n 1. convert km into miles\n 2. convert inch into foot\n 3. convert cm into inch\n 4. to quite\n");
    printf("the input is\n");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        printf("the valve to be convert is\n");
        scanf("%d", &toBeConvert);
        printf("km into miles is %f\n", km * toBeConvert);
    
    case 2:
        printf("the valve to be convert is\n");
        scanf("%d", &toBeConvert);
        printf("km into miles is %f\n", inch * toBeConvert);

    case 3:
        printf("the valve to be convert is\n");
        scanf("%d", &toBeConvert);
        printf("km into miles is %f\n", cm * toBeConvert);
    
    if (input == 4)
    {
        goto end;
    }
    else{
        goto start;
    }
    end:
    case 4:
        printf("the program is quited");
        break;

    default:
        break;
    }
    return 0;
}
