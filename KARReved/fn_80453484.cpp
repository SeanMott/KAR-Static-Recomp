//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8045C7D4.hpp"



void fn_80453484(PPC::Runtime::GCContext* context)
{
/*80453484 00450284*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80453488 00450288*/ PPC::Runtime::ASM::mflr(context->r0);
/*8045348C 0045028C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80453490 00450290*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80453494 00450294*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80453498 00450298*/ PPC::Runtime::ASM::bl(fn_8045C7D4);
/*8045349C 0045029C*/ PPC::Runtime::ASM::divw(context->r0, context->r3, context->r31);
/*804534A0 004502A0*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r31);
/*804534A4 004502A4*/ PPC::Runtime::ASM::subf(context->r3, context->r0, context->r3);
/*804534A8 004502A8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x20);
/*804534AC 004502AC*/ PPC::Runtime::ASM::subf(context->r3, context->r0, context->r31);
/*804534B0 004502B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804534B4 004502B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804534B8 004502B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804534BC 004502BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804534C0 004502C0*/ PPC::Runtime::ASM::blr();
}