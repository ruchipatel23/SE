#include <iostream>

int main() {
    int n;

    // Asking user for the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];  
    int sum = 0;

    
    
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];  
        sum += arr[i];       
    }

   
   
    double average = static_cast<double>(sum) / n;

    
    
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Average = " << average << std::endl;

    return 0;
}

