//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80221F54.hpp"
#include "fn_80222144.hpp"
#include "fn_802221B8.hpp"
#include "fn_80062ECC.hpp"
#include "fn_80226E18.hpp"



void fn_80226CD0(PPC::Runtime::GCContext* context)
{
/*80226CD0 00223AD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80226CD4 00223AD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80226CD8 00223AD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80226CDC 00223ADC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80226CE0 00223AE0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80226CE4 00223AE4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80226CE8 00223AE8*/ PPC::Runtime::ASM::bl(fn_80221F54);
/*80226CEC 00223AEC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r30));
/* 80226CF0 00223AF0  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80226CF4 00223AF4*/ PPC::Runtime::ASM::beq(.L_80226D5C);
/*80226CF8 00223AF8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80226CFC 00223AFC*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80226D00 00223B00*/ PPC::Runtime::ASM::bl(fn_80222144);
/*80226D04 00223B04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80226D08 00223B08*/ PPC::Runtime::ASM::bne(.L_80226D14);
/*80226D0C 00223B0C*/ PPC::Runtime::ASM::li(context->r31, 0x1);
/*80226D10 00223B10*/ PPC::Runtime::ASM::b(.L_80226D4C);
RUNTIME_PPC_JUMP_LABEL(.L_80226D14, 0x80226D14) //this is a jump label
/*80226D14 00223B14*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80226D18 00223B18*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80226D1C 00223B1C*/ PPC::Runtime::ASM::bl(fn_802221B8);
/*80226D20 00223B20*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x94);
/*80226D24 00223B24*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80226D28 00223B28*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*80226D2C 00223B2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*80226D30 00223B30*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E29A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80226D34 00223B34*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80226D38 00223B38*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*80226D3C 00223B3C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80226D40 00223B40*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80226D44 00223B44*/ PPC::Runtime::ASM::bne(.L_80226D4C);
/*80226D48 00223B48*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80226D4C, 0x80226D4C) //this is a jump label
/*80226D4C 00223B4C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80226D50 00223B50*/ PPC::Runtime::ASM::beq(.L_80226D5C);
/*80226D54 00223B54*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80226D58 00223B58*/ PPC::Runtime::ASM::bl(fn_80226E18);
RUNTIME_PPC_JUMP_LABEL(.L_80226D5C, 0x80226D5C) //this is a jump label
/*80226D5C 00223B5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80226D60 00223B60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80226D64 00223B64*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80226D68 00223B68*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80226D6C 00223B6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80226D70 00223B70*/ PPC::Runtime::ASM::blr();
}