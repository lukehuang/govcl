
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

library lcl;

{$mode objfpc}{$H+}  

uses
{$IFDEF UNIX}{$IFDEF UseCThreads}
  cthreads,,
{$ENDIF}{$ENDIF}
  Interfaces, // this includes the LCL widgetset,
{$IFDEF WINDOWS}
  Windows,
  MultiMon,
  ShellAPI,
  ShlObj,
  ComObj,
  CommCtrl,
  ActiveX,
  Win32Int,
  win32proc,
  LazUTF8,
  InterfaceBase,
{$ELSE}
  LCLType,
  Types,
{$ENDIF}
  typinfo,
  LCLProc,
  LCLIntf,
  LCLStrConsts,
  SysUtils,
  Classes,
  DateUtils,
  IniFiles,
  Registry,
  Forms,
  StdCtrls,
  Dialogs,
  ExtCtrls,
  Graphics,
  Controls,
  Buttons,
  ComCtrls,
  ToolWin,
  ImgList,
  ExtDlgs,
  ActnList,
  ColorBox,
  PrintersDlgs,
  DateTimePicker,
  Calendar,
  Menus,
  Clipbrd,
  CheckLst,
  MaskEdit,
  Grids,
  ValEdit,
  fgl,
  uFormDesignerFile,
  uLinkLabel in 'uLinkLabel.pas',
  uEventCallback in 'uEventCallback.pas',
  ImageButton in 'ImageButton.pas',
  Gauges in 'Gauges.pas',
  uComponents;

{$IFDEF WINDOWS}
  {$R *.res}
{$ENDIF}



{$I ExtDecl.inc}
{$I LazarusExtDef.inc}
{$I LazarusDef.inc}

{$I MyLCL_Application.inc}
{$I MyLCL_Form.inc}
{$I MyLCL_Button.inc}
{$I MyLCL_Edit.inc}
{$I MyLCL_MainMenu.inc}
{$I MyLCL_PopupMenu.inc}
{$I MyLCL_Memo.inc}
{$I MyLCL_CheckBox.inc}
{$I MyLCL_RadioButton.inc}
{$I MyLCL_GroupBox.inc}
{$I MyLCL_Label.inc}
{$I MyLCL_ListBox.inc}
{$I MyLCL_ComboBox.inc}
{$I MyLCL_Panel.inc}
{$I MyLCL_Image.inc}
{$I MyLCL_LinkLabel.inc}
{$I MyLCL_SpeedButton.inc}
{$I MyLCL_Splitter.inc}
{$I MyLCL_RadioGroup.inc}
{$I MyLCL_StaticText.inc}
{$I MyLCL_ColorBox.inc}
{$I MyLCL_ColorListBox.inc}
{$I MyLCL_TrayIcon.inc}
{$I MyLCL_OpenDialog.inc}
{$I MyLCL_SaveDialog.inc}
{$I MyLCL_ColorDialog.inc}
{$I MyLCL_FontDialog.inc}
{$I MyLCL_PrintDialog.inc}
{$I MyLCL_OpenPictureDialog.inc}
{$I MyLCL_SavePictureDialog.inc}
{$I MyLCL_TrackBar.inc}
{$I MyLCL_ImageList.inc}
{$I MyLCL_UpDown.inc}
{$I MyLCL_ProgressBar.inc}
{$I MyLCL_DateTimePicker.inc}
{$I MyLCL_MonthCalendar.inc}
{$I MyLCL_ListView.inc}
{$I MyLCL_TreeView.inc}
{$I MyLCL_StatusBar.inc}
{$I MyLCL_ToolBar.inc}
{$I MyLCL_BitBtn.inc}
{$I MyLCL_Icon.inc}
{$I MyLCL_Bitmap.inc}
{$I MyLCL_MemoryStream.inc}
{$I MyLCL_Font.inc}
{$I MyLCL_Strings.inc}
{$I MyLCL_StringList.inc}
{$I MyLCL_Brush.inc}
{$I MyLCL_Pen.inc}
{$I MyLCL_MenuItem.inc}
{$I MyLCL_Picture.inc}
{$I MyLCL_ListColumns.inc}
{$I MyLCL_ListItems.inc}
{$I MyLCL_TreeNodes.inc}
{$I MyLCL_ListItem.inc}
{$I MyLCL_TreeNode.inc}
{$I MyLCL_PageControl.inc}
{$I MyLCL_TabSheet.inc}
{$I MyLCL_Control.inc}
{$I MyLCL_WinControl.inc}
{$I MyLCL_Screen.inc}
{$I MyLCL_Mouse.inc}
{$I MyLCL_ListColumn.inc}
{$I MyLCL_CollectionItem.inc}
{$I MyLCL_StatusPanels.inc}
{$I MyLCL_StatusPanel.inc}
{$I MyLCL_Canvas.inc}
{$I MyLCL_Object.inc}
{$I MyLCL_Graphic.inc}
{$I MyLCL_PngImage.inc}
{$I MyLCL_JPEGImage.inc}
{$I MyLCL_GIFImage.inc}
{$I MyLCL_ActionList.inc}
{$I MyLCL_Action.inc}
{$I MyLCL_ToolButton.inc}
{$I MyLCL_IniFile.inc}
{$I MyLCL_Registry.inc}
{$I MyLCL_Clipboard.inc}
{$I MyLCL_Monitor.inc}
{$I MyLCL_PaintBox.inc}
{$I MyLCL_Timer.inc}
{$I MyLCL_List.inc}
{$I MyLCL_Component.inc}
{$I MyLCL_IconOptions.inc}
{$I MyLCL_Exception.inc}
{$I MyLCL_ScrollBar.inc}
{$I MyLCL_MaskEdit.inc}
{$I MyLCL_Shape.inc}
{$I MyLCL_Bevel.inc}
{$I MyLCL_ScrollBox.inc}
{$I MyLCL_CheckListBox.inc}
{$I MyLCL_Gauge.inc}
{$I MyLCL_ImageButton.inc}
{$I MyLCL_FindDialog.inc}
{$I MyLCL_ReplaceDialog.inc}
{$I MyLCL_PrinterSetupDialog.inc}
{$I MyLCL_PageSetupDialog.inc}
{$I MyLCL_DragObject.inc}
{$I MyLCL_DragDockObject.inc}
{$I MyLCL_StringGrid.inc}
{$I MyLCL_DrawGrid.inc}
{$I MyLCL_ValueListEditor.inc}
{$I MyLCL_HeaderControl.inc}
{$I MyLCL_HeaderSection.inc}
{$I MyLCL_HeaderSections.inc}
{$I MyLCL_LabeledEdit.inc}
{$I MyLCL_BoundLabel.inc}
{$I MyLCL_FlowPanel.inc}
{$I MyLCL_CoolBar.inc}
{$I MyLCL_CoolBands.inc}
{$I MyLCL_CoolBand.inc}
{$I MyLCL_Collection.inc}

begin
  InitLazarusDef;
end.
