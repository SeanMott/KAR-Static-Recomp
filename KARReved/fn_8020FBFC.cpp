//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"



void fn_8020FBFC(PPC::Runtime::GCContext* context)
{
/*8020FBFC 0020C9FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020FC00 0020CA00*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020FC04 0020CA04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E251C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020FC08 0020CA08*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8020FC0C 0020CA0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020FC10 0020CA10*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8020FC14 0020CA14*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8020FC18 0020CA18*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2520 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020FC1C 0020CA1C*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8020FC20 0020CA20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020FC24 0020CA24*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020FC28 0020CA28*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020FC2C 0020CA2C*/ PPC::Runtime::ASM::blr();
}