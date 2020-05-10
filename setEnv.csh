
alias mc="make clean"
alias ma="make clean; make"
alias mahw="make clean; make; apps/hwSim.exe"
alias mhw="make; apps/hwSim.exe"

alias mBlink="make; apps/hwSim.exe blink"
alias maBlink="make clean; make; apps/hwSim.exe blink"

alias mLed="make; apps/hwSim.exe led_trivial"
alias maLed="make clean; make; apps/hwSim.exe led_trivial"


alias runNoArgs="apps/genApp.exe; apps/hwSim.exe; apps/sim1.exe; apps/testAll.exe; apps/testCommandLine.exe; apps/hwSim.exe"
alias runWithArgs="apps/hwSim.exe blink"
alias runAll="runNoArgs; runWithArgs"
alias maAll="make clean; make; runAll;"

alias mGW="make; apps/gw2020.exe;"
alias maGW="make clean; make; apps/gw2020.exe;"

alias mSM="make; apps/stateMachine.exe;"
alias maSM="make clean; make; apps/stateMachine.exe;"

alias mGame="make; apps/card.exe; cat genData/foo.ps"
alias maGame="make clean; make; apps/card.exe; cat genData/foo.ps"

alias mD="make && apps/dodle.exe"
alias maD="make clean && make && apps/dodle.exe"
