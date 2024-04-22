#include <stdio.h>

int main()
{
    long int a, b, _a, _b, c, carry, result,y;

    while (1)
    {
        scanf("%lld %lld",&y,&b);
        if(y==0 && b==0) break;
        carry = c = 0;
        while (y != 0 || b != 0)
        {
            _a = y % 10;
            y = y / 10;
            _b = b % 10;
            b = b / 10;
            //printf("%lld %lld\n",_a,_b);
            result = _a + _b + c;
            if (result >= 10)
            {
                c=1;
                carry++;
            }else c=0;
            //printf("%lld\n",carry);
        }

        if (carry == 0) printf("No carry operation.\n");
        else if (carry == 1) printf("1 carry operation.\n");
        else printf("%lld carry operations.\n",carry);
    }
    return 0;
}
