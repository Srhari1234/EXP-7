# Experiment-7

# Aim: 
To study and implement C++ Arrays and Strings

# Theory: 
An array stores a fixed-size sequential collection of elements of the same type. All arrays consist of contiguous memory locations. 
The lowest address corresponds to the first element and the highest address to the last element
To declare an array in C++, we must specify the type of elements and the number of elements required by an array −: type arrayName [ array_size ]
You can initialize C++ array elements either one by one or using a single statement as follows −: int arr[5] = {1000, 2, 3, 17, 50}
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

# 1. Creating Array Declaration: 
~~~
//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2
#include<iostream>
using namespace std;

int main()
{
    int array1[5] = {1,6,10,34,3}, array2[3] = {2,8,4}, array3[2] = {5,6};

    cout<<"traditional method"<<endl;
    for (int i=0;i<3;i++)
    {
        cout<<array1[i]<<" "<<endl;
    }

    cout<<"modern method"<<endl;
    for(int j : array2)
    {
        cout<<j<<" ";
    }
    return 0;
}
~~~
# Output: -

![WhatsApp Image 2024-08-06 at 22 43 10_5a07336c](https://github.com/user-attachments/assets/25d8aadb-6136-411a-a32c-e17eb37a7a25)

# 2. Reversing An Array: 
~~~
//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2
#include<iostream>
using namespace std;

int main() 
{
    int n, i, j=0, k, l, temp;
    cout<<"Enter size of array: ";
    cin>>n;
    int a1[n], a2[n];

    for(i=0;i<5;i++) 
    {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
    cout<<"\nArray given by user: ";
    for(l=0;l<5;l++) 
    {
        cout<<a1[l];
    }
    cout<<endl;
    for(k=4;k>=0;k--) 
    {
        temp = a1[k];
        a2[j] = temp;
        j++;
    }
    cout<<"Reversed array: ";
    for(l=0;l<5;l++) {
        cout<<a2[l];
    }
}
~~~

# Output: 

![WhatsApp Image 2024-08-06 at 22 58 37_e5b9c262](https://github.com/user-attachments/assets/89aedb80-645a-4d98-bfbf-12807a15b557)

# 3. Creating Input Output: 
~~~
//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
   
    int array[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
    return 0;
}
~~~
# Output: - 

![WhatsApp Image 2024-08-06 at 23 07 20_f81c60b3](https://github.com/user-attachments/assets/39f79266-b2a4-485f-a435-fa62c5ebfe46)

# 4. Array Addition And Average: 
~~~
//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2
#include <iostream>
using namespace std;

int main() 
{
  int numbers[] = {6,7,8,9,3,5};

  int sum = 0;
  int count = 0;
  int average;

  cout << "The numbers are: ";

  for (const int n : numbers) 
  {
    cout << n << "  ";
    sum += n;
    ++count;
  }

  cout << "Sum = " << sum << endl;

  average = sum / count;
  cout << "Their Average = " << average << endl;
  return 0;
}
~~~
# Output: 

![WhatsApp Image 2024-08-06 at 23 11 54_1d35dbd9](https://github.com/user-attachments/assets/a04aebe0-3e51-4840-862e-0fedf272c74b)

# 5. Find Max And Min: 
~~~
//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2
#include<iostream>
using namespace std;
int main() {
    int n, i, max=0;
    cout<<"number of elements: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"enter element: "<<i<<": ";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min;
}
~~~
# Output:  

![WhatsApp Image 2024-08-06 at 23 34 34_1251ecae](https://github.com/user-attachments/assets/5c245bbe-ea60-48b8-bc32-be05dd351e76)

# Search: 
~~~
//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2
#include<iostream>
using namespace std;
int main() 
{
    int marks[5];
    int num, count = 0;

    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "Enter element to be searched: ";
    cin >> num;

    for (int i = 0; i < 5; i++) 
    {
        if (marks[i] == num) 
        {
            cout << "Position of " << num << ": " << i + 1 << endl;
            count++;
        }
    }

    if (count == 0) {
        cout << "Element not present" << endl;
    } else {
        cout << "Element is present: " << count << " times" << endl;
    }

    return 0;
}
~~~
# Output: 

![WhatsApp Image 2024-08-06 at 23 35 13_03e2b5c5](https://github.com/user-attachments/assets/7b324ece-4e50-4c4d-aa18-a13cb6a476a1)

# Conclusion:
