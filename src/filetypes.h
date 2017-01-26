#ifndef FILETYPES_H_INCLUDED
#define FILETYPES_H_INCLUDED

  // ���� ������
#define  CAccntMoxelExtObj          0  // ����� ������� ����������
#define  CAccntFormHelpExtObj       1  // ���������������� ������ ������� ����������
#define  CAccntHelpExtObj           5  // ������� ������� ����������
#define  CAccntPredefinedDataExtObj 9  // ������� ����� ������� ����������
#define  CAccntModuleExtObj         21 // ������ ������� ����������


  // �������������
#define  CBPTaskMaketExtObj      0  // ����� ������� ������������
#define  CBPTaskFormHelpExtObj   1  // ������ ������� ������������
#define  CBPTaskHelpExtObj       5  // ������� ������� ������������
#define  CBPTaskModuleExtObj     6  // ������ ��������� ������������
#define  CBPTaskMnrgModuleExtObj 7  // ������� ����� ������� ������������

#define  CModuleExtObj 6  // ������ ������� ������������

#define  CCommonModuleModuleExtObj 0  // ������ ������ ������

  // ������������ �������
#define  CPlanedTaskPlanExtObj 0  // ���������� ������� ������������ �������

  // ���� ������
#define  CDataExchHelpExtObj       0  // ������� ������� ����������
#define  CDataExchContentExtObj    1  // ������ �����������
#define  CDataExchModuleExtObj     2  // ������ �����������
#define  CDataExchMngrModuleExtObj 3  // ������ ��������� �����������

  // ������� ����������
#define  CAccumRegHelpExtObj           0  // ���������� ���������� ������������������
#define  CAccumRegModuleExtObj         1  // ������ ������������������
#define  CAccumRegManagerModuleExtObj  2  // ������ ��������� ������������������
#define  CAccumRegAsmExtObj            3  // ������� ������������������

  // ���������
#define  CConstModuleExtObj  0  // ������ ���������

  // ������� ��������
#define  CInfoRegHelpExtObj            0              // ���������� ���������� ����������������
#define  CInfoRegModuleExtObj          1            // ������ ����������������
#define  CInfoRegManagerModuleExtObj   2     // ������ ��������� ����������������

  // ���������
#define  CProcessingModuleExtObj        0        // ������ ���������
#define  CProcessingHelpExtObj          1         // ������� ���������
#define  CProcessingManagerModuleExtObj 2  // ������ ��������� ���������


  // �����������
#define  CRefModuleExtObj         0          // ������ �����������
#define  CRefHelpExtObj           1            // ������� �����������
#define  CRefCommandModuleExtObj  2   // ������ ������� �����������
#define  CRefManagerModuleExtObj  3   // ������ ��������� �����������
#define  CRefPredefinedDataExtObj 29  // ���������������� ������ �����������

  // ������
#define  CReportModuleExtObj        0        // ������ ������
#define  CReportHelpExtObj          1          // ������� ������
#define  CReportManagerModuleExtObj 2  // ������ ��������� ������

  // ������������������
#define  CSequenceModule 0  // ������ ������������������

  // ���������
#define  CDocModuleExtObj     0  // ������ ���������
#define  CDocHelpExtObj       1  // ������� ���������
#define  CDocMngrModuleExtObj 2  // ������ ��������� ���������

  // ���� �������
#define CCalcKindModuleExtObj          0  // ������ �����������
#define  CCalcKindHelpExtObj           1  // ������� �����������
#define  CCalcKindPredefinedDataExtObj 2  // ���������������� ������ �����������

  // ������� �������
#define  CCalcRegModuleExtObj        40000  // ������ ���������������   // �������� ���� 0, ����� ��� �� ���������
#define  CCalcRegManagerModuleExtObj 50000  // ������ ��������� �������� ��������
#define  CCalcRegHelpExtObj          0             // ������� ���������������
#define  CRecalcModuleExtObj         0             // ������ �����������

  // ������-��������
#define  CBPObjMaketExtObj      0  // ����� ������� ��������������
#define  CBPObjHelpObj          1  // ���������� ���������� ������� ��������������
#define  CBPObjHelpExtObj       5  // ���������� ���������� ������� ��������������
#define  CBPObjModuleExtObj     6  // ������ ������� ��������������
#define  CBPObjFlowchartExtObj  7  // ����� �� ������� ��������������
#define  CBPObjMngrModuleExtObj 8  // ������ ��������� ������� ��������������

  // ������� �����������
#define  CAccntRegManagedFormObj  0  // ����������� ����� ����������������
#define  CAccntRegHelpExtObj2     1  // ������� ����������������
#define  CAccntRegHelpExtObj      5  // ������� ����������������
#define  CAccntRegModuleExtObj    6  // ������ ����������������

  // ������
#define  CJournalsHelpExtObj          0     // ������� �������
#define  CJournalsFormHelpExtObj      1     // ������� ������������
#define  CJournalsManagerModuleExtObj 20000  // ������ ��������� �������

#define  CCalcPlanModuleExtObj         0     // ������ ������������
#define  CCalcPlanHelpExtObj           1     // ������� ������������
#define  CCalcPlanPredefinedDataExtObj 2     // ���������������� ������ ������������
#define  CCalcPlanManagerModuleExtObj  30000  // ������ ��������� ����� ����� �������

#define  CGlobalFormsHelpExtObj 1  //������� ���������������
#define  CGlobalFormsFormExtObj 0  //����� ���������������

#define  CCommonPictData           0           // ������ ����� ��������
#define  CSubsystemHelpExtObj      0
#define  CSubsystemInterfaceExtObj 1  // ������� ����������
#define  CCommonTableMXLExtObj     0     // ����� ������� ������������
#define  CCommonTableHelpExtObj    1    // ������� ������� ������������

  // ���� ����� �������������
#define  CChPlanMoxelExtObj           0             // ����� �����������������������
#define  CChPlanFormHelpExtObj        1          // ������� ������� ����������������������������
#define  CChPlanHelpExtObj            5              // ������� ������� ����������������������
#define  CChPlanPredefinedDataExtObj  7    // ���������������� ������ ����������������������
#define  CChPlanModuleExtObj          60000        // ������ �����������������������
#define  CChPlanManagerModuleExtObj   70000  // ������ ��������� �����������������������

  // ����
#define  CRoleDataExtObj 0  // ������ ������� ����

  // �����
#define  CStyleDataExtObj 0  // ������ ������� �����

  // ����������
#define  CInterfaceDataExtObj 0  // ������ ������� ���������

  // �������� ������
#define  CSelCriterionsFormExtObj     0       // ����� �������� ������
#define  CSelCriterionsFormHelpExtObj 1   // ������� �������������������
#define  CSelCriterionsModuleExtObj   80000  // ������ ��������� �������� ������


  // ������������
#define  CConfigLogoExtObj    1    // ������� ������������
#define  CConfigSplashExtObj  2  // �������� ������������
#define  CConfigHelpExtObj    3    // ������� ������������
#define  CConfigExtInfoExtObj 4  // �������� ������������

  // ����������
#define  CUserModuleExtObj 7  // ��� ���������� ������������

  // ���������� ������ (������� ����������)
#define  CGlobalModuleExtObj             0                 // ���������� ������ ������������
#define  CExternalConnectionModuleExtObj 5     // ������ �������� ����������


#define  CMoxelDataExtObj 0                    // ������ �������� ����������


  //CExternalConnectionModuleExtObj2 ".b'  // ������ �������� ���������� 2  // �� ����� ���� ��� ��������� ����������� ����������




#define  CSettStorageFofmExtObj            0;    // ������� �����������������
#define  CSettStorageHelpExtObj            1;    // ������� �����������������


#define  CTaskDescktopIntfExtObj           9    // ����� ��������� ��������
#define  CTaskDescktopAreaExtObj           8    // ��������� ��������� �������� �����
#define  CConfigAllSubsystemsExtObj        ".a"  // ������ ������ ������������    // HEX(A) -> Dec(10)
#define  CExternalConnectionModuleExtObj2  11   // ������ �������� ���������� 2  // HEX(B) -> Dec(11)
#define  CPictureOsnRazdExtObj             12   // �������� ��������� �������    // HEX(C) -> Dec(12)



#define  CXDTOObj 0

  // ������������
#define  CEnumsForm   0   // ����� ������������
#define  CEnumsModule 1  // ������ ����� ������������

  // �������
#define  CCommandsInfo   1  // ������ �������
#define  CCommandsModule 2  // ������ �������

  // ������� ��������� ������
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

  // ���������� ������
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
