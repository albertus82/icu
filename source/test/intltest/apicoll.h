/*
*****************************************************************************************
*                                                                                       *
* COPYRIGHT:                                                                            *
*   (C) Copyright Taligent, Inc.,  1997                                                 *
*   (C) Copyright International Business Machines Corporation,  1997-1998               *
*   Licensed Material - Program-Property of IBM - All Rights Reserved.                  *
*   US Government Users Restricted Rights - Use, duplication, or disclosure             *
*   restricted by GSA ADP Schedule Contract with IBM Corp.                              *
*                                                                                       *
*****************************************************************************************
*/

/**
 * CollationAPITest is a third level test class. This test performs API 
 * related tests for the Collation framework.
 */

#ifndef _APICOLL
#define _APICOLL

#ifndef _UTYPES
#include "utypes.h"
#endif

#ifndef _COLL
#include "coll.h"
#endif

#ifndef _TBLCOLL
#include "tblcoll.h"
#endif

#ifndef _INTLTEST
#include "intltest.h"
#endif

class CollationAPITest: public IntlTest {
public:
    void runIndexedTest( int32_t index, bool_t exec, char* &name, char* par = NULL );
    void doAssert(bool_t condition, const char *message);

    /**
     * This tests the properties of a collator object.
     * - constructor/destructor
     * - factory method createInstance
     * - compare and getCollationKey
     * - get/set decomposition mode and comparison level
     * - displayable name in the desired locale
     */
    void TestProperty( char* par );

    /**
     * This tests the properties of a rule based collator object.
     * - constructor/destructor
     * - == and != operators
     * - clone and copy
     * - collation rules access
     */
    void TestOperators( char* par );

    /**
     * This tests the duplication of a collator object.
     */
    void TestDuplicate( char* par );

    /**
     * This tests the comparison convenience methods of a collator object.
     * - greater than
     * - greater than or equal to
     * - equal to
     */
    void TestCompare( char* par );

    /**
     * This tests the hashCode method of a collator object.
     */
    void TestHashCode( char* par );

    /**
     * This tests the collation key related APIs.
     * - constructor/destructor
     * - Collator::getCollationKey
     * - == and != operators
     * - comparison between collation keys
     * - creating collation key with a byte array and vice versa
     */
    void TestCollationKey( char* par );

    /**
     * This tests the CollationElementIterator related APIs.
     * - creation of a CollationElementIterator object
     * - == and != operators
     * - iterating forward
     * - reseting the iterator index
     * - requesting the order properties(primary, secondary or tertiary)
     */
    void TestElemIter( char* par );

    /**
     * This tests the list the all available locales.
     */
    void TestGetAll( char* par );

private:
    // static constants
    enum EToken_Len { MAX_TOKEN_LEN = 128 };

};
#endif
