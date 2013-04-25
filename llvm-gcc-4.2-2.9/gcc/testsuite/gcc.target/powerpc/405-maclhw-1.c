/* Test generation of maclhw on 405.  */
/* Origin: Joseph Myers <joseph@codesourcery.com> */
/* { dg-do compile } */
/* { dg-require-effective-target ilp32 } */
/* { dg-options "-O2 -mcpu=405" } */

/* { dg-final { scan-assembler "maclhw " } } */

int
f(int a, int b, int c)
{
  a += (short)b * (short)c;
  return a;
}