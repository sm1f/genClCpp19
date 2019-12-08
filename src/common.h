// CopyRight Stephen Morrisson 2018
// All rights reserved.


#include <iostream>
#include <map>
#include <memory>
#include <random>
#include <string>
#include <stdio.h>


// dont have boost yet
//#include <boost/algorithm/string/predicate.hpp>
//#include <boost/lexical_cast.hpp>

using namespace std;

string random_string(std::string::size_type length);

/* loggin/tracing/jotting code JOT  */

/*
#define JOT_TRACE_LEVEL 1
#define JOT_DEBUG_LEVEL 2
#define JOT_WARN_LEVEL 3
#define JOT_ERROR_LEVEL 4


#ifndef JOT_ON
#define JOT_ON JOB_WARN_LEVEL
#endif // JOT_ON

#if JOT_ON >= 1
#define JOT_TRACE(TEXT) cout << __FILE__ << ":" << __LINE__ << " " TEXT << endl;
#else  // JOT_ON  >= 1
#define JOT_TRACE(TEXT)
#endif // JOT_ON  >= 1

*/
