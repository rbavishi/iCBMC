#!/usr/bin/bash

function icbmc () {
	/home/rbavishi/CBMC\ -\ Bug\ Clustering\ Project/cbmc-5.0/src/cbmc/cbmc "$@"
	return $?
}

function generate_trace () {
	
	##### GOTO Programs #####
	rm -rf trace-debug.txt
	/home/rbavishi/CBMC\ -\ Bug\ Clustering\ Project/cbmc-5.0/src/goto-cc/goto-cc "$1" -o intermediate_program.gb
	/home/rbavishi/CBMC\ -\ Bug\ Clustering\ Project/cbmc-5.0/src/goto-instrument/goto-instrument intermediate_program.gb --dump-c > generate_trace_converted.c
	##### Remove unnecessary stuff #####
	/home/rbavishi/CBMC\ -\ Bug\ Clustering\ Project/cbmc-5.0/src/goto-instrument/goto-instrument intermediate_program.gb --list-symbols | sed  "/^__CPROVER.*$/d" | sed "/^_start.*$/d" > generate_trace_symbols.txt

	##### Generate Counterexample #####
	icbmc generate_trace_converted.c "${@:2}"
	if [ -a "trace-debug.txt" ]; then
		echo "Okay"
	else
		echo "No use"
		#rm -rf intermediate_program.gb "*symbols.txt" "*converted.c"
	fi

}
