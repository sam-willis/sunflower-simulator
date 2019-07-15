#include "sf-types.h"
#include "sh7708.h"
#include "devscc.h"
#include "printf.h"
#include "ssort-input.h"

int main(void)
{
    printf("\n\n[%s]\n", ssort_input);
    int gaps[] = {132, 57, 23, 10, 4, 1};
    for (int k=0; k < 6; k++)
    {
        int gap = gaps[k]; 
        for (float i=gap; i < ssort_input_len ; i++)
        {
            uchar temp = ssort_input[(int)i];
            int j;
            for (j = i; (j >= gap) && (ssort_input[j - gap] > temp); j -= gap)
            {
                ssort_input[j] = ssort_input[j - gap];
            }
            ssort_input[j] = temp;
        }
    }
    printf("[%s]\n", ssort_input);
    return 0;
}
