//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006B03C.hpp"



void fn_8019C588(PPC::Runtime::GCContext* context)
{
/*8019C588 00199388*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019C58C 0019938C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019C590 00199390*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x5c);
/*8019C594 00199394*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C598 00199398*/ PPC::Runtime::ASM::bl(fn_8006B03C);
/*8019C59C 0019939C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C5A0 001993A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019C5A4 001993A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019C5A8 001993A8*/ PPC::Runtime::ASM::blr();
}