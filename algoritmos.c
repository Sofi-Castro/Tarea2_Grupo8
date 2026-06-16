/*
 * algoritmos.c
 * IE-0117 - Tarea en clase: Ordenamiento y Búsqueda
 *
 * Implementar las funciones asignadas en este archivo.
 * No modificar algoritmos.h ni main.c.
 */

#include "algoritmos.h"

/* ── Ordenamiento ─────────────────────────────────────── */

void bubble_sort(int *arr, int n) {

    for (int i=0; i < (n-2); i++){
        for (int j=0; j < (n-i-2); j++){
            if (*(arr+j) > *(arr+j+1)){
                int tmp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = tmp;
            }
        }
        
    }

}

void selection_sort(int *arr, int n) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
}

void insertion_sort(int *arr, int n) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
}

/* ── Búsqueda ─────────────────────────────────────────── */

int busqueda_lineal(int *arr, int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == valor)
            return i;
    }
    return -1;
}

int busqueda_binaria(int *arr, int n, int valor) {
    /* TODO: implementar */

    int izq = 0;
    int der = n - 1;
    int mid;

    while(izq <= der){
        mid = izq + (der - izq) / 2;

        // encontro el valor
        if (arr[mid] == valor)return mid;
        
        
        else if(arr[mid] < valor) izq = mid + 1;

        
        else der = mid - 1;

    }

    // no lo encontro
    return -1;
}

int buscar_ocurrencias(int *arr, int n, int valor, int *posiciones) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
    (void)valor;
    (void)posiciones;
    return 0;
}
