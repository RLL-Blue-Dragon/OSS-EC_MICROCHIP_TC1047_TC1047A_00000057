// License       : License.txt
// Specifications: Spec-00000057.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : TC1047_00000057.cpp
// BSL              : 00000057
// Model number     : Microchip Technology TC1047, TC1047A
// Spec               Component type       : ADC
//                    OS                   : Arduino
//                    Calculation          : Floating-point
//                    Conversion type      : Linear
//                    Moving average filter: Moving average filter select
//                    Diagnosis            : Range (Min to Max)
// Reason for change: 01.00.00 : 13/10/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#include "TC1047.h"

// Main Function
pp2ap_adc_t TC1047_00000057( void )
{
        pp2ap_adc_t res = pp_00000057( tbl_TC1047 );
        return( res );
}
