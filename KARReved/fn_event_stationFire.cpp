//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EE6CC.hpp"
#include "fn_800EE6C4.hpp"
#include "fn_8010A774.hpp"
#include "fn_800EE660.hpp"



void fn_event_stationFire(PPC::Runtime::GCContext* context)
{
/*8011179C 0010E59C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801117A0 0010E5A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801117A4 0010E5A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801117A8 0010E5A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801117AC 0010E5AC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801117B0 0010E5B0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801117B4 0010E5B4*/ PPC::Runtime::ASM::bl(fn_800EE6CC);
/*801117B8 0010E5B8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801117BC 0010E5BC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801117C0 0010E5C0*/ PPC::Runtime::ASM::bl(fn_800EE6C4);
/*801117C4 0010E5C4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r31);
/*801117C8 0010E5C8*/ PPC::Runtime::ASM::blt(.L_801117D8);
/*801117CC 0010E5CC*/ PPC::Runtime::ASM::bl(fn_8010A774);
/*801117D0 0010E5D0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801117D4 0010E5D4*/ PPC::Runtime::ASM::bl(fn_800EE660);
RUNTIME_PPC_JUMP_LABEL(.L_801117D8, 0x801117D8) //this is a jump label
/*801117D8 0010E5D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801117DC 0010E5DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801117E0 0010E5E0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801117E4 0010E5E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801117E8 0010E5E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801117EC 0010E5EC*/ PPC::Runtime::ASM::blr();
}