//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80079428.hpp"



void fn_8007A4D0(PPC::Runtime::GCContext* context)
{
/*8007A4D0 000772D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007A4D4 000772D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007A4D8 000772D8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8007A4DC 000772DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8007A4E0 000772E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007A4E4 000772E4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8007A4E8 000772E8*/ PPC::Runtime::ASM::bl(fn_80079428);
/*8007A4EC 000772EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007A4F0 000772F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007A4F4 000772F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007A4F8 000772F8*/ PPC::Runtime::ASM::blr();
}