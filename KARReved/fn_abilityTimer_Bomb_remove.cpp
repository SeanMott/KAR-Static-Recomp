//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_ability_Bomb_end.hpp"
#include "fn_revertKirbyModel?.hpp"



void fn_abilityTimer_Bomb_remove(PPC::Runtime::GCContext* context)
{
/*801B13EC 001AE1EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B13F0 001AE1F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B13F4 001AE1F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B13F8 001AE1F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B13FC 001AE1FC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B1400 001AE200*/ PPC::Runtime::ASM::bl(fn_ability_Bomb_end);
/*801B1404 001AE204*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B1408 001AE208*/ PPC::Runtime::ASM::bl(fn_revertKirbyModel?);
/*801B140C 001AE20C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B1410 001AE210*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B1414 001AE214*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B1418 001AE218*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B141C 001AE21C*/ PPC::Runtime::ASM::blr();
}