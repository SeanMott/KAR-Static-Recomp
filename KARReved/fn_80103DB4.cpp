//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F728C.hpp"
#include "fn_800EA180.hpp"



void fn_80103DB4(PPC::Runtime::GCContext* context)
{
/*80103DB4 00100BB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80103DB8 00100BB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80103DBC 00100BBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80103DC0 00100BC0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80103DC4 00100BC4*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*80103DC8 00100BC8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80103DCC 00100BCC*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80103DD0 00100BD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80103DD4 00100BD4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80103DD8 00100BD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80103DDC 00100BDC*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*80103DE0 00100BE0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80103DE4 00100BE4*/ PPC::Runtime::ASM::b(.L_80103E1C);
RUNTIME_PPC_JUMP_LABEL(.L_80103DE8, 0x80103DE8) //this is a jump label
/*80103DE8 00100BE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r28));
/*80103DEC 00100BEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r28));
/*80103DF0 00100BF0*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r29);
/*80103DF4 00100BF4*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r29);
/*80103DF8 00100BF8*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*80103DFC 00100BFC*/ PPC::Runtime::ASM::beq(.L_80103E14);
/*80103E00 00100C00*/ PPC::Runtime::ASM::bl(fn_800F728C);
/*80103E04 00100C04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80103E08 00100C08*/ PPC::Runtime::ASM::bne(.L_80103E14);
/*80103E0C 00100C0C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r28));
/*80103E10 00100C10*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80103E14, 0x80103E14) //this is a jump label
/*80103E14 00100C14*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x8);
/*80103E18 00100C18*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80103E1C, 0x80103E1C) //this is a jump label
/*80103E1C 00100C1C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*80103E20 00100C20*/ PPC::Runtime::ASM::cmpw(context->r26, context->r7);
/*80103E24 00100C24*/ PPC::Runtime::ASM::blt(.L_80103DE8);
/*80103E28 00100C28*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80103E2C 00100C2C*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*80103E30 00100C30*/ PPC::Runtime::ASM::mr(context->r5, context->r8);
/*80103E34 00100C34*/ PPC::Runtime::ASM::mr(context->r4, context->r8);
/*80103E38 00100C38*/ PPC::Runtime::ASM::mtctr(context->r7);
/*80103E3C 00100C3C*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*80103E40 00100C40*/ PPC::Runtime::ASM::ble(.L_80103E68);
RUNTIME_PPC_JUMP_LABEL(.L_80103E44, 0x80103E44) //this is a jump label
/*80103E44 00100C44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r6));
/*80103E48 00100C48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r6));
/*80103E4C 00100C4C*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r4);
/*80103E50 00100C50*/ PPC::Runtime::ASM::xor(context->r3, context->r3, context->r5);
/*80103E54 00100C54*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80103E58 00100C58*/ PPC::Runtime::ASM::bne(.L_80103E68);
/*80103E5C 00100C5C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
/*80103E60 00100C60*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*80103E64 00100C64*/ PPC::Runtime::ASM::bdnz(.L_80103E44);
RUNTIME_PPC_JUMP_LABEL(.L_80103E68, 0x80103E68) //this is a jump label
/*80103E68 00100C68*/ PPC::Runtime::ASM::cmpw(context->r8, context->r7);
/*80103E6C 00100C6C*/ PPC::Runtime::ASM::bne(.L_80103EA0);
/*80103E70 00100C70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r31));
/*80103E74 00100C74*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80103E78 00100C78*/ PPC::Runtime::ASM::beq(.L_80103E98);
/*80103E7C 00100C7C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 80103E80 00100C80  54 00 C0 02 */ extlwi context->r0 , context->r0 , 2 , 24
/*80103E84 00100C84*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 31);
/*80103E88 00100C88*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80103E8C 00100C8C*/ PPC::Runtime::ASM::beq(.L_80103E98);
/*80103E90 00100C90*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x118);
/*80103E94 00100C94*/ PPC::Runtime::ASM::bl(fn_800EA180);
RUNTIME_PPC_JUMP_LABEL(.L_80103E98, 0x80103E98) //this is a jump label
/*80103E98 00100C98*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80103E9C 00100C9C*/ PPC::Runtime::ASM::bl(fn_80428F64);
RUNTIME_PPC_JUMP_LABEL(.L_80103EA0, 0x80103EA0) //this is a jump label
/*80103EA0 00100CA0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80103EA4 00100CA4*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80103EA8 00100CA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80103EAC 00100CAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80103EB0 00100CB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80103EB4 00100CB4*/ PPC::Runtime::ASM::blr();
}