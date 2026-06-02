####################################################################################################
# Specify units
####################################################################################################
set_units -capacitance pF -digits 1

####################################################################################################
# Clocks: actual clocks in the design associated with ports
####################################################################################################
# Specify period based on frequency in MHz



set_max_delay -datapath_only -from [get_clocks CLK_100MHZ_clk_wiz_0_local] -to [get_clocks CLK_200MHZ_clk_wiz_0_local] 4.000
set_max_delay -datapath_only -from [get_clocks CLK_200MHZ_clk_wiz_0_local] -to [get_clocks CLK_100MHZ_clk_wiz_0_local] 4.000


# Create clock(s)
#Clocking wizard also creates this constraint in its constraints file
create_clock -period 3.333 -name CLK_P [get_ports CLK_P]
create_clock -period 1000.000 -name TCK_BB [get_ports jtag_tck_in_BB]
create_clock -period 1000.000 -name TCK_EE [get_ports jtag_tck_in_EE]

# Clock domains are asynchronous to each other

set_clock_groups -asynchronous -group [get_clocks -include_generated_clocks CLK_P] -group [get_clocks -include_generated_clocks TCK_BB] -group [get_clocks -include_generated_clocks TCK_EE]

####################################################################################################
# Input/Output
####################################################################################################
# Define external delay of JTAG inputs
#set_input_delay -clock ${TCK_NAME} 0 [get_ports {TRST}]
set_input_delay -clock TCK_BB 0.000 [get_ports jtag_tms_in_BB]
set_input_delay -clock TCK_BB 0.000 [get_ports jtag_tdi_in_BB]

set_input_delay -clock TCK_EE 0.000 [get_ports jtag_tms_in_EE]
set_input_delay -clock TCK_EE 0.000 [get_ports jtag_tdi_in_EE]

# Define external delay of JTAG outputs
set_output_delay -clock TCK_BB 0.000 [get_ports jtag_tdo_out_BB]
set_output_delay -clock TCK_EE 0.000 [get_ports jtag_tdo_out_EE]

# Define external delay of other inputs
set_input_delay -clock CLK_P 0.000 [get_ports reset]

set_false_path -from [get_ports reset]

set_property IOSTANDARD DIFF_SSTL12 [get_ports CLK_N]
set_property PACKAGE_PIN AL8 [get_ports CLK_P]
set_property PACKAGE_PIN AL7 [get_ports CLK_N]
set_property IOSTANDARD DIFF_SSTL12 [get_ports CLK_P]


set_property PACKAGE_PIN AG13 [get_ports reset]
set_property IOSTANDARD LVCMOS33 [get_ports reset]

#LEDs
set_property PACKAGE_PIN AG14 [get_ports RGB0_Green]
set_property IOSTANDARD LVCMOS33 [get_ports RGB0_Green]
set_property PACKAGE_PIN AH14 [get_ports RGB0_Green_EE]
set_property IOSTANDARD LVCMOS33 [get_ports RGB0_Green_EE]
set_property PACKAGE_PIN AF13 [get_ports RGB0_Red]
set_property IOSTANDARD LVCMOS33 [get_ports RGB0_Red]
set_property PACKAGE_PIN AE13 [get_ports LED_BB]
set_property IOSTANDARD LVCMOS33 [get_ports LED_BB]
set_property PACKAGE_PIN AJ14 [get_ports LED_EE]
set_property IOSTANDARD LVCMOS33 [get_ports LED_EE]
set_property PACKAGE_PIN AJ15 [get_ports rxnew_LED]
set_property IOSTANDARD LVCMOS33 [get_ports rxnew_LED]
set_property PACKAGE_PIN AH13 [get_ports txgo_LED]
set_property IOSTANDARD LVCMOS33 [get_ports txgo_LED]

#PMOD0
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets jtag_tck_in_BB_IBUF_inst/O]

set_property PACKAGE_PIN A20 [get_ports jtag_tck_in_BB]
set_property IOSTANDARD LVCMOS33 [get_ports jtag_tck_in_BB]
set_property PACKAGE_PIN B20 [get_ports jtag_tms_in_BB]
set_property IOSTANDARD LVCMOS33 [get_ports jtag_tms_in_BB]
set_property PACKAGE_PIN A22 [get_ports jtag_tdi_in_BB]
set_property IOSTANDARD LVCMOS33 [get_ports jtag_tdi_in_BB]
set_property PACKAGE_PIN A21 [get_ports jtag_tdo_out_BB]
set_property IOSTANDARD LVCMOS33 [get_ports jtag_tdo_out_BB]

#PMOD1
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets jtag_tck_in_EE_IBUF_inst/O]

set_property PACKAGE_PIN D20 [get_ports jtag_tck_in_EE]
set_property IOSTANDARD LVCMOS33 [get_ports jtag_tck_in_EE]
set_property PACKAGE_PIN E20 [get_ports jtag_tms_in_EE]
set_property IOSTANDARD LVCMOS33 [get_ports jtag_tms_in_EE]
set_property PACKAGE_PIN D22 [get_ports jtag_tdi_in_EE]
set_property IOSTANDARD LVCMOS33 [get_ports jtag_tdi_in_EE]
set_property PACKAGE_PIN E22 [get_ports jtag_tdo_out_EE]
set_property IOSTANDARD LVCMOS33 [get_ports jtag_tdo_out_EE]

# =============== UART ===========================
set_property PACKAGE_PIN E13 [get_ports uart_RX]
set_property IOSTANDARD LVCMOS33 [get_ports uart_RX]

set_property PACKAGE_PIN F13 [get_ports uart_TX]
set_property IOSTANDARD LVCMOS33 [get_ports uart_TX]
