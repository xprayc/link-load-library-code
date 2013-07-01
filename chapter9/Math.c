/*
 * cl /LDd Math.c
 */

__declspec(dllexport) double Add(double a, double b)
{
    return a + b;
}

__declspec(dllexport) double Sub(double a, double b)
{
    return a - b;
}

__declspec(dllexport) double Mul(double a, double b)
{
    return a * b;
}
