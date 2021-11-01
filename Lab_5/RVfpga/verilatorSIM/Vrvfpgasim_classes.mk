# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrvfpgasim.mk for the caller.

### Switches...
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace)
VM_TRACE = 1
# Tracing threadeds output mode?  0/1 (from --trace-fst-thread)
VM_TRACE_THREADED = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vrvfpgasim \
	Vrvfpgasim_rvfpgasim \
	Vrvfpgasim___024unit \
	Vrvfpgasim_swervolf_core__B0 \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000 \
	Vrvfpgasim_wb_mem_wrapper__M1000_I0 \
	Vrvfpgasim_dpram64__S1000_MB0 \
	Vrvfpgasim_dpram64__S10000_MB0 \
	Vrvfpgasim_axi_demux__pi3 \
	Vrvfpgasim_axi_mux__pi5 \
	Vrvfpgasim_axi_err_slv__pi4 \
	Vrvfpgasim_axi_demux_id_counters__pi6 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vrvfpgasim__Dpi \
	Vrvfpgasim__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vrvfpgasim__Syms \
	Vrvfpgasim__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
