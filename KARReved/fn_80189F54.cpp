//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80189F54(PPC::Runtime::GCContext* context)
{
/*80189F54 00186D54*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80189F58 00186D58*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80189F5C 00186D5C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80189F60 00186D60*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80189F64, 0x80189F64) //this is a jump label
/*80189F64 00186D64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*80189F68 00186D68*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*80189F6C 00186D6C*/ PPC::Runtime::ASM::bne(.L_80189F74);
/*80189F70 00186D70*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80189F74, 0x80189F74) //this is a jump label
/*80189F74 00186D74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*80189F78 00186D78*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*80189F7C 00186D7C*/ PPC::Runtime::ASM::bne(.L_80189F84);
/*80189F80 00186D80*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80189F84, 0x80189F84) //this is a jump label
/*80189F84 00186D84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
/*80189F88 00186D88*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*80189F8C 00186D8C*/ PPC::Runtime::ASM::bne(.L_80189F94);
/*80189F90 00186D90*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80189F94, 0x80189F94) //this is a jump label
/*80189F94 00186D94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r3));
/*80189F98 00186D98*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*80189F9C 00186D9C*/ PPC::Runtime::ASM::bne(.L_80189FA4);
/*80189FA0 00186DA0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80189FA4, 0x80189FA4) //this is a jump label
/*80189FA4 00186DA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r3));
/*80189FA8 00186DA8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*80189FAC 00186DAC*/ PPC::Runtime::ASM::bne(.L_80189FB4);
/*80189FB0 00186DB0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80189FB4, 0x80189FB4) //this is a jump label
/*80189FB4 00186DB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
/*80189FB8 00186DB8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*80189FBC 00186DBC*/ PPC::Runtime::ASM::bne(.L_80189FC4);
/*80189FC0 00186DC0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80189FC4, 0x80189FC4) //this is a jump label
/*80189FC4 00186DC4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x30);
/*80189FC8 00186DC8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x5);
/*80189FCC 00186DCC*/ PPC::Runtime::ASM::bdnz(.L_80189F64);
/*80189FD0 00186DD0*/ PPC::Runtime::ASM::blr();
}