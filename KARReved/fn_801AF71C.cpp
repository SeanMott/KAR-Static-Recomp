//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_abilityTimerDecreaser.hpp"
#include "fn_801AF7A8.hpp"
#include "fn_AS_LoseCopyAbility.hpp"



void fn_801AF71C(PPC::Runtime::GCContext* context)
{
/*801AF71C 001AC51C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AF720 001AC520*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AF724 001AC524*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AF728 001AC528*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AF72C 001AC52C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AF730 001AC530*/ PPC::Runtime::ASM::bl(fn_abilityTimerDecreaser);
/*801AF734 001AC534*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x91c, context->r31));
/*801AF738 001AC538*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801AF73C 001AC53C*/ PPC::Runtime::ASM::bne(.L_801AF750);
/*801AF740 001AC540*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AF744 001AC544*/ PPC::Runtime::ASM::bl(fn_801AF7A8);
/*801AF748 001AC548*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AF74C 001AC54C*/ PPC::Runtime::ASM::bl(fn_AS_LoseCopyAbility);
RUNTIME_PPC_JUMP_LABEL(.L_801AF750, 0x801AF750) //this is a jump label
/*801AF750 001AC550*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AF754 001AC554*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AF758 001AC558*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AF75C 001AC55C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AF760 001AC560*/ PPC::Runtime::ASM::blr();
}