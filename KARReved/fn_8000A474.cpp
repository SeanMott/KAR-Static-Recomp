//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80005CBC.hpp"



void fn_8000A474(PPC::Runtime::GCContext* context)
{
/*8000A474 00007274*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000A478 00007278*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000A47C 0000727C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A480 00007280*/ PPC::Runtime::ASM::bl(fn_80005CBC);
/*8000A484 00007284*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A488 00007288*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8000A48C 0000728C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000A490 00007290*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000A494 00007294*/ PPC::Runtime::ASM::blr();
}