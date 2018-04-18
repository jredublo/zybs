

/*
 * Name: jessica elana reyes redublo
 * File: main.cpp
 * Course: cse 100 zybooks lab LLs
 * Desc: main file, prompts user for use for contact node LL
 */




#include "ContactNode.h"
//#include "ContactNode.cpp"

#include <iostream>
#include <string>

using namespace std;
int main() {

    // PERSON 1
    cout << "Person 1" << endl;
    string givenName1;
    string givenPhone1;
    cout << "Enter name:" << endl;
    getline(cin,givenName1); //cin >> givenName1;
    cout << "Enter phone number:" << endl;
    getline(cin,givenPhone1); // cin >> givenPhone1;
    cout << "You entered: " << givenName1 << ", " << givenPhone1 << endl;
    ContactNode* node1 = new ContactNode(givenName1, givenPhone1);

    cout << endl;

    // PERSON 2
    cout << "Person 2" << endl;
    string givenName2;
    string givenPhone2;
    cout << "Enter name:" << endl;
    getline(cin,givenName2);// cin >> givenName2;
    cout << "Enter phone number:" << endl;
    getline(cin,givenPhone2);// cin >> givenPhone2;
    cout << "You entered: " << givenName2 << ", " << givenPhone2 << endl;
    ContactNode* node2 = new ContactNode(givenName2, givenPhone2);    
    node2->InsertAfter(node1);

    cout << endl;

    // PERSON 3
    cout << "Person 3" << endl;
    string givenName3;
    string givenPhone3;
    cout << "Enter name:" << endl;
    getline(cin,givenName3); // cin >> givenName3;
    cout << "Enter phone number:" << endl;
    getline(cin,givenPhone3); // cin >> givenPhone3;
    cout << "You entered: " << givenName3 << ", " << givenPhone3 << endl;
    ContactNode* node3 = new ContactNode(givenName3, givenPhone3);
    node3->InsertAfter(node2);

    cout << endl;

    // PRINT OUT THE CONTACTS
    cout << "CONTACT LIST" << endl;
    node1->PrintContactNode();
    cout << endl << endl;
    node2->PrintContactNode();
    cout << endl << endl;
    node3->PrintContactNode();
    cout << endl << endl;

} // END
