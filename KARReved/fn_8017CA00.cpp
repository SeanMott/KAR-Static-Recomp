//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8017CA00(PPC::Runtime::GCContext* context)
{
/*8017CA00 00179800*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017CA04 00179804*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017CA08 00179808*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017CA0C 0017980C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017CA10 00179810*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8017CA14 00179814*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017CA18 00179818*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*8017CA1C 0017981C*/ PPC::Runtime::ASM::extsb(context->r4, context->r31);
/*8017CA20 00179820*/ PPC::Runtime::ASM::bl(fn_8044F8C8);
/*8017CA24 00179824*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017CA28 00179828*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017CA2C 0017982C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017CA30 00179830*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017CA34 00179834*/ PPC::Runtime::ASM::blr();
}