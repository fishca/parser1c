#ifndef FILETYPES_H_INCLUDED
#define FILETYPES_H_INCLUDED

  // План счетов
#define  CAccntMoxelExtObj          0  // макет объекта ПланСчетов
#define  CAccntFormHelpExtObj       1  // предопределенные данные объекта ПланСчетов
#define  CAccntHelpExtObj           5  // справка объекта ПланСчетов
#define  CAccntPredefinedDataExtObj 9  // справка формы объекта ПланСчетов
#define  CAccntModuleExtObj         21 // модуль объекта ПланСчетов


  // БизнесПроцесс
#define  CBPTaskMaketExtObj      0  // макет объекта БизнесЗадача
#define  CBPTaskFormHelpExtObj   1  // модуль объекта БизнесЗадача
#define  CBPTaskHelpExtObj       5  // справка объекта БизнесЗадача
#define  CBPTaskModuleExtObj     6  // модуль менеджера БизнесЗадача
#define  CBPTaskMnrgModuleExtObj 7  // справка формы объекта БизнесЗадача

#define  CModuleExtObj 6  // модуль объекта БизнесЗадача

#define  CCommonModuleModuleExtObj 0  // модуль Общего модуля

  // Регламентное задание
#define  CPlanedTaskPlanExtObj 0  // расписание объекта Регламентное задание

  // План обмена
#define  CDataExchHelpExtObj       0  // справка объекта ПланОбмена
#define  CDataExchContentExtObj    1  // состав ПланаОбмена
#define  CDataExchModuleExtObj     2  // модуль ПланаОбмена
#define  CDataExchMngrModuleExtObj 3  // модуль менеджера ПланаОбмена

  // Регистр накопления
#define  CAccumRegHelpExtObj           0  // справочная информация РегистраНакопления
#define  CAccumRegModuleExtObj         1  // модуль РегистраНакопления
#define  CAccumRegManagerModuleExtObj  2  // модуль менеджера РегистраНакопления
#define  CAccumRegAsmExtObj            3  // Агрегат РегистраНакопления

  // Константы
#define  CConstModuleExtObj  0  // модуль Константы

  // Регистр сведений
#define  CInfoRegHelpExtObj            0              // справочная информация РегистраСведений
#define  CInfoRegModuleExtObj          1            // модуль РегистраСведений
#define  CInfoRegManagerModuleExtObj   2     // модуль менеджера РегистраСведений

  // Обработки
#define  CProcessingModuleExtObj        0        // модуль Обработки
#define  CProcessingHelpExtObj          1         // справка Обработки
#define  CProcessingManagerModuleExtObj 2  // модуль менеджера Обработки


  // Справочники
#define  CRefModuleExtObj         0          // модуль справочника
#define  CRefHelpExtObj           1            // справка Справочника
#define  CRefCommandModuleExtObj  2   // модуль команды Справочника
#define  CRefManagerModuleExtObj  3   // модуль менеджера справочника
#define  CRefPredefinedDataExtObj 29  // предопределенные данные Справочника

  // Отчеты
#define  CReportModuleExtObj        0        // модуль Отчета
#define  CReportHelpExtObj          1          // справка Отчета
#define  CReportManagerModuleExtObj 2  // модуль менеджера Отчета

  // Последовательность
#define  CSequenceModule 0  // модуль Последовательности

  // Документы
#define  CDocModuleExtObj     0  // модуль Документа
#define  CDocHelpExtObj       1  // справка Документа
#define  CDocMngrModuleExtObj 2  // модуль менеджера Документа

  // Виды расчета
#define CCalcKindModuleExtObj          0  // модуль ВидаРасчета
#define  CCalcKindHelpExtObj           1  // справка ВидаРасчета
#define  CCalcKindPredefinedDataExtObj 2  // предопределенные данные ВидаРасчета

  // Регистр расчета
