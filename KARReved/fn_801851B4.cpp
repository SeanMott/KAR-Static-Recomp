//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801851B4(PPC::Runtime::GCContext* context)
{
/*801851B4 00181FB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801851B8 00181FB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801851BC 00181FBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801851C0 00181FC0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801851C4 00181FC4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801851C8 00181FC8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801851CC 00181FCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1188, context->r3));
/*801851D0 00181FD0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801851D4 00181FD4*/ PPC::Runtime::ASM::beq(.L_801851E4);
/*801851D8 00181FD8*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*801851DC 00181FDC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801851E0 00181FE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1188, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801851E4, 0x801851E4) //this is a jump label
/*801851E4 00181FE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801851E8 00181FE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801851EC 00181FEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801851F0 00181FF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801851F4 00181FF4*/ PPC::Runtime::ASM::blr();
}