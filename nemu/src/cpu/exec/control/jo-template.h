#include "cpu/exec/template-start.h"

#define instr jo


static void do_execute() {
	DATA_TYPE_S displacement = op_src->val;
	print_asm("jo %x", cpu.eip + 1 + DATA_BYTE + displacement);
	if (cpu.OF == 1)cpu.eip += displacement;
}
make_instr_helper(i)


#include "cpu/exec/template-end.h"
