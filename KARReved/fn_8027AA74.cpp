//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80277C84.hpp"



void fn_8027AA74(PPC::Runtime::GCContext* context)
{
/*8027AA74 00277874*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8027AA78 00277878*/ PPC::Runtime::ASM::mflr(context->r0);
/*8027AA7C 0027787C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8027AA80 00277880*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8027AA84 00277884*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027AA88 00277888*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8027AA8C 0027788C*/ PPC::Runtime::ASM::bl(fn_80277C84);
/*8027AA90 00277890*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027AA94 00277894*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8027AA98 00277898*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8027AA9C 0027789C*/ PPC::Runtime::ASM::blr();
}