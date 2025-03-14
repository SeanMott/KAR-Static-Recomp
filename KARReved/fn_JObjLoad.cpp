//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_DObjLoadDesc.hpp"
#include "fn_HSD_RObjLoadDesc.hpp"
#include "fn_PSMTXIdentity.hpp"
#include "fn_HSD_MtxAlloc.hpp"
#include "memcpy.hpp"
#include "fn_HSD_IDInsertToTable.hpp"
#include "fn_hsdSearchClassInfo.hpp"
#include "fn_HSD_JObjAlloc.hpp"
#include "fn_hsdNew.hpp"
#include "fn___assert.hpp"
#include "fn_HSD_JObjAddNext?.hpp"



void fn_JObjLoad(PPC::Runtime::GCContext* context)
{
/*8040ADD4 00407BD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8040ADD8 00407BD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8040ADDC 00407BDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8040ADE0 00407BE0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8040ADE4 00407BE4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8040ADE8 00407BE8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8040ADEC 00407BEC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8040ADF0 00407BF0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8040ADF4 00407BF4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8040ADF8 00407BF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8040ADFC 00407BFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8040AE00 00407C00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8040AE04 00407C04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8040AE08 00407C08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8040AE0C 00407C0C*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*8040AE10 00407C10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8040AE14 00407C14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/* 8040AE18 00407C18  54 60 97 FF */ extrwi. context->r0 , context->r3 , 1 , 17
/*8040AE1C 00407C1C*/ PPC::Runtime::ASM::beq(.L_8040AE2C);
/*8040AE20 00407C20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8040AE24 00407C24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8040AE28 00407C28*/ PPC::Runtime::ASM::b(.L_8040AE84);
RUNTIME_PPC_JUMP_LABEL(.L_8040AE2C, 0x8040AE2C) //this is a jump label
/*8040AE2C 00407C2C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 26, 26);
/*8040AE30 00407C30*/ PPC::Runtime::ASM::beq(.L_8040AE78);
/*8040AE34 00407C34*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE268 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040AE38 00407C38*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8040AE3C 00407C3C*/ PPC::Runtime::ASM::beq(.L_8040AE84);
/*8040AE40 00407C40*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8040AE44 00407C44*/ PPC::Runtime::ASM::b(.L_8040AE6C);
RUNTIME_PPC_JUMP_LABEL(.L_8040AE48, 0x8040AE48) //this is a jump label
/*8040AE48 00407C48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8040AE4C 00407C4C*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*8040AE50 00407C50*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE268 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040AE54 00407C54*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8040AE58 00407C58*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 26);
/*8040AE5C 00407C5C*/ PPC::Runtime::ASM::extrwi(context->r5, context->r0, 24, 2);
/*8040AE60 00407C60*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8040AE64 00407C64*/ PPC::Runtime::ASM::bctrl();
/*8040AE68 00407C68*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8040AE6C, 0x8040AE6C) //this is a jump label
/*8040AE6C 00407C6C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8040AE70 00407C70*/ PPC::Runtime::ASM::bne(.L_8040AE48);
/*8040AE74 00407C74*/ PPC::Runtime::ASM::b(.L_8040AE84);
RUNTIME_PPC_JUMP_LABEL(.L_8040AE78, 0x8040AE78) //this is a jump label
/*8040AE78 00407C78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8040AE7C 00407C7C*/ PPC::Runtime::ASM::bl(fn_HSD_DObjLoadDesc);
/*8040AE80 00407C80*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8040AE84, 0x8040AE84) //this is a jump label
/*8040AE84 00407C84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8040AE88 00407C88*/ PPC::Runtime::ASM::bl(fn_HSD_RObjLoadDesc);
/*8040AE8C 00407C8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r30));
/*8040AE90 00407C90*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x44);
/*8040AE94 00407C94*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8040AE98 00407C98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8040AE9C 00407C9C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8040AEA0 00407CA0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8040AEA4 00407CA4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8040AEA8 00407CA8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8040AEAC 00407CAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8040AEB0 00407CB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8040AEB4 00407CB4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8040AEB8 00407CB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*8040AEBC 00407CBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8040AEC0 00407CC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8040AEC4 00407CC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8040AEC8 00407CC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8040AECC 00407CCC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8040AED0 00407CD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8040AED4 00407CD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8040AED8 00407CD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8040AEDC 00407CDC*/ PPC::Runtime::ASM::bl(fn_PSMTXIdentity);
/*8040AEE0 00407CE0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8040AEE4 00407CE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*8040AEE8 00407CE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8040AEEC 00407CEC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8040AEF0 00407CF0*/ PPC::Runtime::ASM::beq(.L_8040AF0C);
/*8040AEF4 00407CF4*/ PPC::Runtime::ASM::bl(fn_HSD_MtxAlloc);
/*8040AEF8 00407CF8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*8040AEFC 00407CFC*/ PPC::Runtime::ASM::li(context->r5, 0x30);
/*8040AF00 00407D00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*8040AF04 00407D04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8040AF08 00407D08*/ PPC::Runtime::ASM::bl(memcpy);
RUNTIME_PPC_JUMP_LABEL(.L_8040AF0C, 0x8040AF0C) //this is a jump label
/*8040AF0C 00407D0C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8040AF10 00407D10*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8040AF14 00407D14*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8040AF18 00407D18*/ PPC::Runtime::ASM::bl(fn_HSD_IDInsertToTable);
/*8040AF1C 00407D1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r30));
/*8040AF20 00407D20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8040AF24 00407D24*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*8040AF28 00407D28*/ PPC::Runtime::ASM::bne(.L_8040AFC8);
/*8040AF2C 00407D2C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8040AF30 00407D30*/ PPC::Runtime::ASM::b(.L_8040AFC0);
RUNTIME_PPC_JUMP_LABEL(.L_8040AF34, 0x8040AF34) //this is a jump label
/*8040AF34 00407D34*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8040AF38 00407D38*/ PPC::Runtime::ASM::bne(.L_8040AF44);
/*8040AF3C 00407D3C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8040AF40 00407D40*/ PPC::Runtime::ASM::b(.L_8040AFA0);
RUNTIME_PPC_JUMP_LABEL(.L_8040AF44, 0x8040AF44) //this is a jump label
/*8040AF44 00407D44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8040AF48 00407D48*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8040AF4C 00407D4C*/ PPC::Runtime::ASM::beq(.L_8040AF5C);
/*8040AF50 00407D50*/ PPC::Runtime::ASM::bl(fn_hsdSearchClassInfo);
/*8040AF54 00407D54*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8040AF58 00407D58*/ PPC::Runtime::ASM::bne(.L_8040AF68);
RUNTIME_PPC_JUMP_LABEL(.L_8040AF5C, 0x8040AF5C) //this is a jump label
/*8040AF5C 00407D5C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAlloc);
/*8040AF60 00407D60*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8040AF64 00407D64*/ PPC::Runtime::ASM::b(.L_8040AF84);
RUNTIME_PPC_JUMP_LABEL(.L_8040AF68, 0x8040AF68) //this is a jump label
/*8040AF68 00407D68*/ PPC::Runtime::ASM::bl(fn_hsdNew);
/* 8040AF6C 00407D6C  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8040AF70 00407D70*/ PPC::Runtime::ASM::bne(.L_8040AF84);
/*8040AF74 00407D74*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_529 @ Get_MemoryOffset_SDA21);
/*8040AF78 00407D78*/ PPC::Runtime::ASM::li(context->r4, 0x3d5);
/*8040AF7C 00407D7C*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_530 @ Get_MemoryOffset_SDA21);
/*8040AF80 00407D80*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8040AF84, 0x8040AF84) //this is a jump label
/*8040AF84 00407D84*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8040AF88 00407D88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8040AF8C 00407D8C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8040AF90 00407D90*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8040AF94 00407D94*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r6));
/*8040AF98 00407D98*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8040AF9C 00407D9C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8040AFA0, 0x8040AFA0) //this is a jump label
/*8040AFA0 00407DA0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8040AFA4 00407DA4*/ PPC::Runtime::ASM::bne(.L_8040AFB0);
/*8040AFA8 00407DA8*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8040AFAC 00407DAC*/ PPC::Runtime::ASM::b(.L_8040AFCC);
RUNTIME_PPC_JUMP_LABEL(.L_8040AFB0, 0x8040AFB0) //this is a jump label
/*8040AFB0 00407DB0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8040AFB4 00407DB4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8040AFB8 00407DB8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddNext?);
/*8040AFBC 00407DBC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8040AFC0, 0x8040AFC0) //this is a jump label
/*8040AFC0 00407DC0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8040AFC4 00407DC4*/ PPC::Runtime::ASM::bne(.L_8040AF34);
RUNTIME_PPC_JUMP_LABEL(.L_8040AFC8, 0x8040AFC8) //this is a jump label
/*8040AFC8 00407DC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8040AFCC, 0x8040AFCC) //this is a jump label
/*8040AFCC 00407DCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8040AFD0 00407DD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8040AFD4 00407DD4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8040AFD8 00407DD8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8040AFDC 00407DDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8040AFE0 00407DE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8040AFE4 00407DE4*/ PPC::Runtime::ASM::blr();
}