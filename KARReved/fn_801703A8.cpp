//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AB0.hpp"



void fn_801703A8(PPC::Runtime::GCContext* context)
{
/*801703A8 0016D1A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801703AC 0016D1AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801703B0 0016D1B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801703B4 0016D1B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801703B8 0016D1B8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801703BC 0016D1BC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801703C0 0016D1C0*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801703C4 0016D1C4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801703C8 0016D1C8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801703CC 0016D1CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc18, context->r3));
/*801703D0 0016D1D0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801703D4 0016D1D4*/ PPC::Runtime::ASM::beq(.L_801703DC);
/*801703D8 0016D1D8*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_801703DC, 0x801703DC) //this is a jump label
/*801703DC 0016D1DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801703E0 0016D1E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801703E4 0016D1E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801703E8 0016D1E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801703EC 0016D1EC*/ PPC::Runtime::ASM::blr();
}