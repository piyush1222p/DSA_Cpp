#include <iostream>
int linear_search(int array[],int size,int target);
int main(){
    //linear search in an array
    
    int marks[] = {25,36,14,15,24,29};
    int target;
    int size = sizeof(marks)/sizeof(marks[0]);
    std::cout<<"Enter the Element to found: "<<std::endl;
    std::cin>>target;

    int result=linear_search(marks,size,target);

    if (result==EXIT_FAILURE)
    {
        std::cout<<"Element not found in the array"<<std::endl;
    }
    else
    {
        std::cout<<"Element found at index: "<<result<<std::endl;
    }

    return EXIT_SUCCESS;
}
int linear_search(int array[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (array[i]==target)
        {
            return i;
        }
    }
    return EXIT_FAILURE;
}