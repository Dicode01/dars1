object DataModule3: TDataModule3
  OldCreateOrder = False
  Height = 289
  Width = 484
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=baza6' +
      '82_23.mdb;Mode=Share Deny None;Persist Security Info=False;Jet O' +
      'LEDB:System database="";Jet OLEDB:Registry Path="";Jet OLEDB:Dat' +
      'abase Password="";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Loc' +
      'king Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global' +
      ' Bulk Transactions=1;Jet OLEDB:New Database Password="";Jet OLED' +
      'B:Create System Database=False;Jet OLEDB:Encrypt Database=False;' +
      'Jet OLEDB:Don'#39't Copy Locale on Compact=False;Jet OLEDB:Compact W' +
      'ithout Replica Repair=False;Jet OLEDB:SFP=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 112
    Top = 56
  end
  object ATFakultet: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Fakultet'
    Left = 216
    Top = 56
  end
  object DSFakultet: TDataSource
    DataSet = ATFakultet
    Left = 328
    Top = 56
  end
  object ATGuruxlar: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'Fak_id'
    MasterFields = 'Id'
    MasterSource = DSFakultet
    TableName = 'Guruxlar'
    Left = 216
    Top = 120
  end
  object ATTalabalar: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'Gurux_id'
    MasterFields = 'Id'
    MasterSource = DSGuruxlar
    TableName = 'Talabalar'
    Left = 216
    Top = 192
  end
  object DSGuruxlar: TDataSource
    DataSet = ATGuruxlar
    Left = 328
    Top = 120
  end
  object DSTalabalar: TDataSource
    DataSet = ATTalabalar
    Left = 328
    Top = 200
  end
end
