/*
INICIO
   d:=5:ENTERO
   SELECCIONAR (d) EN
        CASO 1->
            ESCRIBIR "d es igual a 1"
        CASO 2->
            ESCRIBIR "FELICIDADES d igual a 2"
        DEFECTO ->
            ESCRIBIR "d es otra cosa"
    FIN SELECCIONAR

FIN



 */

   void main()
   {
       int d=5;
       switch (d)
       {
          case 1:
             printf("d es igual a 1");
             break;
          case 2:
             printf ("FELICIDADES d igual a 2");
             break;
          default:
             printf("d es otra cosa");

       }
   }
