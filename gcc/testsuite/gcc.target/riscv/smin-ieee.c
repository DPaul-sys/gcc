/* { dg-do compile } */
/* { dg-options "-ffinite-math-only -fsigned-zeros -dp" } */

double
smin (double x, double y)
{
  return x <= y ? x : y;
}

/* { dg-final { scan-assembler-not "\t(call|tail)\tfmin\t" } } */
/* { dg-final { scan-assembler-not "\tfmin\\.d\t" } } */
/* { dg-final { scan-assembler "\tfle\\.d\t" } } */
