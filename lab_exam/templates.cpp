#include <iostream>

using namespace std;


/**
 * @brief The Templates class
 * The idea here is to pass data types as a parameter
 * so that we don't need to write the same code for different
 * data types.
 *
 */

class Templates {

    /**
 * Function Template Example:
 */
    template <typename T>
    T myMax(T x, T y) {
        return (x > y)? x: y;
    }

    int t_main() {
        // Function Template Example:

        // myMax<int>(3, 7);
        // myMax<double>(3.0, 7.0);
        // myMax<char>('g', 'e');

        return 0;
    }
    /**
     * Class Template Example
     * (This is shit that goes in the header
     */
    template <typename T>
    class Array {

    private:
        T *ptr;
        int size;

    public:
        Array(T arr[], int s);
        void print();
    };

    /**
     * Class Template
     * Implement the methods defined above
     */
    template <typename T>
    Array<T>::Array(T arr[], int s) {
        ptr = new T[s];
        size = s;
        for (int i = 0; i < size; i ++)
            ptr[i] = arr[i];
    }

    template <typename T>
    void Array<T>::print() {
        for (int i = 0; i < size; i ++) {
            cout<<"  "<<*(ptr+i);
        }
        cout<<endl;
    }

    int c_main() {
        int arr[5] = {1, 2, 3, 4, 5};
        Array<int> a(arr, 5);
        a.print();

        return 0;
    }
};







