//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190948.hpp"
#include "fn_setStickXYandChargeBool.hpp"
#include "fn_checkIfGettingOffBike.hpp"
#include "fn_ability_Plasma_Shot.hpp"
#include "fn_801AB168.hpp"



void fn_801B2EA0(PPC::Runtime::GCContext* context)
{
/*801B2EA0 001AFCA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801B2EA4 001AFCA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B2EA8 001AFCA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B2EAC 001AFCAC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801B2EB0 001AFCB0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*801B2EB4 001AFCB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B2EB8 001AFCB8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B2EBC 001AFCBC*/ PPC::Runtime::ASM::bl(fn_80190948);
/*801B2EC0 001AFCC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801B2EC4 001AFCC4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801B2EC8 001AFCC8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B2ECC 001AFCCC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B2ED0 001AFCD0*/ PPC::Runtime::ASM::bl(fn_setStickXYandChargeBool);
/*801B2ED4 001AFCD4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B2ED8 001AFCD8*/ PPC::Runtime::ASM::bl(fn_checkIfGettingOffBike);
/*801B2EDC 001AFCDC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B2EE0 001AFCE0*/ PPC::Runtime::ASM::bne(.L_801B2F34);
/*801B2EE4 001AFCE4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B2EE8 001AFCE8*/ PPC::Runtime::ASM::bl(fn_ability_Plasma_Shot);
/*801B2EEC 001AFCEC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B2EF0 001AFCF0*/ PPC::Runtime::ASM::bne(.L_801B2F34);
/*801B2EF4 001AFCF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B2EF8 001AFCF8*/ PPC::Runtime::ASM::bl(fn_801AB168);
/*801B2EFC 001AFCFC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B2F00 001AFD00*/ PPC::Runtime::ASM::beq(.L_801B2F34);
/*801B2F04 001AFD04*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801B2F08 001AFD08*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801B2F0C 001AFD0C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c8, context->r31));
/*801B2F10 001AFD10*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E15C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B2F14 001AFD14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B2F18 001AFD18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801B2F1C 001AFD1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r3));
/*801B2F20 001AFD20*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*801B2F24 001AFD24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2F28 001AFD28*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801B2F2C 001AFD2C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801B2F30 001AFD30*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801B2F34, 0x801B2F34) //this is a jump label
/*801B2F34 001AFD34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B2F38 001AFD38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B2F3C 001AFD3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B2F40 001AFD40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801B2F44 001AFD44*/ PPC::Runtime::ASM::blr();
}