//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80233DB4.hpp"
#include "fn_80233DDC.hpp"
#include "fn_80233DDC.hpp"
#include "fn_80233E24.hpp"
#include "fn_80235190.hpp"
#include "fn_8023475C.hpp"
#include "fn_8023DFE0.hpp"
#include "fn_8023DFE0.hpp"



void fn_8023CCB4(PPC::Runtime::GCContext* context)
{
/*8023CCB4 00239AB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8023CCB8 00239AB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023CCBC 00239ABC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023CCC0 00239AC0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8023CCC4 00239AC4*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8023CCC8 00239AC8*/ PPC::Runtime::ASM::lis(context->r6, lbl_804B5518 @ Get_MemoryOffset_HighBit);
/*8023CCCC 00239ACC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8023CCD0 00239AD0*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8023CCD4 00239AD4*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8023CCD8 00239AD8*/ PPC::Runtime::ASM::addi(context->r28, context->r6, lbl_804B5518 @ Get_MemoryOffset_LowBit);
/*8023CCDC 00239ADC*/ PPC::Runtime::ASM::bl(fn_80233DB4);
/* 8023CCE0 00239AE0  7C 7B 1B 79 */ mr. context->r27 , context->r3
/*8023CCE4 00239AE4*/ PPC::Runtime::ASM::bne(.L_8023CCF0);
/*8023CCE8 00239AE8*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*8023CCEC 00239AEC*/ PPC::Runtime::ASM::b(.L_8023CD2C);
RUNTIME_PPC_JUMP_LABEL(.L_8023CCF0, 0x8023CCF0) //this is a jump label
/*8023CCF0 00239AF0*/ PPC::Runtime::ASM::li(context->r3, 0x19);
/*8023CCF4 00239AF4*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8023CCF8 00239AF8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8023CCFC 00239AFC*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/* 8023CD00 00239B00  7C 7A 1B 79 */ mr. context->r26 , context->r3
/*8023CD04 00239B04*/ PPC::Runtime::ASM::beq(.L_8023CD2C);
/*8023CD08 00239B08*/ PPC::Runtime::ASM::lis(context->r4, fn_80233DDC @ Get_MemoryOffset_HighBit);
/*8023CD0C 00239B0C*/ PPC::Runtime::ASM::mr(context->r6, context->r27);
/*8023CD10 00239B10*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_80233DDC @ Get_MemoryOffset_LowBit);
/*8023CD14 00239B14*/ PPC::Runtime::ASM::li(context->r4, 0x19);
/*8023CD18 00239B18*/ PPC::Runtime::ASM::bl(fn_GObj_AddUserData);
/*8023CD1C 00239B1C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8023CD20 00239B20*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8023CD24 00239B24*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*8023CD28 00239B28*/ PPC::Runtime::ASM::bl(fn_80233E24);
RUNTIME_PPC_JUMP_LABEL(.L_8023CD2C, 0x8023CD2C) //this is a jump label
/*8023CD2C 00239B2C*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8023CD30 00239B30*/ PPC::Runtime::ASM::bne(.L_8023CD3C);
/*8023CD34 00239B34*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023CD38 00239B38*/ PPC::Runtime::ASM::b(.L_8023CE04);
RUNTIME_PPC_JUMP_LABEL(.L_8023CD3C, 0x8023CD3C) //this is a jump label
/*8023CD3C 00239B3C*/ PPC::Runtime::ASM::subis(context->r0, context->r29, 0x5);
/*8023CD40 00239B40*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xa5b9);
/*8023CD44 00239B44*/ PPC::Runtime::ASM::bne(.L_8023CD50);
/*8023CD48 00239B48*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x50);
/*8023CD4C 00239B4C*/ PPC::Runtime::ASM::b(.L_8023CD94);
RUNTIME_PPC_JUMP_LABEL(.L_8023CD50, 0x8023CD50) //this is a jump label
/*8023CD50 00239B50*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8023CD54 00239B54*/ PPC::Runtime::ASM::bl(fn_80235190);
/*8023CD58 00239B58*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8023CD5C 00239B5C*/ PPC::Runtime::ASM::beq(.L_8023CD6C);
/*8023CD60 00239B60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8023CD64 00239B64*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8023CD68 00239B68*/ PPC::Runtime::ASM::bne(.L_8023CD94);
RUNTIME_PPC_JUMP_LABEL(.L_8023CD6C, 0x8023CD6C) //this is a jump label
/*8023CD6C 00239B6C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8023CD70 00239B70*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x60);
/*8023CD74 00239B74*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8023CD78 00239B78*/ PPC::Runtime::ASM::bl(OSReport);
/*8023CD7C 00239B7C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*8023CD80 00239B80*/ PPC::Runtime::ASM::li(context->r4, 0x2ad);
/*8023CD84 00239B84*/ PPC::Runtime::ASM::li(context->r5, lbl_805D72C0 @ Get_MemoryOffset_SDA21);
/*8023CD88 00239B88*/ PPC::Runtime::ASM::bl(fn___assert);
/*8023CD8C 00239B8C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8023CD90 00239B90*/ PPC::Runtime::ASM::b(.L_8023CDA0);
RUNTIME_PPC_JUMP_LABEL(.L_8023CD94, 0x8023CD94) //this is a jump label
/*8023CD94 00239B94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8023CD98 00239B98*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*8023CD9C 00239B9C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8023CDA0, 0x8023CDA0) //this is a jump label
/*8023CDA0 00239BA0*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8023CDA4 00239BA4*/ PPC::Runtime::ASM::bne(.L_8023CDB8);
/*8023CDA8 00239BA8*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8023CDAC 00239BAC*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8023CDB0 00239BB0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023CDB4 00239BB4*/ PPC::Runtime::ASM::b(.L_8023CE04);
RUNTIME_PPC_JUMP_LABEL(.L_8023CDB8, 0x8023CDB8) //this is a jump label
/*8023CDB8 00239BB8*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023CDBC 00239BBC*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8023CDC0 00239BC0*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*8023CDC4 00239BC4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8023CDC8 00239BC8*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8023CDCC 00239BCC*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8023CDD0 00239BD0*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*8023CDD4 00239BD4*/ PPC::Runtime::ASM::bl(fn_8023475C);
/*8023CDD8 00239BD8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8023CDDC 00239BDC*/ PPC::Runtime::ASM::bne(.L_8023CDF0);
/*8023CDE0 00239BE0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8023CDE4 00239BE4*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8023CDE8 00239BE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023CDEC 00239BEC*/ PPC::Runtime::ASM::b(.L_8023CE04);
RUNTIME_PPC_JUMP_LABEL(.L_8023CDF0, 0x8023CDF0) //this is a jump label
/*8023CDF0 00239BF0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*8023CDF4 00239BF4*/ PPC::Runtime::ASM::lis(context->r4, fn_8023DFE0 @ Get_MemoryOffset_HighBit);
/*8023CDF8 00239BF8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_8023DFE0 @ Get_MemoryOffset_LowBit);
/*8023CDFC 00239BFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8023CE00 00239C00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8023CE04, 0x8023CE04) //this is a jump label
/*8023CE04 00239C04*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8023CE08 00239C08*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8023CE0C 00239C0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023CE10 00239C10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023CE14 00239C14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8023CE18 00239C18*/ PPC::Runtime::ASM::blr();
}