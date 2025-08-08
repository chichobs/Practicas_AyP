Aquí está el código corregido sin comentarios:

```cpp
// Ejercicio_1

/*
Haga una función que tome como entrada un arreglo y retorne el máximo valor del mismo;
*/

int valorMaximo(int *arr, int n){

    int max = arr[0];

    for (int i = 1; i < n; i++){
        if(max < arr[i]) max = arr[i];
    }

    return max;
}

//==========================================================

// Ejercicio_2

/*
Haga una acción que tome como entrada un arreglo A y un entero N y retorne (usando parámetros por referencia) el número de elementos de A mayores a N y su promedio;
*/

void promedio(int *arr, int n, int a, int &elem, int &x){

    int cont = 0;
    elem = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] > a){
            elem += arr[i];
            cont++;
        }
    }

    if(cont != 0) x = elem / cont; 
}

//==========================================================

// Ejercicio_3

/*
Haga una función que tome como entrada un string y retorne verdadero si es capicúa;
*/

bool palindrome(char *tex){

    int n = strlen(tex);
    int cont = 0;
    char rtex[100];

    for(int i = 0, j = n-1; i < n; i++, j--){
        rtex[i] = tex[j];
        if(rtex[i] != tex[i]) cont++;
    }

    if(cont == 0) return true;
    else return false;
}

//==========================================================

// Ejercicio_4

/*
Haga una acción que tome como entrada un arreglo de enteros y retorne (usando parámetros por referencia) el número de elementos pares e impares del arreglo;
*/

void imPar(int *arr, int ar[2], int n) {

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) ar[0]++;
        else ar[1]++;
    }
}

//==========================================================

// Ejercicio_5

/*
Haga una acción que tome como entrada un arreglo de enteros A y un elemento K y coloque K en las posiciones potencia de dos del arreglo (1, 2, 4, 8, . . .);
*/

bool potenciaDeDos(int n){
    for(int i = 0; i < 100; i++){
        if(n == pow(2, i)) return true;
    }
    return false;
}

void cambio(int *arr, int n, int k) {
    for(int i = 0; i < n; i++) {
        if(potenciaDeDos(i) == true) arr[i] = k;
    }
}

//==========================================================

// Ejercicio_6

/*
Haga una acción que tome como entrada un arreglo A de enteros y un número entero K y realice K desplazamientos circulares de A hacia la izquierda. Por ejemplo, si A = {4, 6, −1, 2} y K = 2, el valor final de A debe ser {−1, 2, 4, 6};
*/

void circularArray(int arr[8], int ar[8], int n) {
    for(int i = 0, j = n; i < 8-n; i++, j++) {
        ar[i] = arr[j];
    }
    for(int i = 8-n, j = 0; j < n; i++, j++) {
        ar[i] = arr[j];
    }
}

//==========================================================

// Ejercicio_7

/*
Dado un arreglo con valores entre 0 y 100 haga una función para determinar el valor que más se repite;
*/

void valorMasRepetido(int *arr, int *a, int n, int &num, int &numr) {
    for(int i = 0; i < n; i++) {
        a[arr[i]]++;
    }
    for(int i = 0; i < 101; i++) {
        if(a[i] > num) {
            num = a[i];
            numr = i;
        }
    }
}

//==========================================================

// Ejercicio_8

/*
Haga una función que tome como entrada un arreglo de enteros A y un número K y determine si existen dos valores de A que sumados sean iguales a K. Por ejemplo, si A = {4, −1, 6, 8, 10, 3} y K = 2, la función debe retornar verdadero ya que −1 + 3 = 2;
*/

bool sumValores(int *arr, int n, int a) {
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] + arr[j] == a) return true;
        }
    }
    return false;
}

//==========================================================

// Ejercicio_9

/*
Dados dos arreglos ordenados de enteros A y B, haga una función que permita obtener un tercer arreglo C que contenga todos los elementos de A y B ordenados. Por ejemplo, si A = {1, 4, 9} y B = {2, 5, 10, 12}, el resultado deberá ser C = {1, 2, 4, 5, 9, 10, 12};
*/

void concatenarArray(int *arr, int *arb, int *arc, int n, int m) {
    int aux;
    for(int i = 0; i < n; i++) {
        arc[i] = arr[i];
    }
    for(int i = n, j = 0; i < n+m; i++, j++) {
        arc[i] = arb[j];
    }
    for(int i = 0; i < n+m; i++) {
        for(int j = 0; j < n+m-1; j++) {
            if(arc[j] > arc[j+1]) {
                aux = arc[j];
                arc[j] = arc[j+1];
                arc[j+1] = aux;
            }
        }
    }
}

//==========================================================

// Ejercicio_10

/*
Haga una función que tome como entrada una matriz cuadrada de N×M y retorne la matriz traspuesta de M × N. Recuerde que la matriz traspuesta es aquella en donde se intercambian filas por columnas. Por ejemplo, si la matriz original es A = {{1, 5}, {2, 3}}, la función debe retornar {{1, 2}{5, 3}};
*/

int** transpuesta(int **matriz, int n, int m){
        int **Tmatriz = new int*[m];
        for(int i = 0; i < m; i++){
                Tmatriz[i] = new int[n];
        }
        for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                        Tmatriz[j][i] = matriz[i][j];
                }
        }

        return Tmatriz;
}

//==========================================================

// Ejercicio_11

/*
Haga una función que tome como entrada una matriz cuadrada y retorne la suma de los elementos de la diagonal secundaria;
*/

int sumaDiagonal(int **matriz, int n){
        int suma = 0, cont = n-1;

        for(int i = 0; i < n; i++){
                suma += matriz[i][cont];
                cont--;
        }

        return suma;
}

//==========================================================

// Ejercicio_12

/*
Haga una acción que tome como entrada una matriz (con cantidad par de filas) e intercambie las filas pares y las impares. Por ejemplo, si la matriz es {{4, 2}, {1, 2}, {6, −1}, {3, 5}}, la matriz resultante debería ser {{1, 2}, {4, 2}, {3, 5}, {6, −1}};
*/

void intercambioFilas(int **matriz, int n, int m){
        for(int i = 0; i < n; i+=2){
                for(int j = 0; j < m; j++){
                        swap(matriz[i][j], matriz[i+1][j]);
                }
        }
}
```