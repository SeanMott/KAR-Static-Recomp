//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80316220.hpp"



void fn_80316188(PPC::Runtime::GCContext* context)
{
/*80316188 00312F88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8031618C 00312F8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80316190 00312F90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80316194 00312F94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80316198 00312F98*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8031619C 00312F9C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 803161A0 00312FA0  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*803161A4 00312FA4*/ PPC::Runtime::ASM::beq(.L_803161CC);
/*803161A8 00312FA8*/ PPC::Runtime::ASM::bl(fn_80316220);
/*803161AC 00312FAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803161B0 00312FB0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803161B4 00312FB4*/ PPC::Runtime::ASM::beq(.L_803161BC);
/*803161B8 00312FB8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_803161BC, 0x803161BC) //this is a jump label
/*803161BC 00312FBC*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*803161C0 00312FC0*/ PPC::Runtime::ASM::ble(.L_803161CC);
/*803161C4 00312FC4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803161C8 00312FC8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_803161CC, 0x803161CC) //this is a jump label
/*803161CC 00312FCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803161D0 00312FD0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803161D4 00312FD4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803161D8 00312FD8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803161DC 00312FDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803161E0 00312FE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803161E4 00312FE4*/ PPC::Runtime::ASM::blr();
}