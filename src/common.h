// CopyRight Stephen Morrisson 2018
// All rights reserved.


#include <iostream>
#include <map>
#include <memory>
#include <random>
#include <string>
#include <stdio.h>
#include <vector>


// dont have boost yet
//#include <boost/algorithm/string/predicate.hpp>
//#include <boost/lexical_cast.hpp>

using namespace std;

typedef vector<string> Strings;

string string_random(std::string::size_type length);
bool string_startsWith(const string& haystack, const string& needle);

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
