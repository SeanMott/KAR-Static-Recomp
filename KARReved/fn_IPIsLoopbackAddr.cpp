//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_IPIsLoopbackAddr(PPC::Runtime::GCContext* context)
{
/*8046DC28 0046AA28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8046DC2C 0046AA2C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7f);
/*8046DC30 0046AA30*/ PPC::Runtime::ASM::bne(.L_8046DC3C);
/*8046DC34 0046AA34*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8046DC38 0046AA38*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8046DC3C, 0x8046DC3C) //this is a jump label
/*8046DC3C 0046AA3C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8046DC40 0046AA40*/ PPC::Runtime::ASM::blr();
}