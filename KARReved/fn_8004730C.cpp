//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_801363BC.hpp"



void fn_8004730C(PPC::Runtime::GCContext* context)
{
/*8004730C 0004410C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80047310 00044110*/ PPC::Runtime::ASM::mflr(context->r0);
/*80047314 00044114*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80047318 00044118*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8004731C 0004411C*/ PPC::Runtime::ASM::bl(fn_801363BC);
/*80047320 00044120*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80047324 00044124*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80047328 00044128*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004732C 0004412C*/ PPC::Runtime::ASM::blr();
}