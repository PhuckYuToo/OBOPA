//CanCode(TM)

// [X] - Maak een template functie die array's kan sorteren:
//      - array van strings
//      - array van floats

// [X] - Maak een template class die Queue-semantiek implementeert
//      - put() functie: element toevoegen aan einde
//      - get() functie: element ophalen van 't begin
//      - size() functie: aantal elementen
//          Print tussendoor de Queue om te testen

//  Ga uit van voorzetje (int main() )
//  Maak gebruik van functies & classes van <algorithm> en <functional>
// - Vectoren te bewerken:
//      - Waardes verwijderen, veranderen
// - Geaggregeerde functie over alle waarden in vector
//      - gemiddelde, som, product

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "Queue.h"
#include <numeric>

using namespace std;

void printLine() {
    cout << endl << "==============================================" << endl;
}
void printOpdr(int i) {
    printLine();
    cout << "Opdracht " << i << endl << "==============================================" << endl;
}
template <typename T>
void printArr(T arr[]) {
    cout << endl;
    for(auto i : *arr) {
        cout << i << endl;
    }
    cout << endl;
}

template <typename T>
void swapValues(T& i1, T& i2) {
    T temp = i1;
    i1 = i2;
    i2 = temp;
}

template <typename T, size_t len>
void sortArr(T (&arr)[len]) {
    for(int i = 0; i < len; i++) {
        if(i > 0 && arr[i - 1] > arr[i])
        {
            swapValues(arr[i], arr[i-1]);
            sortArr(arr);
        }
    }
}

bool IsNegative(int i) {return (i < 0);}
bool IsEven(int i) {return i % 2 == 0;}

int main() {
    //Opdracht 1
    printOpdr(1);

    cout << "Manieren om te sneuvelen:" << endl << endl;

    string manierenOmTeSneuvelen[]{"Te veel ademen", "Koken in de zon", "Advanced Coding", "Crocs met sokken", "Ananas op pizza", "Teen stoten"};
    float floats[]{0.5f, 0.22f, 0.137f, 8.5f, 5.3f, 7.77f, 1.2f, 2.4f, 3.6f, 2.75f};

    cout << "BEFORE SORTING:" << endl;
    printArr(&manierenOmTeSneuvelen);
    sortArr(manierenOmTeSneuvelen);
    cout << "AFTER SORTING:" << endl;
    printArr(&manierenOmTeSneuvelen);
    printLine();
    cout << "BEFORE SORTING:" << endl;
    printArr(&floats);
    sortArr(floats);
    cout << "AFTER SORTING:" << endl;
    printArr(&floats);


    //Opdracht 2
    printOpdr(2);
    Queue<int> queue;

    queue.put(8);
    queue.put(4);
    queue.put(4);
    queue.put(16);
    queue.put(4200);
    queue.put(572);
    queue.put(444);
    queue.put(26);
    queue.put(1);
    queue.put(-42);

    cout << endl << "Queue Size: " << queue.size() << endl;
    printLine();
    cout << endl << "Queue get() returned value: " << queue.get() << endl;

    queue.print();
    cout << endl << "Queue Size: " << queue.size() << endl;

    printOpdr(3);
    {
        vector<string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
        // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE kopie van deze vector)
        // [X] 1) de vector in 2 nieuwe vectoren te splitsen, 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na
        // [X] 2) alle elementen UPPERCASE te maken.
        // [X] 3) alle dubbele te verwijderen

        cout << "Original vector:" << endl << endl;
        for (auto a : colours) cout << a << endl;

        printLine();

        cout << "3.1)" << endl << endl;
        vector<string> colours1 = colours;
        sort(colours1.begin(), colours1.end());
        vector<string> col1(colours1.begin(), find(colours1.begin(), colours1.end(), "purple"));
        vector<string> col2(find(colours1.begin(), colours1.end(), "purple"), colours1.end());

        for (auto a : col1) cout << a << endl;
        cout << endl;
        for (auto b : col2) cout << b << endl;

        printLine();
        cout << "3.2)" << endl << endl;

        for (auto &a : col1) {
            for (auto &b : a) b = toupper(b);
            cout << a << endl;
        }
        cout << endl;

        for (auto &b : col2) {
            for (auto &c : b) c = toupper(c);
            cout << b << endl;
        }

        printLine();
        cout << "3.3)" << endl << endl;

        unique(col1.begin(), col1.end());
        unique(col2.begin(), col2.end());

        col1.resize(4);
        for (auto a : col1) cout << a << endl;
        cout << endl;
        for (auto a : col2) cout << a << endl;
    }

    printOpdr(4);

    vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
    // [X] 1) alle negatieve elementen te verwijderen
    // [X] 2) voor alle elementen te bepalen of ze even of oneven zijn
    // [X] 3) de som, het gemiddelde, en het product van alle getallen te berekenen

    cout << "Original vector:" << endl << endl;
    for (auto a : numbers) cout << a << endl;

    printLine();
    cout << "4.1)" << endl << endl;

    vector<double> nums1 = numbers;

    remove_if(nums1.begin(), nums1.end(), IsNegative);
    nums1.resize(7);
    for (auto a : nums1) cout << a << endl;

    printLine();
    cout << "4.2)" << endl << endl;
    replace_if(nums1.begin(), nums1.end(), IsEven, 1);
    for (auto a : nums1) cout << a << endl;

    printLine();
    cout << "4.3)" << endl << endl;
    double som = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum: " << som << endl;

    double product = accumulate(numbers.begin(), numbers.end(), 1, multiplies<double>());
    cout << "Product: " << product << endl;

    double average = accumulate(numbers.begin(), numbers.end(), 0)/numbers.size();
    cout << "Average: " << average << endl;

    printLine();

    return 0;
}