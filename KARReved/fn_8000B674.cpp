//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000B674(PPC::Runtime::GCContext* context)
{
/*8000B674 00008474*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000B678 00008478*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000B67C 0000847C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B680 00008480*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B684 00008484*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000B688 00008488*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000B68C 0000848C*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8000B690 00008490*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8000B694 00008494*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc8, context->r3));
/*8000B698 00008498*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B69C 0000849C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B6A0 000084A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000B6A4 000084A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000B6A8 000084A8*/ PPC::Runtime::ASM::blr();
}