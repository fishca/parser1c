#ifndef STORAGE_H_INCLUDED
#define STORAGE_H_INCLUDED

#include <iostream>
#include <list>
#include <string>
#include <fstream>

#include "storageutils.h"

const std::string AppModuleGUID = ".0";
const std::string AppModuleID = "����������������";

const std::string ConfigLogoGUID = ".1";
const std::string ConfigLogoID   = "�������";

const std::string ConfigSplashGUID = ".2";
const std::string ConfigSplashID   = "��������";

const std::string ConfigInfoGUID = ".3";
const std::string ConfigInfoID   = "��������������������";

const std::string ConfigUnknownGUID = ".4";
const std::string ConfigUnknownID   = "��������������������";

const std::string AccessModuleGUID = ".5";
const std::string AccessModuleID   = "������������������������";

const std::string CClientModuleExt = ".6";
const std::string CClientModuleID  = "����������������������������";

const std::string UserModuleGUID = ".7";
const std::string UserModuleID   = "������������������������";

const std::string TaskDescktopExt = ".8";
const std::string TaskDescktopId  = "��������������������";

const std::string TaskSubsystemsExt = ".a";
const std::string TaskSubsystemsId  = "�������������";

const std::string InterfaceClientAppExt = ".b";
const std::string InterfaceClientAppId  = "������������������������������";

const std::string PictureOsnRazdelExt = ".c";
const std::string PictureOsnRazdel    = "������������������������";

const DWORD COffsetInFileNULL = 0x7fffffff;

const DWORD CsfhSize   = 4 + 4 + 8;     // ������ ��������� StorageFileHeader 16
const DWORD CdrSize    = 4 + 4 + 4;     // ������ ��������� DirRecord         12
const DWORD CfhMinSize = 8 + 8 + 4 + 4; // ������ ��������� FileHeader        24

// ��������� ��������� ����� ������� ������ �� ������� �������
struct TChainBlockHeader
{
      char sign1[2];
      TOffsetInFileHex DataSize;
      TOffsetInFileHex BlockSize;
      TOffsetInFileHex NextBlock;
      char sign2[2];
};

// ���� ��� ���������� ������ ������������� ����� ��� ������� ������ � ���������
// �����, �� �� ��� ����������� ����� ��������� ����.
//const DWORD CMinFreeSize = High(DWORD) - sizeof(TChainBlockHeader);
const DWORD CMinFreeSize = UINT_MAX - sizeof(TChainBlockHeader);

// ���� ��� ���������� ������ ������������� ����� ��� ������� ������ � ���������
// �����, �� �� ��� ����������� ����� ��������� ����.

const DWORD CMinDirFreeSize = UINT_MAX - sizeof(TChainBlockHeader);
// ����������� ����� ����� ������������ ����� ��� ����� �����.

const DWORD CMinHeaderAllocSize = 1;
// ����������� ����� ����� ��� ����������� �����

const DWORD CMinContentAllocSize = 512;
//����������� ����� ����� ��� ��������

const DWORD CMinDirAllocSize = 512;
// ����������� ���������� ���� � ��������� �����.

const DWORD CFileHeaderSize = CfhMinSize;
// ������ �������, ���������� ��� ����������� ������ �������� �����.

const DWORD CLockAreaSize = CFileHeaderSize / 5;
// �������� �� ������� ����������� ���������:

const DWORD CLockAreaIn = -CLockAreaSize;

const DWORD CLockAreaOut = -2 * CLockAreaSize;

const DWORD CLockAreaDenyRead = -3 * CLockAreaSize;

const DWORD CLockAreaDenyWrite = -4 * CLockAreaSize;

const DWORD CLockAreaOpen = -5 * CLockAreaSize;
// ����� ������� �������� ������� ����� �� ����� ������� �����.

const DWORD CLockOpenMask = 0x1000;


// ��������� �����
enum TFileAttributes {faNormal, faReadOnly, faDir, faHidden, faSystem};

// ���� ���������� ��� ������ ������� �����
enum TChainException {ceSuccess, ceEndFile, ceBadSign, ceLoopChain, ceUnknown};


// ��������� ��������� ����� ������� ������ �� ���������� �������
struct TChainBlockHeaderBin
{
    int BlockOffset;
    int BlockSize;
};

//TChainBlockHeaderBinList = class(TList) �������� ��������� �� TChainBlockHeaderBin
// ���� ������������ ��� ����������, ���� ����� ����������� ������
typedef std::list<TChainBlockHeaderBin*> TChainBlockHeaderBinList;

// �������� ��������� ���������
class TStorageFileHeader
{
    public:
        // ������������
        TStorageFileHeader(DWORD AllocSize);
        TStorageFileHeader(const TStorageFileHeader &FileHeader);
        TStorageFileHeader(std::basic_ifstream<char> &RealFile);
        // �����������
        virtual ~TStorageFileHeader();
        DWORD GetFreeBlocksChain() const;
        void SetFreeBlocksChain(const DWORD Value); // �������� �� ������� ��������� ������
        DWORD GetVersion(void) const;
        void SetVersion(DWORD);
        DWORD GetMinAllocSize(void) const;

      //procedure Read(FS: TStream);  - ���� ������ ��� ��� �������
      //procedure Write(FS: TStream); - ���� ������ ��� ��� �������.
    private:
      DWORD MinAllocSize;                        // ����������� ������ ����� ��� ������ ������
      DWORD Version;                             // ������� ������ ���������
      DWORD FreeBlocksChain;

};

