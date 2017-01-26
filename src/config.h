#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

//  Стандарнтые имена файлов

#define  CMetadataFileName     "metadata"     //  имя файла, хранящего структуру метаданных конфигурации
#define  CRootMDObjectFileName "root"         //  имя файла, хранящего идентификатор корневого объекта метаданных (контейнера)
#define  CFileNameVersion      "version"      //  имя файла, хранящего версию конфигурации в целом
#define  CFileNameVersions     "versions"     //  имя файла, хранящего список версий хранящихся файлов
#define  CDeletedListFileName  "deleted"      //  имя файла, в котором хранится список удаленных файлов.
#define  CCommitPhaseFileName  "commit"       //  имя файла обозначающего последнюю фазу сохранения|построения
#define  CConvertPhaseFileName "convertPhase" //  имя файла обозначающего фазу конвертации

// идентификаторы, используемые при формировании идентификатора файла

#define  CGlobalModuleMDPropTerm "МодульПриложения"
#define  CExternalConnectionModuleMDPropTerm "МодульВнешнегоСоединения"

#define CGuidLength 36


#endif // CONFIG_H_INCLUDED
