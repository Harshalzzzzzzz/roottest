//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Fri Feb 21 05:14:56 2014 by ROOT version 5.34/16)
//      from the StreamerInfo in file cond09_mc.000029.gen.COND._0002.pool.root
//////////////////////////////////////////////////////////


#ifndef DetCondKeyTrans_h
#define DetCondKeyTrans_h
class DetCondKeyTrans;
class Eigen {};

#include "Riostream.h"
#include <map>
#include "HepGeom__Transform3D.h"
#ifdef __MAKECINT__
#pragma link C++ class pair<string,HepGeom::Transform3D >+;
#pragma link C++ class Eigen+;
#pragma link C++ class pair<string,Eigen>+;
#pragma read sourceClass="DetCondKeyTrans" version="[1-]" targetClass="DetCondKeyTrans" source="std::map<std::string,HepGeom::Transform3D> m_keytrans" target="m_keytrans" \
    code="{ if (&m_keytrans){}; /*nothing*/ }"
#endif

class DetCondKeyTrans {

public:
// Nested classes declaration.

public:
// Data Members.
   //std::vector<std::pair<std::string,HepGeom::Transform3D> > m_keytrans;    //
   std::vector<std::pair<std::string,Eigen> > m_keytrans;

   DetCondKeyTrans();
   DetCondKeyTrans(const DetCondKeyTrans & );
   virtual ~DetCondKeyTrans();

};
#endif
