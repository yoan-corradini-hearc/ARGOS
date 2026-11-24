// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0021_SumN.h"

// Function definitions
// TODO: implement ex_0021_SumN
int ex_0021_SumN(int a, int b);

int ex_0021_SumN(int a, int b){
    int tot = 0;
    int borne = a - b + 1;

    for(int i = 0; i < borne; ++i){
        tot += i;
    }

    return tot;
}
