//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80197008.hpp"



void fn_8019B4CC(PPC::Runtime::GCContext* context)
{
/*8019B4CC 001982CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019B4D0 001982D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019B4D4 001982D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B4D8 001982D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019B4DC 001982DC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8019B4E0 001982E0*/ PPC::Runtime::ASM::bl(fn_80197008);
/*8019B4E4 001982E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019B4E8 001982E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*8019B4EC 001982EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019B4F0 001982F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019B4F4 001982F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B4F8 001982F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019B4FC 001982FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019B500 00198300*/ PPC::Runtime::ASM::blr();
}