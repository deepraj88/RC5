############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project rc5.prj
set_top RC5_SETUP
add_files rc5.c
add_files -tb rc5_test.c
open_solution "rc5_setup"
set_part {xc7a200tfbg676-2} -tool vivado
create_clock -period 10 -name default
source "./rc5.prj/rc5_setup/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
