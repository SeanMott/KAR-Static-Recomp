//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_SetEffectivePriority.hpp"



void fn___OSPromoteThread(PPC::Runtime::GCContext* context)
{
/*803D9E28 003D6C28*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D9E2C 003D6C2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D9E30 003D6C30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803D9E34 003D6C34*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D9E38 003D6C38*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_803D9E3C, 0x803D9E3C) //this is a jump label
/*803D9E3C 003D6C3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r3));
/*803D9E40 003D6C40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803D9E44 003D6C44*/ PPC::Runtime::ASM::bgt(.L_803D9E64);
/*803D9E48 003D6C48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r3));
/*803D9E4C 003D6C4C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r31);
/*803D9E50 003D6C50*/ PPC::Runtime::ASM::ble(.L_803D9E64);
/*803D9E54 003D6C54*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803D9E58 003D6C58*/ PPC::Runtime::ASM::bl(fn_SetEffectivePriority);
/*803D9E5C 003D6C5C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D9E60 003D6C60*/ PPC::Runtime::ASM::bne(.L_803D9E3C);
RUNTIME_PPC_JUMP_LABEL(.L_803D9E64, 0x803D9E64) //this is a jump label
/*803D9E64 003D6C64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D9E68 003D6C68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D9E6C 003D6C6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803D9E70 003D6C70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D9E74 003D6C74*/ PPC::Runtime::ASM::blr();
}