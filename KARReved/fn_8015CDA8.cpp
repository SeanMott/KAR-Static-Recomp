//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_8015CCB4.hpp"
#include "fn_8015CCB4.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_8015A01C.hpp"
#include "fn_80159FB0.hpp"



void fn_8015CDA8(PPC::Runtime::GCContext* context)
{
/*8015CDA8 00159BA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8015CDAC 00159BAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015CDB0 00159BB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8015CDB4 00159BB4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8015CDB8 00159BB8*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8015CDBC 00159BBC*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8015CDC0 00159BC0*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8015CDC4 00159BC4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015CDC8 00159BC8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x7e4);
/*8015CDCC 00159BCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e4, context->r3));
/*8015CDD0 00159BD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015CDD4 00159BD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015CDD8 00159BD8*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*8015CDDC 00159BDC*/ PPC::Runtime::ASM::lis(context->r4, fn_8015CCB4 @ Get_MemoryOffset_HighBit);
/*8015CDE0 00159BE0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8015CDE4 00159BE4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8015CDE8 00159BE8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8015CDEC 00159BEC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8015CCB4 @ Get_MemoryOffset_LowBit);
/*8015CDF0 00159BF0*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8015CDF4 00159BF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E08B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015CDF8 00159BF8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015CDFC 00159BFC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8015CE00 00159C00*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8015CE04 00159C04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8015CE08 00159C08*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8015CE0C 00159C0C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015CE10 00159C10*/ PPC::Runtime::ASM::li(context->r4, 0x57);
/*8015CE14 00159C14*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8015CE18 00159C18*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8015CE1C 00159C1C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015CE20 00159C20*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8015CE24 00159C24*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015CE28 00159C28*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*8015CE2C 00159C2C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015CE30 00159C30*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8015CE34 00159C34*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015CE38 00159C38*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*8015CE3C 00159C3C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015CE40 00159C40*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8015CE44 00159C44*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015CE48 00159C48*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*8015CE4C 00159C4C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015CE50 00159C50*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8015CE54 00159C54*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015CE58 00159C58*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r26));
/*8015CE5C 00159C5C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015CE60 00159C60*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8015CE64 00159C64*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015CE68 00159C68*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r26));
/*8015CE6C 00159C6C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015CE70 00159C70*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8015CE74 00159C74*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015CE78 00159C78*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*8015CE7C 00159C7C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015CE80 00159C80*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8015CE84 00159C84*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015CE88 00159C88*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*8015CE8C 00159C8C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015CE90 00159C90*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8015CE94 00159C94*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015CE98 00159C98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*8015CE9C 00159C9C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015CEA0 00159CA0*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8015CEA4 00159CA4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015CEA8 00159CA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*8015CEAC 00159CAC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8015CEB0 00159CB0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r28);
/*8015CEB4 00159CB4*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r26));
/*8015CEB8 00159CB8*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8015CEBC 00159CBC*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*8015CEC0 00159CC0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r26));
/*8015CEC4 00159CC4*/ PPC::Runtime::ASM::bne(.L_8015CED8);
/*8015CEC8 00159CC8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8015CECC 00159CCC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8015CED0 00159CD0*/ PPC::Runtime::ASM::bl(fn_8015A01C);
/*8015CED4 00159CD4*/ PPC::Runtime::ASM::b(.L_8015CEE4);
RUNTIME_PPC_JUMP_LABEL(.L_8015CED8, 0x8015CED8) //this is a jump label
/*8015CED8 00159CD8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8015CEDC 00159CDC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8015CEE0 00159CE0*/ PPC::Runtime::ASM::bl(fn_80159FB0);
RUNTIME_PPC_JUMP_LABEL(.L_8015CEE4, 0x8015CEE4) //this is a jump label
/*8015CEE4 00159CE4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8015CEE8 00159CE8*/ PPC::Runtime::ASM::bne(.L_8015CEFC);
/*8015CEEC 00159CEC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6980 @ Get_MemoryOffset_SDA21);
/*8015CEF0 00159CF0*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8015CEF4 00159CF4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6988 @ Get_MemoryOffset_SDA21);
/*8015CEF8 00159CF8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8015CEFC, 0x8015CEFC) //this is a jump label
/*8015CEFC 00159CFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015CF00 00159D00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015CF04 00159D04*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8015CF08 00159D08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8015CF0C 00159D0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8015CF10 00159D10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8015CF14 00159D14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8015CF18 00159D18*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8015CF1C 00159D1C*/ PPC::Runtime::ASM::bne(.L_8015CF68);
/*8015CF20 00159D20*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8015CF24 00159D24*/ PPC::Runtime::ASM::beq(.L_8015CF68);
/*8015CF28 00159D28*/ PPC::Runtime::ASM::bne(.L_8015CF3C);
/*8015CF2C 00159D2C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6980 @ Get_MemoryOffset_SDA21);
/*8015CF30 00159D30*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8015CF34 00159D34*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6988 @ Get_MemoryOffset_SDA21);
/*8015CF38 00159D38*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8015CF3C, 0x8015CF3C) //this is a jump label
/*8015CF3C 00159D3C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8015CF40 00159D40*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8015CF44 00159D44*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8015CF48 00159D48*/ PPC::Runtime::ASM::bne(.L_8015CF58);
/*8015CF4C 00159D4C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8015CF50 00159D50*/ PPC::Runtime::ASM::beq(.L_8015CF58);
/*8015CF54 00159D54*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8015CF58, 0x8015CF58) //this is a jump label
/*8015CF58 00159D58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8015CF5C 00159D5C*/ PPC::Runtime::ASM::bne(.L_8015CF68);
/*8015CF60 00159D60*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015CF64 00159D64*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8015CF68, 0x8015CF68) //this is a jump label
/*8015CF68 00159D68*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*8015CF6C 00159D6C*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8015CF70 00159D70*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 3);
/*8015CF74 00159D74*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*8015CF78 00159D78*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015CF7C 00159D7C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8015CF80 00159D80*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8015CF84 00159D84*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8015CF88 00159D88*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8015CF8C 00159D8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8015CF90 00159D90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015CF94 00159D94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8015CF98 00159D98*/ PPC::Runtime::ASM::blr();
}