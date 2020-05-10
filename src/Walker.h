// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __WALKER_H__
#define __WALKER_H__

#include "CppBase.h"

class Walker : public CppBase
{
 public:
  Walker();
  virtual ~Walker() {}

  // if attrName is null then top level.
  virtual CppBase* walk(string attrName, CppBase* subj, CppBase* other);
  
 private:
  typedef CppBase __super;
};

/** DumpWalker does not use other param.
 */
class DumpWalker : public Walker
{
 public:
  DumpWalker(string prefix);
  virtual CppBase* walk(string attrName, CppBase* subj, CppBase* other);

 protected:
  string m_prefix;
  
 private:
  typedef Walker __super;
};

#endif //  __WALKER_H__

