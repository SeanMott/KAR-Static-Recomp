//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F894.hpp"



void fn_8019FF44(PPC::Runtime::GCContext* context)
{
/*8019FF44 0019CD44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019FF48 0019CD48*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019FF4C 0019CD4C*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*8019FF50 0019CD50*/ PPC::Runtime::ASM::li(context->r5, 0xf);
/*8019FF54 0019CD54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019FF58 0019CD58*/ PPC::Runtime::ASM::bl(fn_8019F894);
/*8019FF5C 0019CD5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019FF60 0019CD60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019FF64 0019CD64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019FF68 0019CD68*/ PPC::Runtime::ASM::blr();
}