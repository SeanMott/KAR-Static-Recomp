//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802501D4.hpp"
#include "fn_80250400.hpp"



void fn_80257974(PPC::Runtime::GCContext* context)
{
/*80257974 00254774*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80257978 00254778*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025797C 0025477C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80257980 00254780*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80257984 00254784*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80257988 00254788*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025798C 0025478C*/ PPC::Runtime::ASM::bl(fn_802501D4);
/*80257990 00254790*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80257994 00254794*/ PPC::Runtime::ASM::bl(fn_80250400);
/*80257998 00254798*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025799C 0025479C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802579A0 002547A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802579A4 002547A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802579A8 002547A8*/ PPC::Runtime::ASM::blr();
}