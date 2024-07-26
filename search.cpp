 #include<iostream>
#include<string>

using namespace std;

int searchname(string addressbook[], int size, string name)
//function searchname is used to get the index
 {
    for (int i = 0; i < size; i++) {
        if (addressbook[i] == name) {
            return i; // Return the index when the name is found
        }
    }
    return -1; // Return -1 if the name is not found

}

int main() {
    int pos;
    string addressbook[] = {"Paul", "Mary", "Isaac", "Jeff", "Jess", "Peter", "Pany", "Dona", "Will"};
    int size = sizeof(addressbook) / sizeof(addressbook[0]);
    int index;
    string names;
    cout << "Please enter the contact name you are looking for" << endl;
    getline(cin, names);
    index = searchname(addressbook, size, names);
    pos=index+1;
    if (pos != -1) {
        cout << names << " is the element number " << pos << endl << "and his contact is";
    } else {
        cout << "The name isn't in the address book";
    }
    return 0;
}
