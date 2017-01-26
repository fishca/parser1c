#ifndef PARSERDATA_H_INCLUDED
#define PARSERDATA_H_INCLUDED

#include <iostream>
#include <list>
#include <string>

/*
const
  FolderID           = 'Folder';
  FileID             = 'File';
  ParserDataFileName = 'ParserData.txt';
  GUID_Field_No      = 0;
  Path_Field_No      = 1;
  FileType_Field_No  = 2;
  Version_Field_No   = 3;
  Dir_Field_No       = 4;
  CodePage_Field_No  = 5;

  CParserFileExt    = '.psi'; { расширение файла с информацией о размещении потока в файле конфигурации }
*/
const std::string FolderID           = "Folder";
const std::string FileID             = "File";
const std::string ParserDataFileName = "ParserData.txt";
const std::string CParserFileExt     = ".psi"; // расширение файла с информацией о размещении потока в файле конфигурации

const int GUID_Field_No      = 0;
const int Path_Field_No      = 1;
const int FileType_Field_No  = 2;
const int Version_Field_No   = 3;
const int Dir_Field_No       = 4;
const int CodePage_Field_No  = 5;

enum TSortMode {smNone, smByGUID, smByPath, smByDir};

typedef struct
{

    std::string GUID;
    std::string Path;
    std::string Dir;
    std::string CodePage;
    std::string Version;
    bool IsFolder;

} TFileInfo_;

TFileInfo_ *PFileInfo_;

/*

  TFileInfoList = class(TList)
    function Get(Index: Integer): PFileInfo;
    procedure Put(Index: Integer; Item: PFileInfo);
  private
    FSortedWithMode: TSortMode;
  public
    property Items[Index: Integer]: PFileInfo read Get write Put; default;
    property SortedWithMode : TSortMode read FSortedWithMode;
    procedure EmptyData;
    procedure SortByMode(mode : TSortMode);
    function DataAsStrings : TStringList;
    function ItemIndex(const SearchStr : string; SearchMode : TSortMode) : Integer;
    function FindItem(const SearchStr : string; SearchMode : TSortMode) : PFileInfo;
    procedure LoadFromFile(const FileName : string);
    constructor Create;
    destructor Destroy; override;
  end;


*/

class TFileInfoList
{
    public:
       TFileInfoList();          // конструктор
       virtual ~TFileInfoList(); // деструктор
       TFileInfo_ *Get(int index);
       void Put(int Index, TFileInfo_ *Item);
    private:
       list<TFileInfo_> Items;
       TSortMode FSortedWithMode;

};

#endif // PARSERDATA_H_INCLUDED
