object frmLogin: TfrmLogin
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Login'
  ClientHeight = 213
  ClientWidth = 459
  Color = clBtnFace
  Constraints.MinHeight = 200
  Constraints.MinWidth = 450
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  Scaled = False
  DesignSize = (
    459
    213)
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 32
    Top = 32
    Width = 69
    Height = 16
    Alignment = taRightJustify
    Caption = 'TrueConf ID'
    FocusControl = edID
  end
  object Label2: TLabel
    Left = 46
    Top = 72
    Width = 55
    Height = 16
    Alignment = taRightJustify
    Caption = 'Password'
    FocusControl = edPassword
  end
  object edID: TEdit
    Left = 120
    Top = 29
    Width = 321
    Height = 24
    Anchors = [akLeft, akTop, akRight]
    TabOrder = 0
  end
  object edPassword: TEdit
    Left = 120
    Top = 69
    Width = 321
    Height = 24
    Anchors = [akLeft, akTop, akRight]
    PasswordChar = '*'
    TabOrder = 1
  end
  object Button1: TButton
    Left = 136
    Top = 163
    Width = 153
    Height = 41
    Anchors = [akRight, akBottom]
    Caption = 'Cancel'
    ModalResult = 2
    TabOrder = 2
  end
  object Button2: TButton
    Left = 295
    Top = 163
    Width = 153
    Height = 41
    Anchors = [akRight, akBottom]
    Caption = 'OK'
    Default = True
    ModalResult = 1
    TabOrder = 3
  end
end
