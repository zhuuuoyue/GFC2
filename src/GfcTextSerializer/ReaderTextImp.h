#ifndef READERTEXTIMP_H
#define READERTEXTIMP_H

#include "ReaderImp.h"
#include <map>
#include <fstream>
using namespace std;
namespace glodon {
namespace objectbuf {

class Reader;
class EntityTextSerializer;

class ReaderTextImp: public ReaderImp
{
public:
    ReaderTextImp();
    virtual ~ReaderTextImp(void);
    virtual bool read(const string& sFileName, Document* pDoc, std::vector<std::string>& errors);
    virtual bool preRead(const string& sFileName);
	string projectId(const string& sFileName);
    void setSchemaPath(const std::string& sSchemaPath) { m_sSchemaPath = sSchemaPath; }
    void setRemote(const std::string& sRemote) { m_sRemote = sRemote; }
private:
    string getFileSchema(fstream& in);
    bool locate(fstream& in, const string& sWord);

    std::map<std::string, EntityTextSerializer*> m_oSerMap;
    std::string m_sSchemaPath;
    std::string m_sRemote;
};

}
}

#endif
