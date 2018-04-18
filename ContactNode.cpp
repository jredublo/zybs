
/*
 * Name: Jessica Elana Reyes Redublo
 * Course: CSE 100
 * File: ContactNode.cpp
 * Descr: Holds ContactNode class function definitions.
 */


#ifndef CONTACT_NODE_H
#define CONTACT_NODE_H

#include <string>
#include <iostream>

#include "ContactNode.h"


using namespace std;

/** Constructor with paramaters name and phone number */
ContactNode::ContactNode(string contactName, string phoneNumber) {
    this->contactPhoneNum = phoneNumber;
    this->contactName = contactName;
    this->nextNodePtr = NULL;
}


/** Insert method to insert this node after given node TODO */
void ContactNode::InsertAfter(ContactNode* nodePTR) {
    ContactNode* nodeLoc = nodePTR;
    ContactNode* nodeLocNex = nodePTR->GetNext();
    this->nextNodePtr = nodeLocNex;
    nodeLoc->nextNodePtr = this;
}


/** Getter for name of current Node */
string ContactNode::GetName() {
    return contactName;
}


/** Getter for phone number of current node */
string ContactNode::GetPhoneNumber() {
    return contactPhoneNum;
}


/** Getter for next node */
ContactNode* ContactNode::GetNext() {
    return nextNodePtr;
}


/** Print function */
void ContactNode::PrintContactNode() {
    cout << "Name: " << GetName() << endl;
    cout << "Phone number: " << GetPhoneNumber();
}

#endif

