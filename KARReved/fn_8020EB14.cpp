//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_8020EB14(PPC::Runtime::GCContext* context)
{
/*8020EB14 0020B914*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020EB18 0020B918*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020EB1C 0020B91C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020EB20 0020B920*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*8020EB24 0020B924*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020EB28 0020B928*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020EB2C 0020B92C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020EB30 0020B930*/ PPC::Runtime::ASM::blr();
}