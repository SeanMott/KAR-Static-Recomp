//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000B57C(PPC::Runtime::GCContext* context)
{
/*8000B57C 0000837C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000B580 00008380*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000B584 00008384*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B588 00008388*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B58C 0000838C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000B590 00008390*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000B594 00008394*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x37c, context->r3));
/*8000B598 00008398*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B59C 0000839C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B5A0 000083A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000B5A4 000083A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000B5A8 000083A8*/ PPC::Runtime::ASM::blr();
}