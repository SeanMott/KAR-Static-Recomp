//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015B57C.hpp"



void fn_80135574(PPC::Runtime::GCContext* context)
{
/*80135574 00132374*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135578 00132378*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013557C 0013237C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135580 00132380*/ PPC::Runtime::ASM::bl(fn_8015B57C);
/*80135584 00132384*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135588 00132388*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013558C 0013238C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135590 00132390*/ PPC::Runtime::ASM::blr();
}