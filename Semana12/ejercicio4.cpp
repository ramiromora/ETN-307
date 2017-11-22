#include <fstream.h>
#include <stdlib.h>

int main()
{
    ifstream origen("Pruebas.txt");
    char linea[128];

    if(origen.fail())
    cerr << "Error al abrir el archivo Pruebas.txt" << endl;
    else
    {
        ofstream destino("Copia.txt", ios::noreplace);
        if(destino.fail())
        cerr << "Error al crear el archivo: Copia.txt" << endl;
        else
        {
            while(!origen.eof())
            {
                origen.getline(linea, sizeof(linea));
                if(origen.good()) // si lectura ok y
                if(origen.eof())  // si eof, -> termina
                exit(1);          // el programa
                else
                destino << linea << endl;
                if(destino.fail())
                {
                    cerr << "Fallo de escritura en archivo" << endl;
                    exit(1);
                }
            }
        }
        destino.close();
    }
    origen.close();

    return 0;
} 