class TChainInFile;

// class StorageHeader - ������ � ������ ������ � ��������� Storage
class TStorageHeader
{
    public:

        bool TouchDir;                // ���������� �������� ���� ��������

        // var Header : TStorageFileHeader; RealFile : TStream; var Directory : TChainInFile; storageSize: integer
        TStorageHeader(TStorageFileHeader Header, std::basic_ifstream<char> &RealFile, TChainInFile Directory, int storageSize);
        virtual ~TStorageHeader();

    protected:

        TStorageFileHeader FpHeader;  // ��������� �� ������� �������� ���������
        TStorageFileHeader FOldValue; // ��������� ����� ��� ����� ����������� ���������
        //FRealFile : TStream;
    private:

        void SetTouchDir(const bool Value);
};

// �������� ��������� �����
class TFileHeader
{
    public:

      //property Created: TDateTime read FCreated write FCreated;
      //property Modified: TDateTime read FModified write FModified;
      //property Attributes: TFileAttrSet read FAttributes;
      //property Name: string read FName write FName;
      //property MinSize: DWORD read GetMinSize;
      TFileHeader();
      virtual ~TFileHeader();

      std::string FName;      // ��� �����

      bool Read(TChainInFile chif) const;
      bool Write(TChainInFile chif, DWORD storageSize);

    protected:
    private:
      DWORD FileCreated;      // ����� �������� �����
      DWORD FileModified;     // ����� ���������� ��������� �����
      DWORD FileAttributes;      // �������� �����

      DWORD GetMinSize(void) const;

};

// ���������� ����� � ��������
class TDirRecord
{
    public:
        TDirRecord();
        virtual ~TDirRecord();
    private:
        DWORD FHeader;
        DWORD FBody;
        DWORD FLock;
        void CvtAfterRead(void *src);
        bool Read(TChainInFile chif) const;
        bool ReadBuf(TChainInFile chif, void *Buf) const;
        void Write(TChainInFile chif, int storageSize);
        bool cvtToWrite(char *Dst) const;
};

class TChainInFile
{
    public:

        TChainInFile(std::ofstream FS);
        TChainInFile(std::ofstream FS, DWORD AllocSize, TStorageFileHeader SHeader);
        TChainInFile(std::ofstream FS, DWORD StartOffset, DWORD AllocSize, TStorageFileHeader SHeader);
        virtual ~TChainInFile();

        // ��������� ����� �� ������ �������. ���� � ��������� ����� ��� ������ �������, �� ����������� ���������� ChainInFileExc
        void Init();

        DWORD Read(void *Buffer, const DWORD Size) const;    // ��������� ���� ������ �� �������
        DWORD Seek(DWORD offset, DWORD StorageSize) const;   // ����������������� � �������
        bool SetEOF(DWORD offset, DWORD StorageSize) const;  // �������� ����� ������ � ������� (� ����������� ��� �����������)
        DWORD TakeSeek(void) const;                          // �������� ������� �������
        DWORD TakeOffset(void) const;                        // �������� �������� �� ������ �������
        bool Write(void *Buffer, const DWORD Size, DWORD StorageSize) const;

    protected:
    private:
      DWORD FDataSize;
      TChainBlockHeaderBinList FHeaders;
      DWORD FOffset;
      DWORD FoffsetInBlock;
      int FBlock;
      DWORD FOffsetInFile;
      DWORD FMinAllocSize;
      //FStream: TStream; - ���� ������ ��� ���� ���������
      TStorageFileHeader FpHeader;
      void SetMinAllocSize(const DWORD Value);

};

struct TFileInfo
{
    std::string FileName;
    DWORD Body;
};

typedef std::list<TFileInfo*> TFilesMap;

class TStorageReader
{
    public:
        TStorageReader();
        virtual ~TStorageReader();
        std::ofstream GetDataStream(void);
        DWORD GetStorageSize(void) const;
        TChainInFile GetDirChif(void) const;
        std::ofstream GetFile(const std::string FileName);
    protected:
    private:
        TStorageFileHeader Fsfh;
        std::ofstream FDataStream;
        DWORD FStorageSize;
        TChainInFile FDirChif;
        TFilesMap FFilesMap;
        void FillFilesMap(void);
};



class TIntConversions
{
    public:

        static bool TestByteOrder();
        static bool WriteU64(const bool ByteOrder, int Src, int dst);
        static bool WriteU32(const bool ByteOrder, int Src, int dst);
        static bool WriteU16(const bool ByteOrder, int Src, int dst);

        static int ReadU32(const bool ByteOrder, int *Src);
        static int ReadU16(const bool ByteOrder, int *Src);
};

/*

   TIntConversions = class
   public
      { �������� ������� ���������� ���� � �����.
          ���������: true, ���� ������� ���� ���������� �� �������� ������;
                     false, ���� ������� ���� ���������� �� �������� ������. }

      class function TestByteOrder: Boolean;

      class function WriteU64(const ByteOrder: Boolean; Src: Int64; var dst: PByte): Boolean;
      class function WriteU32(const ByteOrder: Boolean; Src: DWORD; var Dst: PByte): Boolean;
      class function WriteU16(const ByteOrder: Boolean; Src: WORD; var dst: PByte): Boolean;

      class function ReadU32(const ByteOrder: Boolean; src: Pointer): Integer;
      class function ReadU16(const ByteOrder: Boolean; src: Pointer): Integer;
   end;




*/


#endif // STORAGE_H_INCLUDED
