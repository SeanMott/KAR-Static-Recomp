//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802501D4.hpp"
#include "fn_80250400.hpp"



void fn_80260250(PPC::Runtime::GCContext* context)
{
/*80260250 0025D050*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80260254 0025D054*/ PPC::Runtime::ASM::mflr(context->r0);
/*80260258 0025D058*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026025C 0025D05C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80260260 0025D060*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80260264 0025D064*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80260268 0025D068*/ PPC::Runtime::ASM::bl(fn_802501D4);
/*8026026C 0025D06C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80260270 0025D070*/ PPC::Runtime::ASM::bl(fn_80250400);
/*80260274 0025D074*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80260278 0025D078*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026027C 0025D07C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80260280 0025D080*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80260284 0025D084*/ PPC::Runtime::ASM::blr();
}