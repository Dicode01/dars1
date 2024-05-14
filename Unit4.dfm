object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Form4'
  ClientHeight = 432
  ClientWidth = 505
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Times New Roman'
  Font.Style = [fsBold]
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 22
  object Label1: TLabel
    Left = 24
    Top = 72
    Width = 106
    Height = 22
    Caption = 'Gurux Nomi:'
  end
  object Label2: TLabel
    Left = 24
    Top = 179
    Width = 58
    Height = 22
    Caption = 'Fak_id'
  end
  object DBEdit1: TDBEdit
    Left = 184
    Top = 69
    Width = 233
    Height = 30
    DataField = 'Gurux_nomi'
    DataSource = DataModule3.DSGuruxlar
    TabOrder = 0
  end
  object DBEdit2: TDBEdit
    Left = 184
    Top = 176
    Width = 233
    Height = 30
    DataField = 'Fak_id'
    DataSource = DataModule3.DSGuruxlar
    TabOrder = 1
  end
  object BitBtn1: TBitBtn
    Left = 193
    Top = 288
    Width = 112
    Height = 49
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 2
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 320
    Top = 288
    Width = 97
    Height = 49
    Kind = bkCancel
    NumGlyphs = 2
    TabOrder = 3
    OnClick = BitBtn2Click
  end
end
