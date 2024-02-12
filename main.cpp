#include <iostream>
#include <random>

using namespace std;

struct MNOGOGOGOOGOGOGOGOGOGOOGOGOGOGOGOGOOGOG
{
    int a = 0;
};

inline double MySqr(double x){return x*x;}

void CalcSum(int a, int b = 1){
    int c = a + b;
}

void RefExample(int& a){
    a = 1000;
}

int& ReturnRef(int a[]){
    int aa = 100;
    return a[3];
}


double Divide(double a, double b){
    if(b != 0) return a/b;
    else throw "Divide by zero";
}

enum Color {Red, Green, Blue, OtherColor};


template<typename T>
double UniDivide(T first, T second){
    if(second != 0) return (static_cast<double>(first)/second);
    else throw -1;
}


int main(){
    int* new_arr = new int[10];
    delete [] new_arr;
    int** matrix = new int*[5];
    for (int i = 0; i < 5; i++){
        matrix[i] = new int[5];
    }
    for (int i = 0; i < 5; i++){
        delete [] matrix[i];
    }
    delete [] matrix;

    // Divide(1, 0);
    try
    {
        Divide(1, 0);
    }
    catch(const char* exceptionMessage)
    {
        cout << exceptionMessage << endl;
    }
    
    int new_array_2[5] = {1,2,3,4};
    for (auto elem: new_array_2){
        cout << elem << endl;
    }

    auto mystr = MNOGOGOGOOGOGOGOGOGOGOOGOGOGOGOGOGOOGOG();
    int a = 10;
    int const * const some_p = &a; //const - const
    bool eboy = true;
    int arr[5] = {1, 2, 3, 4, 5};
    int& ref_arr = ReturnRef(arr);
    int* point_a = &a;
    int& ref_a = a;
    Color stateobject = Color::Blue;
    switch (stateobject)
    {
    case Color::Blue:
        cout << "Green" << endl;
        break;
    
    default:
        break;
    }
    int asd = 10;
    double asd_double = static_cast<double>(a);
    int asd_i = static_cast<int>(a);
    CalcSum(10);
    CalcSum(1, 2);
    RefExample(a);
    cout << a << endl;
    cout << MySqr(1.5) << endl;
    cout << "Hello world!" << endl;

    mt19937 gen;
    gen.seed(random_device()());
    uniform_int_distribution<mt19937::result_type> dist;
    cout << dist(gen) << endl;
    return 0;
}