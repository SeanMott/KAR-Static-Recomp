//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254058.hpp"



void fn_8025A33C(PPC::Runtime::GCContext* context)
{
/*8025A33C 0025713C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025A340 00257140*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025A344 00257144*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A348 00257148*/ PPC::Runtime::ASM::bl(fn_80254058);
/*8025A34C 0025714C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A350 00257150*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025A354 00257154*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025A358 00257158*/ PPC::Runtime::ASM::blr();
}