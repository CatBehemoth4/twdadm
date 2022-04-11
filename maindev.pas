unit maindev;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes, System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs,
  FireDAC.Stan.Intf, FireDAC.Stan.Option, FireDAC.Stan.Error, FireDAC.UI.Intf,
  FireDAC.Phys.Intf, FireDAC.Stan.Def, FireDAC.Stan.Pool, FireDAC.Stan.Async,
  FireDAC.Phys, FireDAC.Phys.PG, FireDAC.Phys.PGDef, FireDAC.FMXUI.Wait,
  Data.DB, FireDAC.Comp.Client, FMX.Controls.Presentation, FMX.StdCtrls,
  FireDAC.Stan.Param, FireDAC.DatS, FireDAC.DApt.Intf, FireDAC.DApt,
  FireDAC.Comp.DataSet, Data.Bind.Components, Data.Bind.DBScope,
  Data.Bind.EngExt, Fmx.Bind.DBEngExt, System.Rtti, System.Bindings.Outputs;

type
  TForm1 = class(TForm)
    TWDConnection1: TFDConnection;
    Button1: TButton;
    GroupsQuery: TFDQuery;
    GroupsDataSource: TDataSource;
    BindSourceDB1: TBindSourceDB;
    FDPhysPgDriverLink1: TFDPhysPgDriverLink;
    GroupTable: TFDTable;
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.fmx}

procedure TForm1.Button1Click(Sender: TObject);
begin
TWDConnection1.Connected:= True;
GroupsDataSource.Create(self);
GroupsQuery.Active:= True;
GroupsQuery.Open;
GroupTable.Create(self);
GroupTable.Connection:= TWDConnection1;
GroupTable.Open('SELECT * FROM "Groups";');
end;

end.
