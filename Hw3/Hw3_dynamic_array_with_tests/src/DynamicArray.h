#pragma once 

namespace oop{

    class DynamicArray{

        private:

            int* data;
            int size;

        public:

            DynamicArray() : data(nullptr), size(0) {}

            // Constructor
            DynamicArray(int size, int value = 0) : size(size){
                data = new int[size];
            
                for (int i = 0; i < size; i++){
                    data[i] = value;
                
                }
            
            }
    
            // Copy Constructor
            DynamicArray(const DynamicArray& other) : size(other.size){
                data = new int[size];
            
                for (int i = 0; i < size; i++){
                    data[i] = other.data[i];
            
                }
            
            }
    
            // Move Constructor
            DynamicArray(DynamicArray&& other) : data(other.data), size(other.size){
                other.data = nullptr;
            
                other.size = 0;
            
            }
    
            // Destructor
            ~DynamicArray(){
                delete[] data;
            
            }
    
            // Copy Assignment Operator
            DynamicArray& operator=(const DynamicArray& other){
                if (this != &other){
                    delete[] data;
            
                    size = other.size;
            
                    data = new int[size];
            
                    for (int i = 0; i < size; i++){
                        data[i] = other.data[i];
            
                    }
            
                }
        
                return *this;
            }
    
            // Move Assignment Operator
            DynamicArray& operator=(DynamicArray&& other){
                if (this != &other){
                    delete[] data;
        
                    size = other.size;
        
                    data = other.data;
        
                    other.data = nullptr;
        
                    other.size = 0;
        
                }
        
                return *this;
            }

            // Operator [] to access element by index
    int& operator[](int index) {
        return data[index];
    }

    const int& operator[](int index) const {
        return data[index];
    }

    // Concatenation operator +
    DynamicArray operator+(const DynamicArray& other) const {
        DynamicArray result(size + other.size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i];
        }
        for (int i = 0; i < other.size; i++) {
            result.data[size + i] = other.data[i];
        }
        return result;
    }

    // Friend function for stream insertion (<< operator)
    friend std::ostream& operator<<(std::ostream& os, const DynamicArray& arr) {
        for (int i = 0; i < arr.size; i++) {
            os << arr.data[i] << " ";
        }
        return os;

    }
    
    };
}