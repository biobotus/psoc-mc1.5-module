# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\Lois\Desktop\MC1_5\MC1_5_PSOC5.cydsn\MC1_5_PSOC5.cyprj
# Date: Sat, 12 Dec 2015 18:50:17 GMT
#set_units -time ns
create_clock -name {ADC_Ext_CP_Clk(routed)} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {CyBUS_CLK(fixed-function)} -period 41.666666666666664 -waveform {0 20.8333333333333} [get_pins {ClockBlock/clk_bus_glb_ff}]
create_clock -name {ADC_Ext_CP_Clk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {ADC_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 9 19} [list [get_pins {ClockBlock/aclk_glb_0}]]
create_clock -name {ADC_theACLK(fixed-function)} -period 375 -waveform {0 187.5} [get_pins {ClockBlock/aclk_glb_ff_0}]
create_generated_clock -name {timer_clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 121 241} [list [get_pins {ClockBlock/dclk_glb_1}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for C:\Users\Lois\Desktop\MC1_5\MC1_5_PSOC5.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Lois\Desktop\MC1_5\MC1_5_PSOC5.cydsn\MC1_5_PSOC5.cyprj
# Date: Sat, 12 Dec 2015 18:50:04 GMT
