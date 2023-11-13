[CustomApp5]
Meter=String
MeterStyle=InfoStyle
Padding=#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1)),#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1))
StringAlign=LeftCenter
Text="   [#Top_Bar_Content_[#Top_Bar_Content_Number]]   "
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))
W=
UpdateDivider=1
DynamicVariables=1
TrailingSpaces=1
Group=#CURRENTSECTION#Sys | SysTray | Animation | Buttons00 | AppButton[##CURRENTSECTION#] | CustomAppButton
Container=SystemTrayContainer
