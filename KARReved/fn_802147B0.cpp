//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF754.hpp"
#include "fn_801FED74.hpp"
#include "fn_802147EC.hpp"



void fn_802147B0(PPC::Runtime::GCContext* context)
{
/*802147B0 002115B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802147B4 002115B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802147B8 002115B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802147BC 002115BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802147C0 002115C0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802147C4 002115C4*/ PPC::Runtime::ASM::bl(fn_801FF754);
/*802147C8 002115C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802147CC 002115CC*/ PPC::Runtime::ASM::bl(fn_801FED74);
/*802147D0 002115D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802147D4 002115D4*/ PPC::Runtime::ASM::bl(fn_802147EC);
/*802147D8 002115D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802147DC 002115DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802147E0 002115E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802147E4 002115E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802147E8 002115E8*/ PPC::Runtime::ASM::blr();
}