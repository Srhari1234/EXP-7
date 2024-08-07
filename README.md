# Experiment-7

# Aim: 
To study and implement C++ Arrays and Strings

# Theory: 
In C++, arrays are collections of elements of the same type stored in contiguous memory locations, accessible via indices. Arrays have a fixed size, defined at declaration, and elements are stored sequentially in memory, enabling efficient access. Strings in C++ can be managed as C-style strings, which are arrays of characters terminated by a null character ('\0'), or more flexibly using the string class from the Standard Library. The string class offers dynamic sizing, robust built-in functions, and automatic memory management, making it a safer and more convenient option for handling text.

# 1. Creating Array Declaration: 
~~~
//Name: Srihari Nair
//Prn: 23070123131
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

<img width="415" alt="image" src="https://github.com/user-attachments/assets/2050b287-4ea4-4bcd-b9bf-94dbe7674155">

# 2. Reversing An Array: 
~~~
//Name: Srihari Nair
//Prn: 23070123131
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

<img width="477" alt="image" src="https://github.com/user-attachments/assets/cdf02a7e-9c49-4e4e-a7f3-34c1f28c2fea">

# 3. Creating Input Output: 
~~~
//Name: Srihari Nair
//Prn: 23070123131
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

<img width="481" alt="image" src="https://github.com/user-attachments/assets/4177a29e-0b49-4552-b9af-55fe873354b6">

# 4. Array Addition And Average: 
~~~
//Name: Srihari Nair
//Prn: 23070123131
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

<img width="512" alt="image" src="https://github.com/user-attachments/assets/ae25e6ff-50d6-49c3-995b-22fbb2872a4e">

# 5. Find Max And Min: 
~~~
//Name: Srihari Nair
//Prn: 23070123131
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

<img width="464" alt="image" src="https://github.com/user-attachments/assets/5fd41e39-eac9-4710-a897-11885a28b3c3">

# 6. Search: 
~~~
//Name: Srihari Nair
//Prn: 23070123131
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

<img width="454" alt="image" src="https://github.com/user-attachments/assets/42f31887-14d2-4783-b2b6-e980e790ba4d">

# Conclusion:

Mastering arrays and strings in C++ is crucial for efficient data manipulation. Arrays allow you to store elements of the same type in contiguous memory locations, making data management straightforward. Strings, which handle sequences of characters, can be managed using either C-strings or the more versatile std::string class from the Standard Library. While std::string offers more functionality and ease of use, understanding C-strings is important for low-level programming. Practicing with both arrays and strings will build a solid foundation and enhance your overall proficiency in C++.
