#include <iostream>
#include <array>


//array pass by reference to multiply values by 2
void doubleValues(std::array<int, 5>& arr) 
{
    for (size_t i = 0; i < arr.size(); ++i) 
    {
        arr[i] = arr[i] * 2;
    }
}

int main() {
    // Variables
    int sensorCount = 3;
    double voltage = 3.3;
    const int maxValue = 1023;

    // References
    int& refCount = sensorCount;
    refCount += 2;

    int temp1 = 1;
	int temp2 = 2;
    std::cout << temp1 << " " << temp2 << std::endl;

	int& temp1REF = temp1; //reference to temp1
	int& temp2REF = temp2; //reference to temp2
   
    int swaptemp = temp1REF; //swap using the references 
	temp1REF = temp2REF;
	temp2REF = swaptemp;

	std::cout << temp1 << " " << temp2 << std::endl;

    // Pointers
	double* vPtr = &voltage; //basic declaration of pointer, double* indicates double pointer, and &voltage gets the mem. address of voltage
	*vPtr = 3.7; //dereferencing pointer to change the value at that address

    int ptrTemp1 = 1;
    int ptrTemp2 = 2;
    std::cout << ptrTemp1 << " " << ptrTemp2 << std::endl;

	int* ptr1 = &ptrTemp1; //pointer to ptrTemp1
	int* ptr2 = &ptrTemp2; //pointer to ptrTemp2

	int ptrswaptemp = *ptr1; //swap using pointers, need to dereference to get the value
	*ptr1 = *ptr2;
	*ptr2 = ptrswaptemp;
	std::cout << ptrTemp1 << " " << ptrTemp2 << std::endl;



    // Array
    //added second array here:
    std::array<char, 5> sensorID = { 'A', 'B', 'C', 'D', 'E' };
	for (auto id : sensorID) std::cout << id << "   ";
    std::cout << std::endl;


    //original array
    std::array<int, 5> readings = { 100, 200, 300, 400, 500 };
    for (auto r : readings) std::cout << r << " ";
    std::cout << std::endl;
     
    std::cout << "Sensor count: " << sensorCount << ", voltage: " << voltage << std::endl;

	doubleValues(readings); //multiply values by 2

    for (auto id : sensorID) std::cout << id << "   ";
    std::cout << std::endl;


    //original array
    for (auto r : readings) std::cout << r << " ";
    std::cout << std::endl;

    std::cout << "Sensor count: " << sensorCount << ", voltage: " << voltage << std::endl;

}

