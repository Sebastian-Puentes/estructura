#include <iostream>
#include <conio.h>

using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1; // El elemento no se encontró
}

int main() {
    int numeros[50], n;

    cout << "Digite la cantidad de arreglos que quiera realizar: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Digite un digito: ";
        cin >> numeros[i];
    }

    for (int i = 0; i < n; i++) {
        cout << i << " -> " << numeros[i] << endl;
    }

    int target;
    cout << "Ingrese el numero que desea buscar: ";
    cin >> target;

    int result = binarySearch(numeros, 0, n - 1, target);
    
    if (result != -1)
        cout << "El numero " << target << " se encuentra en la posición " << result << endl;
    else
        cout << "El numero " << target << " no se encuentra en el arreglo." << endl;

    getch();
    return 0;
}