#define  CCalcRegModuleExtObj        40000  // модуль РегистраРасчета   // значение было 0, может это не правильно
#define  CCalcRegManagerModuleExtObj 50000  // модуль менеджера регистра расчетов
#define  CCalcRegHelpExtObj          0             // справка РегистраРасчета
#define  CRecalcModuleExtObj         0             // модуль Перерасчета

  // Бизнес-процессы
#define  CBPObjMaketExtObj      0  // макет объекта БизнессПроцесс
#define  CBPObjHelpObj          1  // справочная информация объекта БизнессПроцесс
#define  CBPObjHelpExtObj       5  // справочная информация объекта БизнессПроцесс
#define  CBPObjModuleExtObj     6  // модуль объекта БизнессПроцесс
#define  CBPObjFlowchartExtObj  7  // карта БП объекта БизнессПроцесс
#define  CBPObjMngrModuleExtObj 8  // модуль менеджера объекта БизнессПроцесс

  // Регистр бухгалтерии
#define  CAccntRegManagedFormObj  0  // управляемая форма РегистраБухучета
#define  CAccntRegHelpExtObj2     1  // Справка РегистраБухучета
#define  CAccntRegHelpExtObj      5  // Справка РегистраБухучета
#define  CAccntRegModuleExtObj    6  // модуль РегистраБухучета

  // Журнал
#define  CJournalsHelpExtObj          0     // Справка Журнала
#define  CJournalsFormHelpExtObj      1     // Справка ФормыЖурнала
#define  CJournalsManagerModuleExtObj 20000  // Модуль менеджера журнала

#define  CCalcPlanModuleExtObj         0     // модуль ПланаРасчета
#define  CCalcPlanHelpExtObj           1     // справка ПланаРасчета
#define  CCalcPlanPredefinedDataExtObj 2     // предопределенные данные ПланаРасчета
#define  CCalcPlanManagerModuleExtObj  30000  // модуль менеджера Плана видов Расчета

#define  CGlobalFormsHelpExtObj 1  //справка ГлобальнойФормы
#define  CGlobalFormsFormExtObj 0  //форма ГлобальнойФормы

#define  CCommonPictData           0           // данные общей картинки
#define  CSubsystemHelpExtObj      0
#define  CSubsystemInterfaceExtObj 1  // справка Подсистемы
#define  CCommonTableMXLExtObj     0     // макет объекта ОбщаяТаблица
#define  CCommonTableHelpExtObj    1    // справка объекта ОбщаяТаблица

  // План видов характеристик
#define  CChPlanMoxelExtObj           0             // макет ПланаВидовХарактеристик
#define  CChPlanFormHelpExtObj        1          // справка объекта ФормаПланаВидовХарактеристик
#define  CChPlanHelpExtObj            5              // справка объекта ПланВидовХарактеристик
#define  CChPlanPredefinedDataExtObj  7    // предопределенные данные ПланВидовХарактеристик
#define  CChPlanModuleExtObj          60000        // модуль ПланаВидовХарактеристик
#define  CChPlanManagerModuleExtObj   70000  // модуль менеджера ПланаВидовХарактеристик

  // Роли
#define  CRoleDataExtObj 0  // данные объекта Роль

  // Стили
#define  CStyleDataExtObj 0  // данные объекта Стиль

  // Интерфейсы
#define  CInterfaceDataExtObj 0  // данные объекта Интерфейс

  // Критерий отбора
#define  CSelCriterionsFormExtObj     0       // форма критерия отбора
#define  CSelCriterionsFormHelpExtObj 1   // справка ФормыКритерияОтбора
#define  CSelCriterionsModuleExtObj   80000  // модуль менеджера критерия отбора


  // Конфигурация
#define  CConfigLogoExtObj    1    // Логотип конфигурации
#define  CConfigSplashExtObj  2  // Заставка конфигурации
#define  CConfigHelpExtObj    3    // Справка конфигурации
#define  CConfigExtInfoExtObj 4  // Свойства конфигурации

  // Подсистемы
