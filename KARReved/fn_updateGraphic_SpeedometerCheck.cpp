//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8022C7E0.hpp"
#include "fn_8022D540.hpp"
#include "fn_8011A078.hpp"
#include "fn_updateGraphic_SpeedometerFill.hpp"
#include "fn_updateGraphic_SpeedometerFill.hpp"
#include "fn_800550BC.hpp"
#include "fn_800550BC.hpp"
#include "fn_updateGraphic_SpeedometerFill.hpp"
#include "fn_updateGraphic_SpeedometerFill.hpp"
#include "fn_800550BC.hpp"
#include "fn_800550BC.hpp"
#include "fn_80119F0C.hpp"
#include "fn_updateGraphic_SpeedometerFill.hpp"
#include "fn_updateGraphic_SpeedometerFill.hpp"
#include "fn_800550BC.hpp"
#include "fn_800550BC.hpp"
#include "fn_800094C4.hpp"
#include "fn_updateGraphic_SpeedometerFill.hpp"
#include "fn_800550BC.hpp"



void fn_updateGraphic_SpeedometerCheck(PPC::Runtime::GCContext* context)
{
/*80117BB0 001149B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80117BB4 001149B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80117BB8 001149B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80117BBC 001149BC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80117BC0 001149C0*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80117BC4 001149C4*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*80117BC8 001149C8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80117BCC 001149CC*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r25));
/*80117BD0 001149D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80117BD4 001149D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*80117BD8 001149D8*/ PPC::Runtime::ASM::extrwi(context->r31, context->r0, 4, 24);
/*80117BDC 001149DC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*80117BE0 001149E0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*80117BE4 001149E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80117BE8 001149E8*/ PPC::Runtime::ASM::extrwi(context->r26, context->r0, 2, 28);
/*80117BEC 001149EC*/ PPC::Runtime::ASM::bl(fn_8022C7E0);
/*80117BF0 001149F0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFC30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80117BF4 001149F4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80117BF8 001149F8*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80117BFC 001149FC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80117C00 00114A00*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80117C04 00114A04*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x0);
/*80117C08 00114A08*/ PPC::Runtime::ASM::bge(.L_80117C14);
/*80117C0C 00114A0C*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*80117C10 00114A10*/ PPC::Runtime::ASM::b(.L_80117C20);
RUNTIME_PPC_JUMP_LABEL(.L_80117C14, 0x80117C14) //this is a jump label
/*80117C14 00114A14*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x63);
/*80117C18 00114A18*/ PPC::Runtime::ASM::blt(.L_80117C20);
/*80117C1C 00114A1C*/ PPC::Runtime::ASM::li(context->r25, 0x63);
RUNTIME_PPC_JUMP_LABEL(.L_80117C20, 0x80117C20) //this is a jump label
/*80117C20 00114A20*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80117C24 00114A24*/ PPC::Runtime::ASM::bl(fn_8022D540);
/*80117C28 00114A28*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80117C2C 00114A2C*/ PPC::Runtime::ASM::beq(.L_80117C34);
/*80117C30 00114A30*/ PPC::Runtime::ASM::li(context->r25, 0x63);
RUNTIME_PPC_JUMP_LABEL(.L_80117C34, 0x80117C34) //this is a jump label
/*80117C34 00114A34*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x63);
/*80117C38 00114A38*/ PPC::Runtime::ASM::bge(.L_80117C98);
/*80117C3C 00114A3C*/ PPC::Runtime::ASM::extsb(context->r3, context->r26);
/*80117C40 00114A40*/ PPC::Runtime::ASM::bl(fn_8011A078);
/*80117C44 00114A44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117C48 00114A48*/ PPC::Runtime::ASM::cmpw(context->r0, context->r25);
/*80117C4C 00114A4C*/ PPC::Runtime::ASM::beq(.L_80117D74);
/*80117C50 00114A50*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117C54 00114A54*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80117C58 00114A58*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117C5C 00114A5C*/ PPC::Runtime::ASM::bl(fn_updateGraphic_SpeedometerFill);
/*80117C60 00114A60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117C64 00114A64*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80117C68 00114A68*/ PPC::Runtime::ASM::bl(fn_updateGraphic_SpeedometerFill);
/*80117C6C 00114A6C*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80117C70 00114A70*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFC34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80117C74 00114A74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80117C78 00114A78*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80117C7C 00114A7C*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*80117C80 00114A80*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80117C84 00114A84*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFC34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80117C88 00114A88*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80117C8C 00114A8C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80117C90 00114A90*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*80117C94 00114A94*/ PPC::Runtime::ASM::b(.L_80117D74);
RUNTIME_PPC_JUMP_LABEL(.L_80117C98, 0x80117C98) //this is a jump label
/*80117C98 00114A98*/ PPC::Runtime::ASM::bne(.L_80117D74);
/*80117C9C 00114A9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117CA0 00114AA0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x63);
/*80117CA4 00114AA4*/ PPC::Runtime::ASM::bge(.L_80117CB0);
/*80117CA8 00114AA8*/ PPC::Runtime::ASM::li(context->r0, 0x63);
/*80117CAC 00114AAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_80117CB0, 0x80117CB0) //this is a jump label
/*80117CB0 00114AB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117CB4 00114AB4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80117CB8 00114AB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117CBC 00114ABC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117CC0 00114AC0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x64);
/*80117CC4 00114AC4*/ PPC::Runtime::ASM::bne(.L_80117D14);
/*80117CC8 00114AC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80117CCC 00114ACC*/ PPC::Runtime::ASM::bl(fn_updateGraphic_SpeedometerFill);
/*80117CD0 00114AD0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117CD4 00114AD4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80117CD8 00114AD8*/ PPC::Runtime::ASM::bl(fn_updateGraphic_SpeedometerFill);
/*80117CDC 00114ADC*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80117CE0 00114AE0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFC38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80117CE4 00114AE4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80117CE8 00114AE8*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80117CEC 00114AEC*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*80117CF0 00114AF0*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80117CF4 00114AF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFC38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80117CF8 00114AF8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80117CFC 00114AFC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80117D00 00114B00*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*80117D04 00114B04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80117D08 00114B08*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80117D0C 00114B0C*/ PPC::Runtime::ASM::bl(fn_80119F0C);
/*80117D10 00114B10*/ PPC::Runtime::ASM::b(.L_80117D64);
RUNTIME_PPC_JUMP_LABEL(.L_80117D14, 0x80117D14) //this is a jump label
/*80117D14 00114B14*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x80);
/*80117D18 00114B18*/ PPC::Runtime::ASM::blt(.L_80117D64);
/*80117D1C 00114B1C*/ PPC::Runtime::ASM::li(context->r0, 0x64);
/*80117D20 00114B20*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80117D24 00114B24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117D28 00114B28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117D2C 00114B2C*/ PPC::Runtime::ASM::bl(fn_updateGraphic_SpeedometerFill);
/*80117D30 00114B30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80117D34 00114B34*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80117D38 00114B38*/ PPC::Runtime::ASM::bl(fn_updateGraphic_SpeedometerFill);
/*80117D3C 00114B3C*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80117D40 00114B40*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFC38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80117D44 00114B44*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80117D48 00114B48*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80117D4C 00114B4C*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*80117D50 00114B50*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80117D54 00114B54*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFC38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80117D58 00114B58*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80117D5C 00114B5C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80117D60 00114B60*/ PPC::Runtime::ASM::bl(fn_800550BC);
RUNTIME_PPC_JUMP_LABEL(.L_80117D64, 0x80117D64) //this is a jump label
/*80117D64 00114B64*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80117D68 00114B68*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80117D6C 00114B6C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80117D70 00114B70*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_80117D74, 0x80117D74) //this is a jump label
/*80117D74 00114B74*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80117D78 00114B78*/ PPC::Runtime::ASM::bl(fn_800094C4);
/*80117D7C 00114B7C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80117D80 00114B80*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80117D84 00114B84*/ PPC::Runtime::ASM::bne(.L_80117DD0);
/*80117D88 00114B88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*80117D8C 00114B8C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80117D90 00114B90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*80117D94 00114B94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*80117D98 00114B98*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3c);
/*80117D9C 00114B9C*/ PPC::Runtime::ASM::ble(.L_80117DC8);
/*80117DA0 00114BA0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80117DA4 00114BA4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80117DA8 00114BA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*80117DAC 00114BAC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80117DB0 00114BB0*/ PPC::Runtime::ASM::bl(fn_updateGraphic_SpeedometerFill);
/*80117DB4 00114BB4*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80117DB8 00114BB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFC38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80117DBC 00114BBC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80117DC0 00114BC0*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80117DC4 00114BC4*/ PPC::Runtime::ASM::bl(fn_800550BC);
RUNTIME_PPC_JUMP_LABEL(.L_80117DC8, 0x80117DC8) //this is a jump label
/*80117DC8 00114BC8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80117DCC 00114BCC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_80117DD0, 0x80117DD0) //this is a jump label
/*80117DD0 00114BD0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80117DD4 00114BD4*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80117DD8 00114BD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80117DDC 00114BDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80117DE0 00114BE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80117DE4 00114BE4*/ PPC::Runtime::ASM::blr();
}