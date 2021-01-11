/* Minimal supprt for reading and writing atomic data.
   --------------------------------------------------
   Author: Michele Ceriotti, 2008
   Distributed under the GNU General Public License  
*/

#ifndef __IOATOMS_H
#define __IOATOMS_H

#include "tbdefs.hpp"
#include <vector>
#include <map>

namespace toolbox {
struct AtomData {
    std::string name, molname, atlabel, group;
    double x, y, z;
    std::vector<double> props;
    std::map<std::string,double> nprops;
    AtomData() : name(""), x(0.), y(0.), z(0.), atlabel(""), molname(""), group(""), props(0),  nprops() {}
};

struct AtomFrame {
    std::string comment;
    unsigned long index;
    std::vector<AtomData> ats;
    std::vector<double> props;
    std::map<std::string,double> nprops;

    
    
};

void ReadXYZ(std::istream& istr, std::vector<AtomFrame>& frames);
bool ReadXYZFrame(std::istream& istr, AtomFrame& frames);
bool ReadDLPFrame(std::istream& istr, AtomFrame& frames);
bool ReadDLPConf(std::istream& istr, AtomFrame& frame);
bool ReadPDBFrame(std::istream& istr, AtomFrame& frames);
bool WritePDBFrame(std::ostream& ostr, AtomFrame& frame);
bool ReadXTCFrame(FILE *ifile, AtomFrame& frames);
//bool WriteXTCFrame(std::istream& istr, AtomFrame& frames);

}; //ends namespace toolbox
#endif //ends ifdef __IOATOMS_H
