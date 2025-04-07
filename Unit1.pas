Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;
//var Red, Green, Blue : integer; 
type
  Form1 = class(Form)
    procedure RED_Scroll(sender: Object; e: EventArgs);
    procedure GREEN_Scroll(sender: Object; e: EventArgs);
    procedure BLUE_Scroll(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    RED: TrackBar;
    GREEN: TrackBar;
    BLUE: TrackBar;
    button1: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.RED_Scroll(sender: Object; e: EventArgs);
begin
  //Red := RED.Value;
end;

procedure Form1.GREEN_Scroll(sender: Object; e: EventArgs);
begin
  //Green := GREEN.Value;
end;

procedure Form1.BLUE_Scroll(sender: Object; e: EventArgs);
begin
  //Blue := BLUE.Value;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  button1.BackColor := Color.FromArgb(RED.Value, GREEN.Value, BLUE.Value);
end;

end.
