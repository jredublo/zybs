

/*
 * Name: Jessica Redublo
 * Course: CSE 100
 * File: ContactNode.h
 * Descr: Header file that holds func declarations and members
 *        of contact node class.
 */



//#ifndef CONTACT_NODE_H
//#define CONTACT_NODE_H

#include <iostream>
#include <string>

//#include "ContactNode.h"

class ContactNode {
public: 
    
    ContactNode(std::string contactName, std::string phoneNumber);    // constructor
    void InsertAfter(ContactNode* nodePTR);                 // insert
    std::string GetName();               // getter for name
    std::string GetPhoneNumber();        // getter for number
    ContactNode* GetNext();         // getter for next
    void PrintContactNode();        // print funct

private:

    std::string contactName;             // name
    std::string contactPhoneNum;         // phone number
    ContactNode* nextNodePtr;       // ptr to next node in LL
};

//#endif // CONTACT_NODE_H
