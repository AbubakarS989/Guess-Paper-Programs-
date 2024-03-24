#include <stdio.h>
int main()
{

    // print series of even number till 40

    // 2+4+....+38+40
    for (int i = 2; i <= 40; i = i + 2)
    {

        // i used if condition for just better output  ,
        //   it mean when 40 is going to print then the computer print 40 without addition sign "+"
        if (i == 40)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d+", i);
        }
    }
    // with condition output
    // 2+4+6+8+10+12+14+16+18+20+22+24+26+28+30+32+34+36+38+40
    // withput  condition ouput
    // 2+4+6+8+10+12+14+16+18+20+22+24+26+28+30+32+34+36+38+40+
}