//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190948.hpp"
#include "fn_setStickXYandChargeBool.hpp"



void fn_8019FBF4(PPC::Runtime::GCContext* context)
{
/*8019FBF4 0019C9F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8019FBF8 0019C9F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019FBFC 0019C9FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019FC00 0019CA00*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8019FC04 0019CA04*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8019FC08 0019CA08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019FC0C 0019CA0C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8019FC10 0019CA10*/ PPC::Runtime::ASM::bl(fn_80190948);
/*8019FC14 0019CA14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*8019FC18 0019CA18*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8019FC1C 0019CA1C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019FC20 0019CA20*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019FC24 0019CA24*/ PPC::Runtime::ASM::bl(fn_setStickXYandChargeBool);
/*8019FC28 0019CA28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019FC2C 0019CA2C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019FC30 0019CA30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019FC34 0019CA34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8019FC38 0019CA38*/ PPC::Runtime::ASM::blr();
}