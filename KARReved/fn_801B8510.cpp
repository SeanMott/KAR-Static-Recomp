//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2168.hpp"



void fn_801B8510(PPC::Runtime::GCContext* context)
{
/*801B8510 001B5310*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B8514 001B5314*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B8518 001B5318*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B851C 001B531C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B8520 001B5320*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801B8524 001B5324*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r4));
/*801B8528 001B5328*/ PPC::Runtime::ASM::bl(fn_801A2168);
/*801B852C 001B532C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B8530 001B5330*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B8534 001B5334*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B8538 001B5338*/ PPC::Runtime::ASM::blr();
}