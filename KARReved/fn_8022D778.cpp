//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_IChooseCaptain_SetPhaseReady_TakeInt.hpp"



void fn_8022D778(PPC::Runtime::GCContext* context)
{
/*8022D778 0022A578*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022D77C 0022A57C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022D780 0022A580*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022D784 0022A584*/ PPC::Runtime::ASM::bl(fn_IChooseCaptain_SetPhaseReady_TakeInt);
/*8022D788 0022A588*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022D78C 0022A58C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022D790 0022A590*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022D794 0022A594*/ PPC::Runtime::ASM::blr();
}