#define  CUserModuleExtObj 7  // Все подсистемы конфигурации

  // Глобальный модуль (обычное приложение)
#define  CGlobalModuleExtObj             0                 // Глобальный модуль конфигурации
#define  CExternalConnectionModuleExtObj 5     // Модуль внешнего соединения


#define  CMoxelDataExtObj 0                    // Модуль внешнего соединения


  //CExternalConnectionModuleExtObj2 ".b'  // Модуль внешнего соединения 2  // на самом деле это интерфейс клиентского приложения




#define  CSettStorageFofmExtObj            0;    // Справка ХранилищаНастроек
#define  CSettStorageHelpExtObj            1;    // Справка ХранилищаНастроек


#define  CTaskDescktopIntfExtObj           9    // Форма Хранилища Настроек
#define  CTaskDescktopAreaExtObj           8    // Командный интерфейс рабочего стола
#define  CConfigAllSubsystemsExtObj        ".a"  // Модуль сеанса пользователя    // HEX(A) -> Dec(10)
#define  CExternalConnectionModuleExtObj2  11   // Модуль внешнего соединения 2  // HEX(B) -> Dec(11)
#define  CPictureOsnRazdExtObj             12   // Картинка основного раздела    // HEX(C) -> Dec(12)



#define  CXDTOObj 0

  // Перечисления
#define  CEnumsForm   0   // форма Перечисления
#define  CEnumsModule 1  // Модуль формы Перечисления

  // Команды
#define  CCommandsInfo   1  // Модуль команды
#define  CCommandsModule 2  // Модуль команды

  // Внешние источники данных
#define  CExternalDataSourcesExtObj0  0
#define  CExternalDataSourcesExtObj1  1
#define  CExternalDataSourcesExtObj2  2
#define  CExternalDataSourcesExtObj3  3
#define  CExternalDataSourcesExtObj4  4
#define  CExternalDataSourcesExtObj5  5
#define  CExternalDataSourcesExtObj6  6
#define  CExternalDataSourcesExtObj7  7
#define  CExternalDataSourcesExtObj8  8
#define  CExternalDataSourcesExtObj9  9

  // расширения файлов
