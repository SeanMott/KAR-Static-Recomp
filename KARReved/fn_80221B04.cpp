//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802364E0.hpp"
#include "fn_802364E0.hpp"



void fn_80221B04(PPC::Runtime::GCContext* context)
{
/*80221B04 0021E904*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80221B08 0021E908*/ PPC::Runtime::ASM::mflr(context->r0);
/*80221B0C 0021E90C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80221B10 0021E910*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80221B14 0021E914*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80221B18 0021E918*/ PPC::Runtime::ASM::bl(fn_802364E0);
/*80221B1C 0021E91C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*80221B20 0021E920*/ PPC::Runtime::ASM::bl(fn_802364E0);
/*80221B24 0021E924*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r31));
/*80221B28 0021E928*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80221B2C 0021E92C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80221B30 0021E930*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80221B34 0021E934*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80221B38 0021E938*/ PPC::Runtime::ASM::blr();
}