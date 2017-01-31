#ifndef CONFIGMNGR_H_INCLUDED
#define CONFIGMNGR_H_INCLUDED

#include <iostream>
#include <list>
#include <string>

class TVersionInfo
{
    public:
        TVersionInfo();
        virtual ~TVersionInfo();

        void SetURL(const std::string Value);
        std::string GetURL() const;

        void SetVersion(const std::string Value);
        std::string GetVersion() const;

    protected:
    private:
        std::string URL;
        std::string FVersion;

};

typedef std::list<TVersionInfo> TVersionsList;

class TConfigMngr
{
    public:
        TConfigMngr();
        virtual ~TConfigMngr();
        TVersionsList GetVersionsList() const;
        DWORD GetVersion() const;
        std::string GetRoot() const;
        int GetVersionCount() const;
        void LoadMetadataInfo(const std::string RootText);
    protected:
    private:
        TVersionsList FVersionsList;
        DWORD FVersion;
        std::string FRoot;
        int FVersionsCount;

};




#endif // CONFIGMNGR_H_INCLUDED