#define  CBPTaskModuleExt           ".txt"
#define  CBPTaskMnrgModuleExt       ".txt"
#define  CDocMngrModuleExt          ".txt"
#define  CBPObjMngrModuleExt        ".txt"
#define  CConfigAllSubsystemsExt    ".txt"
#define  CSettStorageHelpExt        ".html"
#define  CSettStorageFofmExt        ".frm"
#define  CMoxelDataExt              ".mxd"
#define  CPlanedTaskPlanExt         ".txt"
#define  CBPTaskMaketExt            ".mkt"
#define  CAccntMoxelExt             ".mxl"
#define  CDocModuleExt              ".txt"
#define  CDocHelpExt                ".html"
#define  CRefModuleExt              ".txt"
#define  CRefHelpExt                ".html"
#define  CRefPredefinedDataExt      ".prdf"
#define  CReportModuleExt           ".txt"
#define  CReportHelpExt             ".html"
#define  CProcessingModuleExt       ".txt"
#define  CProcessingHelpExt         ".html"
#define  CInfoRegHelpExt            ".html"
#define  CInfoRegModuleExt          ".txt"
#define  CCommonModuleModuleExt     ".txt"
#define  CAccumRegHelpExt           ".html"
#define  CAccumRegModuleExt         ".txt"
#define  CAccumRegModuleExt2        ".mftxt"
#define  CAccumRegAsmExt            ".ras"
#define  CAccntModuleExt            ".txt"
#define  CAccntHelpExt              ".html"
#define  CAccntPredefinedDataExt    ".prdf"
#define  CDataExchHelpExt           ".html"
#define  CDataExchContentExt        ".cnt"
#define  CDataExchModuleExt         ".txt"
#define  CDataExchMngrModuleExt     ".txt"
#define  CConstModuleExt            ".txt"
#define  CCalcKindModuleExt         ".txt"
#define  CCalcKindHelpExt           ".html"
#define  CCalcKindPredefinedDataExt ".prdf"
#define  CCalcRegModuleExt          ".txt"
#define  CCalcRegHelpExt            ".html"
#define  CRecalcModuleExt           ".txt"
#define  CBPObjHelpExt              ".html"
#define  CBPObjModuleExt            ".txt"
#define  CBPObjFlowchartExt         ".fch"
#define  CBPObjMaketExt             ".mkt"
#define  CAccntRegModuleExt         ".txt"
#define  CAccntRegHelpExt           ".html"
#define  CBPTaskHelpExt             ".html"
#define  CMoxelExt                  ".mxl"
#define  CJournalsModuleExt         ".txt"
#define  CJournalsHelpExt           ".html"
#define  CAccntFormHelpExt          ".html"
#define  CCalcPlanModuleExt         ".txt"
#define  CCalcPlanHelpExt           ".html"
#define  CCalcPlanPredefinedDataExt ".prdf"
#define  CGlobalFormsHelpExt        ".html"
#define  CCommonPictDataExt         ".pct8"
#define  CSubsystemHelpExt          ".html"
#define  CSubsystemInterfaceExt     ".intf"
#define  CCommonTableHelpExt        ".html"
#define  CCommonTableMXLExt         ".mxl"
#define  CChPlanHelpExt             ".html"
#define  CChPlanModuleExt           ".txt"
#define  CChPlanManagerModuleExt    ".txt"
#define  CChPlanFormHelpExt         ".html"
#define  CChPlanPredefinedDataExt   ".prdf"
#define  CChPlanMoxelExt            ".mxl"
#define  CRoleDataExt               ".rol8"
#define  CStyleDataExt              ".stl8"
#define  CInterfaceDataExt          ".txt"
#define  CJournalsFormHelpExt       ".html"
#define  CSelCriterionsFormHelpExt  ".html"
#define  CGlobalModuleExt           ".txt"
#define  CConfigLogoExt             ".pct8"
#define  CConfigSplashExt           ".pct8"
#define  CConfigPictOsnRazdExt      ".pct8"
#define  CConfigHelpExt             ".html"
#define  CConfigExtInfoExt          ".dat"
#define  CInterfaceClientApp        ".txt"
#define  CUserModuleExt             ".txt"
#define  CTaskDescktopAreaExt       ".dsk"
#define  CTaskDescktopIntfExt       ".dintf"
#define  CGlobalFormsFormExt        ".frm"
#define  CSelCriterionsFormExt      ".frm"
#define  CXDTOData                  ".xml"
#define  CEnumsExt                  ".html"
#define  CEnumsObjExt               ".txt"
#define  CCommandsModuleExt         ".txt"
#define  CCommandsInfoExt           ".itxt"

#define  CExternalConnectionModuleExt ".txt"

#define  CExternalDataSourcesExtObj0_ext ".txt"
#define  CExternalDataSourcesExtObj1_ext ".txt"
#define  CExternalDataSourcesExtObj2_ext ".txt"
#define  CExternalDataSourcesExtObj3_ext ".txt"
#define  CExternalDataSourcesExtObj4_ext ".txt"
#define  CExternalDataSourcesExtObj5_ext ".txt"
#define  CExternalDataSourcesExtObj6_ext ".txt"
#define  CExternalDataSourcesExtObj7_ext ".txt"
#define  CExternalDataSourcesExtObj8_ext ".txt"
#define  CExternalDataSourcesExtObj9_ext ".txt"



// function StringExtToInt(const Ext : string) : integer;
int StringExtToInt(const char* ext);

#endif // FILETYPES_H_INCLUDED
