//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80277C84.hpp"



void fn_8027A220(PPC::Runtime::GCContext* context)
{
/*8027A220 00277020*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8027A224 00277024*/ PPC::Runtime::ASM::mflr(context->r0);
/*8027A228 00277028*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8027A22C 0027702C*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8027A230 00277030*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027A234 00277034*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8027A238 00277038*/ PPC::Runtime::ASM::bl(fn_80277C84);
/*8027A23C 0027703C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027A240 00277040*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8027A244 00277044*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8027A248 00277048*/ PPC::Runtime::ASM::blr();
}