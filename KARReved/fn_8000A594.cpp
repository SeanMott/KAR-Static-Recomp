//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80005CBC.hpp"



void fn_8000A594(PPC::Runtime::GCContext* context)
{
/*8000A594 00007394*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000A598 00007398*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000A59C 0000739C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A5A0 000073A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000A5A4 000073A4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000A5A8 000073A8*/ PPC::Runtime::ASM::bl(fn_80005CBC);
/*8000A5AC 000073AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*8000A5B0 000073B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A5B4 000073B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000A5B8 000073B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000A5BC 000073BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000A5C0 000073C0*/ PPC::Runtime::ASM::blr();
}