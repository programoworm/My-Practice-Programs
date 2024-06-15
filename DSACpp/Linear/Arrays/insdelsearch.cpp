#include <iostream>

using namespace std;

int search(int arr[], int n, int item)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == item)
            return i + 1;
    return -1;
}

int* insert(int* arr, int *n) {
    cout << "Enter the item to insert and the position to insert: ";
    int item, pos;
    cin >> item >> pos;

    if(pos>*n+1 || pos<=0){
        cout<<"Position is not in the range";
    }
    else{
        
        int *newArr=new int[*n+1];
        
        copy(arr, arr+*n, newArr);
        
        for(int i=*n+1; i>pos-1; i--)
            newArr[i]=newArr[i-1];
        
        newArr[pos-1]=item;
        
        delete[] arr;
        
        (*n)++;
        return newArr;
    }
}

int* del(int *arr, int *n) {
    if(*n<=0){
        cout<<"There are no elements to delete";
        return arr;
    }
    cout << "Enter the item to delete: ";
    int item;
    cin >> item;
    int pos=-1;
    
    for(int i=0;i<*n;i++)
        if(arr[i]==item)
            pos=i;
    if(pos==-1){
        cout<<"Item is not found"<<endl;
        return arr;
    }
    
    if(pos!=-1){
        for(int i=pos; i<*n-1; i++)
            arr[i]=arr[i+1];
        
        // for (int i = 0; i < *n; i++)
        //     cout << arr[i] << " ";
        // cout << "\n";
        
        (*n)--;
        int *newArr=new int[*n];
        
        copy(arr, arr+*n, newArr);
        //newArr[pos-1]=item;
        
        delete[] arr;
        
        return newArr;
    }
}

int main()
{
    int n=5;
    int* arr=(int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++){
        arr[i]=rand()%(100-1);
        cout << arr[i] << " ";
    }
    cout << "\n";
    while (true)
    {
        cout << "1. Insert\n2. Delete\n3. Search\n4. Exit\nEnter your choice: ";
        int ch;
        cin >> ch;
        switch (ch) {
            case 1:
                arr=insert(arr,&n);
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << "\n";
                continue;
            
            case 2: 
                arr=del(arr,&n);
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << "\n";
                continue;
            
            case 3:
                cout << "Enter the item to search: ";
                int item;
                cin >> item;
                if (search(arr, n, item) != -1)
                    cout << "Element found at position: " << search(arr, n, item) << endl;
                else
                    cout << "Element not found" << endl;
                continue;
            
            case 4:
                break;

            default:
                continue;
        }
        return 0;
    }
}