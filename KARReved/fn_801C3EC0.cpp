//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0620.hpp"



void fn_801C3EC0(PPC::Runtime::GCContext* context)
{
/*801C3EC0 001C0CC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3EC4 001C0CC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C3EC8 001C0CC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3ECC 001C0CCC*/ PPC::Runtime::ASM::bl(fn_801A0620);
/*801C3ED0 001C0CD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3ED4 001C0CD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C3ED8 001C0CD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C3EDC 001C0CDC*/ PPC::Runtime::ASM::blr();
}