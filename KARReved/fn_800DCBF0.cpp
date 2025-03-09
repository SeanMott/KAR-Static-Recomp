//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_grGetStageScale.hpp"
#include "fn_80055DA0.hpp"
#include "fn_80053770.hpp"
#include "fn_800537AC.hpp"
#include "fn_grGetStageScale.hpp"
#include "fn_80055DA0.hpp"
#include "fn_80053770.hpp"
#include "fn_800537AC.hpp"
#include "fn_grGetStageScale.hpp"



void fn_800DCBF0(PPC::Runtime::GCContext* context)
{
/*800DCBF0 000D99F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*800DCBF4 000D99F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DCBF8 000D99F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800DCBFC 000D99FC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800DCC00 000D9A00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800DCC04 000D9A04*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800DCC08 000D9A08*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800DCC0C 000D9A0C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800DCC10 000D9A10*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800DCC14 000D9A14*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800DCC18 000D9A18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800DCC1C 000D9A1C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800DCC20 000D9A20*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DCC24 000D9A24*/ PPC::Runtime::ASM::beq(.L_800DCC30);
/*800DCC28 000D9A28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800DCC2C 000D9A2C*/ PPC::Runtime::ASM::b(.L_800DCC34);
RUNTIME_PPC_JUMP_LABEL(.L_800DCC30, 0x800DCC30) //this is a jump label
/*800DCC30 000D9A30*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800DCC34, 0x800DCC34) //this is a jump label
/*800DCC34 000D9A34*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DCC38 000D9A38*/ PPC::Runtime::ASM::beq(.L_800DCD44);
/*800DCC3C 000D9A3C*/ PPC::Runtime::ASM::bl(fn_grGetStageScale);
/*800DCC40 000D9A40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800DCC44 000D9A44*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800DCC48 000D9A48*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800DCC4C 000D9A4C*/ PPC::Runtime::ASM::beq(.L_800DCC60);
/*800DCC50 000D9A50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800DCC54 000D9A54*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*800DCC58 000D9A58*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800DCC5C 000D9A5C*/ PPC::Runtime::ASM::b(.L_800DCC6C);
RUNTIME_PPC_JUMP_LABEL(.L_800DCC60, 0x800DCC60) //this is a jump label
/*800DCC60 000D9A60*/ PPC::Runtime::ASM::bl(fn_80055DA0);
/*800DCC64 000D9A64*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*800DCC68 000D9A68*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_800DCC6C, 0x800DCC6C) //this is a jump label
/*800DCC6C 000D9A6C*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800DCC70 000D9A70*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800DCC74 000D9A74*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*800DCC78 000D9A78*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*800DCC7C 000D9A7C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DCC80 000D9A80*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DCC84 000D9A84*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DCC88 000D9A88*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DCC8C 000D9A8C*/ PPC::Runtime::ASM::bne(.L_800DCCA0);
/*800DCC90 000D9A90*/ PPC::Runtime::ASM::li(context->r3, lbl_805D60E0 @ Get_MemoryOffset_SDA21);
/*800DCC94 000D9A94*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*800DCC98 000D9A98*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60E8 @ Get_MemoryOffset_SDA21);
/*800DCC9C 000D9A9C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800DCCA0, 0x800DCCA0) //this is a jump label
/*800DCCA0 000D9AA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DCCA4 000D9AA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DCCA8 000D9AA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*800DCCAC 000D9AAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DCCB0 000D9AB0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*800DCCB4 000D9AB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*800DCCB8 000D9AB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800DCCBC 000D9ABC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*800DCCC0 000D9AC0*/ PPC::Runtime::ASM::bne(.L_800DCD0C);
/*800DCCC4 000D9AC4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DCCC8 000D9AC8*/ PPC::Runtime::ASM::beq(.L_800DCD0C);
/*800DCCCC 000D9ACC*/ PPC::Runtime::ASM::bne(.L_800DCCE0);
/*800DCCD0 000D9AD0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D60E0 @ Get_MemoryOffset_SDA21);
/*800DCCD4 000D9AD4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*800DCCD8 000D9AD8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60E8 @ Get_MemoryOffset_SDA21);
/*800DCCDC 000D9ADC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800DCCE0, 0x800DCCE0) //this is a jump label
/*800DCCE0 000D9AE0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800DCCE4 000D9AE4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800DCCE8 000D9AE8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*800DCCEC 000D9AEC*/ PPC::Runtime::ASM::bne(.L_800DCCFC);
/*800DCCF0 000D9AF0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*800DCCF4 000D9AF4*/ PPC::Runtime::ASM::beq(.L_800DCCFC);
/*800DCCF8 000D9AF8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800DCCFC, 0x800DCCFC) //this is a jump label
/*800DCCFC 000D9AFC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800DCD00 000D9B00*/ PPC::Runtime::ASM::bne(.L_800DCD0C);
/*800DCD04 000D9B04*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800DCD08 000D9B08*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_800DCD0C, 0x800DCD0C) //this is a jump label
/*800DCD0C 000D9B0C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800DCD10 000D9B10*/ PPC::Runtime::ASM::lis(context->r4, 0x400);
/*800DCD14 000D9B14*/ PPC::Runtime::ASM::bl(fn_80053770);
/*800DCD18 000D9B18*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DCD1C 000D9B1C*/ PPC::Runtime::ASM::bne(.L_800DCD28);
/*800DCD20 000D9B20*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800DCD24 000D9B24*/ PPC::Runtime::ASM::b(.L_800DCD2C);
RUNTIME_PPC_JUMP_LABEL(.L_800DCD28, 0x800DCD28) //this is a jump label
/*800DCD28 000D9B28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800DCD2C, 0x800DCD2C) //this is a jump label
/*800DCD2C 000D9B2C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800DCD30 000D9B30*/ PPC::Runtime::ASM::beq(.L_800DCE2C);
/*800DCD34 000D9B34*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800DCD38 000D9B38*/ PPC::Runtime::ASM::lis(context->r4, 0x400);
/*800DCD3C 000D9B3C*/ PPC::Runtime::ASM::bl(fn_800537AC);
/*800DCD40 000D9B40*/ PPC::Runtime::ASM::b(.L_800DCE2C);
RUNTIME_PPC_JUMP_LABEL(.L_800DCD44, 0x800DCD44) //this is a jump label
/*800DCD44 000D9B44*/ PPC::Runtime::ASM::bl(fn_grGetStageScale);
/*800DCD48 000D9B48*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800DCD4C 000D9B4C*/ PPC::Runtime::ASM::bl(fn_80055DA0);
/*800DCD50 000D9B50*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*800DCD54 000D9B54*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800DCD58 000D9B58*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800DCD5C 000D9B5C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800DCD60 000D9B60*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*800DCD64 000D9B64*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*800DCD68 000D9B68*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DCD6C 000D9B6C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800DCD70 000D9B70*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800DCD74 000D9B74*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800DCD78 000D9B78*/ PPC::Runtime::ASM::bne(.L_800DCD8C);
/*800DCD7C 000D9B7C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D60E0 @ Get_MemoryOffset_SDA21);
/*800DCD80 000D9B80*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*800DCD84 000D9B84*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60E8 @ Get_MemoryOffset_SDA21);
/*800DCD88 000D9B88*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800DCD8C, 0x800DCD8C) //this is a jump label
/*800DCD8C 000D9B8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800DCD90 000D9B90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800DCD94 000D9B94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*800DCD98 000D9B98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800DCD9C 000D9B9C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*800DCDA0 000D9BA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*800DCDA4 000D9BA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800DCDA8 000D9BA8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*800DCDAC 000D9BAC*/ PPC::Runtime::ASM::bne(.L_800DCDF8);
/*800DCDB0 000D9BB0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DCDB4 000D9BB4*/ PPC::Runtime::ASM::beq(.L_800DCDF8);
/*800DCDB8 000D9BB8*/ PPC::Runtime::ASM::bne(.L_800DCDCC);
/*800DCDBC 000D9BBC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D60E0 @ Get_MemoryOffset_SDA21);
/*800DCDC0 000D9BC0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*800DCDC4 000D9BC4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60E8 @ Get_MemoryOffset_SDA21);
/*800DCDC8 000D9BC8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800DCDCC, 0x800DCDCC) //this is a jump label
/*800DCDCC 000D9BCC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800DCDD0 000D9BD0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800DCDD4 000D9BD4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*800DCDD8 000D9BD8*/ PPC::Runtime::ASM::bne(.L_800DCDE8);
/*800DCDDC 000D9BDC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*800DCDE0 000D9BE0*/ PPC::Runtime::ASM::beq(.L_800DCDE8);
/*800DCDE4 000D9BE4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800DCDE8, 0x800DCDE8) //this is a jump label
/*800DCDE8 000D9BE8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800DCDEC 000D9BEC*/ PPC::Runtime::ASM::bne(.L_800DCDF8);
/*800DCDF0 000D9BF0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800DCDF4 000D9BF4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_800DCDF8, 0x800DCDF8) //this is a jump label
/*800DCDF8 000D9BF8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800DCDFC 000D9BFC*/ PPC::Runtime::ASM::lis(context->r4, 0x400);
/*800DCE00 000D9C00*/ PPC::Runtime::ASM::bl(fn_80053770);
/*800DCE04 000D9C04*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DCE08 000D9C08*/ PPC::Runtime::ASM::bne(.L_800DCE14);
/*800DCE0C 000D9C0C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800DCE10 000D9C10*/ PPC::Runtime::ASM::b(.L_800DCE18);
RUNTIME_PPC_JUMP_LABEL(.L_800DCE14, 0x800DCE14) //this is a jump label
/*800DCE14 000D9C14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800DCE18, 0x800DCE18) //this is a jump label
/*800DCE18 000D9C18*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800DCE1C 000D9C1C*/ PPC::Runtime::ASM::beq(.L_800DCE2C);
/*800DCE20 000D9C20*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800DCE24 000D9C24*/ PPC::Runtime::ASM::lis(context->r4, 0x400);
/*800DCE28 000D9C28*/ PPC::Runtime::ASM::bl(fn_800537AC);
RUNTIME_PPC_JUMP_LABEL(.L_800DCE2C, 0x800DCE2C) //this is a jump label
/*800DCE2C 000D9C2C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800DCE30 000D9C30*/ PPC::Runtime::ASM::beq(.L_800DCEDC);
/*800DCE34 000D9C34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800DCE38 000D9C38*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*800DCE3C 000D9C3C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r30));
/*800DCE40 000D9C40*/ PPC::Runtime::ASM::bl(fn_grGetStageScale);
/*800DCE44 000D9C44*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r30));
/*800DCE48 000D9C48*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800DCE4C 000D9C4C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DCE50 000D9C50*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DCE54 000D9C54*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800DCE58 000D9C58*/ PPC::Runtime::ASM::bne(.L_800DCE6C);
/*800DCE5C 000D9C5C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D60E0 @ Get_MemoryOffset_SDA21);
/*800DCE60 000D9C60*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*800DCE64 000D9C64*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60E8 @ Get_MemoryOffset_SDA21);
/*800DCE68 000D9C68*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800DCE6C, 0x800DCE6C) //this is a jump label
/*800DCE6C 000D9C6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800DCE70 000D9C70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DCE74 000D9C74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*800DCE78 000D9C78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800DCE7C 000D9C7C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*800DCE80 000D9C80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*800DCE84 000D9C84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800DCE88 000D9C88*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*800DCE8C 000D9C8C*/ PPC::Runtime::ASM::bne(.L_800DCEE4);
/*800DCE90 000D9C90*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DCE94 000D9C94*/ PPC::Runtime::ASM::beq(.L_800DCEE4);
/*800DCE98 000D9C98*/ PPC::Runtime::ASM::bne(.L_800DCEAC);
/*800DCE9C 000D9C9C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D60E0 @ Get_MemoryOffset_SDA21);
/*800DCEA0 000D9CA0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*800DCEA4 000D9CA4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60E8 @ Get_MemoryOffset_SDA21);
/*800DCEA8 000D9CA8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800DCEAC, 0x800DCEAC) //this is a jump label
/*800DCEAC 000D9CAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800DCEB0 000D9CB0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800DCEB4 000D9CB4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*800DCEB8 000D9CB8*/ PPC::Runtime::ASM::bne(.L_800DCEC8);
/*800DCEBC 000D9CBC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*800DCEC0 000D9CC0*/ PPC::Runtime::ASM::beq(.L_800DCEC8);
/*800DCEC4 000D9CC4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800DCEC8, 0x800DCEC8) //this is a jump label
/*800DCEC8 000D9CC8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800DCECC 000D9CCC*/ PPC::Runtime::ASM::bne(.L_800DCEE4);
/*800DCED0 000D9CD0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800DCED4 000D9CD4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
/*800DCED8 000D9CD8*/ PPC::Runtime::ASM::b(.L_800DCEE4);
RUNTIME_PPC_JUMP_LABEL(.L_800DCEDC, 0x800DCEDC) //this is a jump label
/*800DCEDC 000D9CDC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800DCEE0 000D9CE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800DCEE4, 0x800DCEE4) //this is a jump label
/*800DCEE4 000D9CE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800DCEE8 000D9CE8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800DCEEC 000D9CEC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800DCEF0 000D9CF0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800DCEF4 000D9CF4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800DCEF8 000D9CF8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800DCEFC 000D9CFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DCF00 000D9D00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800DCF04 000D9D04*/ PPC::Runtime::ASM::blr();
}