//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8017B5F8(PPC::Runtime::GCContext* context)
{
/*8017B5F8 001783F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017B5FC 001783FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017B600 00178400*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017B604 00178404*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017B608 00178408*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017B60C 0017840C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8017B610 00178410*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xeb4, context->r3));
/*8017B614 00178414*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8017B618 00178418*/ PPC::Runtime::ASM::beq(.L_8017B628);
/*8017B61C 0017841C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8017B620 00178420*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8017B624 00178424*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xeb4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8017B628, 0x8017B628) //this is a jump label
/*8017B628 00178428*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xeb8, context->r31));
/*8017B62C 0017842C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8017B630 00178430*/ PPC::Runtime::ASM::beq(.L_8017B640);
/*8017B634 00178434*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8017B638 00178438*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8017B63C 0017843C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xeb8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8017B640, 0x8017B640) //this is a jump label
/*8017B640 00178440*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017B644 00178444*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017B648 00178448*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017B64C 0017844C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017B650 00178450*/ PPC::Runtime::ASM::blr();
}