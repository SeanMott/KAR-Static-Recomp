//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015FA5C.hpp"



void fn_80135714(PPC::Runtime::GCContext* context)
{
/*80135714 00132514*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135718 00132518*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013571C 0013251C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135720 00132520*/ PPC::Runtime::ASM::bl(fn_8015FA5C);
/*80135724 00132524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135728 00132528*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013572C 0013252C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135730 00132530*/ PPC::Runtime::ASM::blr();
}