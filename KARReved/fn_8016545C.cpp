//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8016545C(PPC::Runtime::GCContext* context)
{
/*8016545C 0016225C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80165460 00162260*/ PPC::Runtime::ASM::mflr(context->r0);
/*80165464 00162264*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80165468 00162268*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016546C 0016226C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80165470 00162270*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80165474 00162274*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9cc, context->r3));
/*80165478 00162278*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016547C 0016227C*/ PPC::Runtime::ASM::beq(.L_8016548C);
/*80165480 00162280*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80165484 00162284*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80165488 00162288*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9cc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8016548C, 0x8016548C) //this is a jump label
/*8016548C 0016228C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80165490 00162290*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80165494 00162294*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80165498 00162298*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016549C 0016229C*/ PPC::Runtime::ASM::blr();
}