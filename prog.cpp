#include "grades.h"
/**
   Given a letter grade (A, B, C, D, F) and a suffix (None, Plus, Minus),
   produce the numerical value of the grade. An A is a 4, B a 3, 
   C a 2, D a 1, and F a zero. The suffix Plus adds 0.3, the suffix
   Minus subtracts 0.3. However, an A+ has value 4 and an F+ and F- 
   have value zero.
 */
double gradeValue(Grade g, Suffix s)
{
  double gval;
    switch(g)
    {
      case A :
           gval = 4;
           break;
      case B :
           gval = 3;
           break;
      case C :
           gval = 2;
           break;
      case D :
           gval = 1;
           break;
      case F :
          gval = 0;
      default:
           break;
    }
    double sval;
    switch(s)
    {
      case Plus :
           sval = 0.3;
           break;
      case Minus:
           sval = -0.3;
           break;
      case None:
         sval = 0;
           break;
    }
  double r;
  if(gval == 4.0 && sval == 0.3)
    {
       return (gval);
    }
  else if(gval == 4.0 && sval == -0.3)
    {
      return (3.7);
    }
    else if(gval == 4.0 && sval == 0)
   {
      return 4;
   }
  else if(gval == 3.0 && sval == 0.3)
    {
       return (3.3);
    }
  else if(gval == 3.0 && sval == -0.3)
    {
      return (2.7);
    }
  
  else if(gval == 3.0 && sval == 0)
   {
      return 3;
   }
  else if(gval == 2.0 && sval == 0.3)
   {
      return (2.3);
    }
   else if(gval == 1.0 && sval == 0.3)
   {
     return (1.3);
   }
   else if(gval ==1.0 && sval == -0.3)
   {
     return (0.7);
   }
   else 
   {
      return 0;
   }
  
}
   
  

