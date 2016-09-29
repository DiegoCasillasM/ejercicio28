/*
INICIO
    a:=5:ENTERO
    d:=3:ENTERO
    MIENTRAS a<d ENTONCES
        ESCRIBIR "a es diferente de d"
        a:=a-1
    FIN MIENTRAS

FIN
*/

void main()
{
    int a=5,d=3;
    while(a<d)
    {
        printf("a es diferente de d");
        a=a-1;
    }
    for(a=5;a<d;a--)
    {
        printf("a es diferente de d");
    }
    a=5;
    do
    {
        printf("a es diferente de d");
        a--;
    }
    while(a<d);
}


printf("a es diferente de d")


