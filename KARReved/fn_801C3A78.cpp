//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0180.hpp"



void fn_801C3A78(PPC::Runtime::GCContext* context)
{
/*801C3A78 001C0878*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3A7C 001C087C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C3A80 001C0880*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3A84 001C0884*/ PPC::Runtime::ASM::bl(fn_801A0180);
/*801C3A88 001C0888*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3A8C 001C088C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C3A90 001C0890*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C3A94 001C0894*/ PPC::Runtime::ASM::blr();
}