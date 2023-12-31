[Rainmeter]

[Variables]
@IncludeVariables=#SKINSPATH#Droptop Community Apps\Apps\WakaTime-Bunz\Variables\Variables.inc

[Script]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#SKINSPATH#Droptop Community Apps\Apps\WakaTime-Bunz\Scripts\Wakatime.ps1
ApiKey=#Api_Key#
VarsLocation=#MyVariablesLoc#
App=#WakaTime-Bunz#
Value=[#Top_Bar_Content_[#Top_Bar_Content_Number]]
DynamicVariables=1


[UpdateMeasure]
measure = Calc
; Formula=(UpdateMeasure % #Timeout#) + 1
Formula=(UpdateMeasure % (#Timeout#*60)) + 1
IfEqualValue=1
IfEqualAction=[!Log "background process"][!CommandMeasure Script "Update_Data"][!Log "Script terminato"][!SetOption CustomApp#WakaTime-Bunz# Text "   [#Top_Bar_Content_[#Top_Bar_Content_Number]]   " "Droptop\DropdownBar"][!UpdateMeterGroup CustomAppButton "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Redraw]
DynamicVariables=1
