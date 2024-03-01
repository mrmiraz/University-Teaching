#include <iostream>
using namespace std;

//Insertion
void insertElement(int array[], int size, int position, int element)
{
    if(position < -1 || position >= size){
        cout << "Index out of bounds.";
    }
    else{
        array[position] = element;
    }
}

//Traverse
void printArray(int array[], int size)
{
    for (int index = 0; index < size; index++) {
        cout << array[index] << " ";  // Output each element of the array
    }
}

//Search
void searchArray(int array[], int size, int target)
{
    for (int index = 0; index < size; index++)
    {
        if (array[index] == target)
        {
            cout << "Target element found!";
            return;
        }
    }
    cout << "Target element not found!";
}

//Deletion
void deleteElement(int array[], int size, int element){

    int i, j, found = 0;
    for(i = 0; i < size; i++)
    {
        if(array[i] == element)
        {
            for(j=i; j < (size-1); j++){
                array[j] = array[j+1];
            }
            found++;
        }
    }

    if(found == 0){
            array[size-1] = 0;
        cout<<"\nElement doesn't found in the Array!";
    }
    else{
        cout<<"\nElement Deleted Successfully!";
    }
    cout<<endl;
}

int main()
{
    int elements[] = { 10, 20, 30, 40 };  // Initialize an array with elements

    int arraySize = sizeof(elements) / sizeof(elements[0]);  // Calculate the size of the array

    deleteElement(elements, arraySize, 11);

    return 0;
}
