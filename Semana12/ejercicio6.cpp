#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona {
 char rut[12];
 int edad;
 char nombre[255];
 };

// Declaración de tabla y creación del archivo con el que se vá a trabajar
void create_table_personas()
{
    FILE *principal_file, *test_file;

    principal_file = fopen ("archivo.dat", "wb");
    if (principal_file==NULL)
        printf ("No se pudo crear el archivo \n");

    fclose(principal_file);

    test_file = fopen ("archivo.dat", "rb");
    if (test_file==NULL)
        printf ("No se pudo abrir el archivo \n");
    rewind(test_file);
}

// Inserción en la tabla
void insert_into_table()
{
    int menu2_on = 1;

    struct persona avance;

    FILE *save_file;

    save_file = fopen ("archivo.dat", "r+wb");

    fread (&avance, sizeof(struct persona), 1, save_file);

    if (avance.edad == 0)
        rewind(save_file);

    do {
        do {
            fread (&avance, sizeof(struct persona), 1, save_file);
        } while (!feof(save_file));

        struct persona data_save;

        printf("Rut de la persona \n");
        scanf("%*c%[^n]",data_save.rut);
        printf("Edad de la persona \n");
        scanf("%d", &data_save.edad);
        printf("Nombre de la persona \n");
        scanf("%*c%[^n]",data_save.nombre);

        fwrite (&data_save , 1 , sizeof(struct persona) , save_file);

        printf("¿Desea agregar otra tupla? (1 Si, 0 No)\n");
        scanf("%d", &menu2_on);

    } while (menu2_on == 1);

    fclose(save_file);

    struct persona junior;
    FILE  *test_file;

    test_file = fopen ("archivo.dat", "rb");
    if (test_file==NULL)
        printf ("No se pudo abrir el archivo\n");

    printf("Rut              Edad   Nombre\n");
    printf("--------------------------------------------------------------------\n");
    while (!feof(test_file))
    {
        fread (&junior, sizeof(struct persona), 1, test_file);

        printf("%s     %d     %sn", junior.rut, junior.edad, junior.nombre);

    }
}

// Función: Consulta por edad //
void attribute_age()
{
    FILE *checker;

    struct persona temporal;

    int edad_consulta;

    printf("Inserte la edad a consultar\n");
    scanf("%d",&edad_consulta);

    checker = fopen ("archivo.dat", "rb");
    if (checker==NULL)
        printf ("No se pudo abrir el archivo\n");
    rewind(checker);

    printf("Rut              Edad   Nombre\n");
    printf("--------------------------------------------------------------------n");
    do {

        fread (&temporal, sizeof(struct persona), 1, checker);

         if (edad_consulta == temporal.edad)
        {

            printf("%s     %d     %sn", temporal.rut,  temporal.edad, temporal.nombre);
         }

    } while (!feof(checker));

}

// Función: Consulta por nombre
void attribute_name()
{
    FILE *checker2;

    struct persona temporal2;

    char nombre_consulta[255];

    printf("Inserte el nombre a consultar\n");
    scanf("%*c%[^n]",nombre_consulta);

    checker2 = fopen ("archivo.dat", "rb");
    if (checker2==NULL)
        printf ("No se pudo abrir el archivo\n");
    rewind(checker2);

    printf("Rut              Edad   Nombren");
    printf("--------------------------------------------------------------------n");
    do {

        fread (&temporal2, sizeof(struct persona), 1, checker2);

         if (nombre_consulta == temporal2.nombre)
        {

            printf("%s     %d     %sn", temporal2.rut, temporal2.edad, temporal2.nombre);
         }

    } while (!feof(checker2));

}

// Función: Consulta por rut
void attribute_rut()
{
    FILE *checker3;

    struct persona temporal3;

     char rut_consulta[12];

    printf("Inserte el rut a consultar\n");
    scanf("%*c%[^n]",rut_consulta);

    checker3 = fopen ("archivo.dat", "rb");
    if (checker3==NULL)
        printf ("No se pudo abrir el archivo\n");
    rewind(checker3);

    printf("Rut              Edad   Nombre\n");
    printf("--------------------------------------------------------------------\n");
    do {

        fread (&temporal3, sizeof(struct persona), 1, checker3);

         if (rut_consulta == temporal3.rut)
        {

            printf("%s     %d     %sn", temporal3.rut, temporal3.edad, temporal3.nombre);
         }

    } while (!feof(checker3));

}

// Función: Consulta completa
void generate_full()
{
    FILE *checker4;

    struct persona temporal4;

    checker4 = fopen ("archivo.dat", "rb");
    if (checker4==NULL)
        printf ("No se pudo abrir el archivo\n");
    rewind(checker4);

    printf("Rut              Edad   Nombre\n");
    printf("--------------------------------------------------------------------\n");
    do {

        fread (&temporal4, sizeof(struct persona), 1, checker4);
        printf("%s     %d     %sn", temporal4.rut, temporal4.edad, temporal4.nombre);

    } while (!feof(checker4));
}


// Menú secundario de búsqueda por atributo,
void attribute_search()
{
    int menu3_option;

    do {

    printf("1 Consulta por rut\n");
    printf("2 Consulta por nombre\n");
    printf("3 Consulta por edad\n");
    printf("4 Generar listado completo\n");
        scanf("%d", &menu3_option);

    switch (menu3_option)
        {
            case 1: printf("n");
                attribute_rut();
                break;
            case 2: printf("n");
                attribute_name();
                break;
            case 3: printf("n");
                attribute_age();
                break;
            case 4: printf("n");
                generate_full();
                break;
            default:
                    printf("Opcion invalida\n");
                break;
        }

    } while ((menu3_option < 1) || (menu3_option > 4));
}

// Opciones de menú
int menu_option, menu_on = 1;

// Menú principal
int main ()
{
    do {


        do {
            printf("n");
            printf("1 Crear tabla\n");
            printf("2 Insertar tuplas\n");
            printf("3 Ver contenido\n");
            scanf("%d", &menu_option);

            switch (menu_option)
            {
                case 1: printf("n");
                    create_table_personas();
                    break;
                case 2: printf("n");
                    insert_into_table();
                    break;
                case 3: printf("n");
                    attribute_search();
                    break;
                default: printf("n");
                     printf("Opcion invalida\n");
                     break;
            }

        } while ((menu_option < 1) || (menu_option > 3));

        printf("¿Desea realizar otra operacion? (1 Si, 0 No)\n");
        scanf ("%d", &menu_on);

    } while (menu_on == 1);

return (0);

}
