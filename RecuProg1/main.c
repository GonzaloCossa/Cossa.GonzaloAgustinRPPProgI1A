#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*  1. Dada  una estructura ePais cuyos campos son id(int), nombre(20 caracteres),
    infectados(int), recuperados(int) y muertos(int). Desarrollar una función llamada
    actualizarRecuperados que reciba el país y los recuperados del dia y que acumule estos a
    los que ya tiene el país. La función no devuelve nada.


    2. Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro
    y su responsabilidad es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU

    3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
    y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena. Ejemplo si le pasamos
    "algoritmo" la deja como "agilmoort"
*/

int main()
{
    void actualizarRecuperados(ePais pais, int recuperados)
    void invertirCadena(char cadena[])
    int ordenarCaracteres(char cadena[])

    typedef struct{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
    }ePais;


    void actualizarRecuperados(ePais pais, int recuperados)
    {
        if(pais != NULL && recuperados >= 0)
        {
            pais.recuperados += recuperados;
        }
    }

    void invertirCadena(char cadena[])
    {
        int longitud = strlen(cadena);
        int i;
        for (i = 0; i < strlen(cadena) / 2; i++)
        {
            char temporal = cadena[i];
            cadena[i] = cadena[longitud - i - 1];
            cadena[longitud - i - 1] = temporal;
        }
    }

    int ordenarCaracteres(char cadena[])
    {
        int todoOk = 0;
        int tam = strlen(cadena);
        if(cadena != NULL)
        {
            for(int i = 0; i < tam - 1; i++)
            {
                 for(int j = i + 1; j < tam; j++)
                 {
                     if(strcmp(cadena[i],cadena[j]) > 0)
                     {
                        aux = cadena[i];
                        cadena[i] = cadena[j];
                        cadena[j] = aux;
                     }
                 }
            }
        }
        return todoOk;
    }
}
