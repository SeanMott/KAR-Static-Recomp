//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_802157C4(PPC::Runtime::GCContext* context)
{
/*802157C4 002125C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802157C8 002125C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802157CC 002125CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802157D0 002125D0*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*802157D4 002125D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802157D8 002125D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802157DC 002125DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802157E0 002125E0*/ PPC::Runtime::ASM::blr();
}