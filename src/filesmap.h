#ifndef FILESMAP_H
#define FILESMAP_H

#include <iostream>
#include <list>
#include <string>

/*
  TFileInfo = record
    FileName: string;
    Body : DWORD;
  end;
  PFileInfo = ^TFileInfo;

  TFilesMap = class(TList)
  private
    FIsSorted: Boolean;
    function Get(Index: Integer): PFileInfo;
    procedure Put(Index: Integer; Item: PFileInfo);
  public
    property Items[Index: Integer]: PFileInfo read Get write Put; default;
    function Find(const FileName: string): PFileInfo;
    destructor Destroy; override;
  end;

*/

struct TFileInfo
{

    std::string FileName;
    long Body;

} *PFileInfo;

// где-то будет определяться
//list <TFileInfo> FilesMap;


/* может в будущем понадобится
class TFilesMap
{
    public:
        TFilesMap();
        virtual ~TFilesMap();

    protected:

    private:
};
*/
#endif // FILESMAP_H
