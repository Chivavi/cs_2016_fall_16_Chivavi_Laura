#include <stdio.h>
#include <stdlib.h>

 main()
{ int firstnumber, secondnumber;
  int summationresult,multiplicationresult;
  float divisionresult;
    printf("Please Enter two Number:");
    scanf("%d %d", &firstnumber, &secondnumber);

    summationresult=firstnumber+secondnumber;
    multiplicationresult=firstnumber*secondnumber;
    divisionresult=multiplicationresult/summationresult;

printf("Result = %f", divisionresult);
getch();
   return 0;
}
