//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80277C84.hpp"



void fn_8027A5AC(PPC::Runtime::GCContext* context)
{
/*8027A5AC 002773AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8027A5B0 002773B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8027A5B4 002773B4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8027A5B8 002773B8*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8027A5BC 002773BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027A5C0 002773C0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8027A5C4 002773C4*/ PPC::Runtime::ASM::bl(fn_80277C84);
/*8027A5C8 002773C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027A5CC 002773CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8027A5D0 002773D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8027A5D4 002773D4*/ PPC::Runtime::ASM::blr();
}