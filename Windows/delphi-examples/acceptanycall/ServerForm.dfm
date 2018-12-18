object frmServer: TfrmServer
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Server'
  ClientHeight = 165
  ClientWidth = 459
  Color = clBtnFace
  Constraints.MinHeight = 200
  Constraints.MinWidth = 465
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
    165)
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 32
    Top = 32
    Width = 73
    Height = 16
    Alignment = taRightJustify
    AutoSize = False
    Caption = 'Server'
    FocusControl = edServer
  end
  object Button1: TButton
    Left = 138
    Top = 116
    Width = 153
    Height = 41
    Anchors = [akRight, akBottom]
    Caption = 'Cancel'
    ModalResult = 2
    TabOrder = 2
    ExplicitLeft = 168
    ExplicitTop = 129
  end
  object btnOk: TButton
    Left = 297
    Top = 116
    Width = 153
    Height = 41
    Anchors = [akRight, akBottom]
    Caption = 'OK'
    Default = True
    Enabled = False
    ModalResult = 1
    TabOrder = 3
    ExplicitLeft = 327
    ExplicitTop = 129
  end
  object chbTCOServer: TCheckBox
    Left = 120
    Top = 72
    Width = 321
    Height = 17
    Caption = 'TrueConf Online'
    TabOrder = 1
    OnClick = chbTCOServerClick
  end
  object edServer: TEdit
    Left = 120
    Top = 29
    Width = 321
    Height = 24
    Anchors = [akLeft, akTop, akRight]
    TabOrder = 0
    OnChange = edServerChange
  end
end
