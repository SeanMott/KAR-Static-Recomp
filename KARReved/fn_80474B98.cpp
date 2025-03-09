//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_CalcIpCheckSum.hpp"
#include "fn_IPIsLocalAddr.hpp"
#include "fn_ARPRevalidate.hpp"
#include "fn_IPRecoverGateway.hpp"
#include "OSGetTime.hpp"
#include "fn_80475738.hpp"
#include "OSGetTime.hpp"
#include "fn_80475738.hpp"
#include "fn_8047477C.hpp"



void fn_80474B98(PPC::Runtime::GCContext* context)
{
/*80474B98 00471998*/ PPC::Runtime::ASM::mflr(context->r0);
/*80474B9C 0047199C*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_1805BDDC8 @ Get_MemoryOffset_HighBit);
/*80474BA0 004719A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80474BA4 004719A4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, STRUCT_BYTE4_COUNT_1805BDDC8 @ Get_MemoryOffset_LowBit);
/*80474BA8 004719A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80474BAC 004719AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80474BB0 004719B0*/ PPC::Runtime::ASM::subi(context->r31, context->r3, 0x1f8);
/*80474BB4 004719B4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80474BB8 004719B8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80474BBC 004719BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80474BC0 004719C0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80474BC4 004719C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80474BC8 004719C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1c, context->r3));
/*80474BCC 004719CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80474BD0 004719D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80474BD4 004719D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80474BD8 004719D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x10);
/*80474BDC 004719DC*/ PPC::Runtime::ASM::blt(.L_80474BE8);
/*80474BE0 004719E0*/ PPC::Runtime::ASM::li(context->r0, 0x10);
/*80474BE4 004719E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80474BE8, 0x80474BE8) //this is a jump label
/*80474BE8 004719E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*80474BEC 004719EC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 22, 22);
/*80474BF0 004719F0*/ PPC::Runtime::ASM::bne(.L_80474D5C);
/*80474BF4 004719F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80474BF8 004719F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80474BFC 004719FC*/ PPC::Runtime::ASM::bne(.L_80474C50);
/*80474C00 00471A00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*80474C04 00471A04*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80474C08 00471A08*/ PPC::Runtime::ASM::blt(.L_80474C50);
/*80474C0C 00471A0C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa, context->r31));
/*80474C10 00471A10*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0xa4);
/*80474C14 00471A14*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 18, 16);
/*80474C18 00471A18*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa, context->r31));
/*80474C1C 00471A1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*80474C20 00471A20*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80474C24 00471A24*/ PPC::Runtime::ASM::beq(.L_80474C3C);
/*80474C28 00471A28*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80474C2C 00471A2C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r30));
/*80474C30 00471A30*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80474C34 00471A34*/ PPC::Runtime::ASM::bl(fn_CalcIpCheckSum);
/*80474C38 00471A38*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80474C3C, 0x80474C3C) //this is a jump label
/*80474C3C 00471A3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*80474C40 00471A40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x218);
/*80474C44 00471A44*/ PPC::Runtime::ASM::ble(.L_80474C4C);
/*80474C48 00471A48*/ PPC::Runtime::ASM::li(context->r0, 0x218);
RUNTIME_PPC_JUMP_LABEL(.L_80474C4C, 0x80474C4C) //this is a jump label
/*80474C4C 00471A4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80474C50, 0x80474C50) //this is a jump label
/*80474C50 00471A50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80474C54 00471A54*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80474C58 00471A58*/ PPC::Runtime::ASM::bne(.L_80474C88);
/*80474C5C 00471A5C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80474C60 00471A60*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x144);
/*80474C64 00471A64*/ PPC::Runtime::ASM::bl(fn_IPIsLocalAddr);
/*80474C68 00471A68*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80474C6C 00471A6C*/ PPC::Runtime::ASM::beq(.L_80474C7C);
/*80474C70 00471A70*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x144);
/*80474C74 00471A74*/ PPC::Runtime::ASM::bl(fn_ARPRevalidate);
/*80474C78 00471A78*/ PPC::Runtime::ASM::b(.L_80474DDC);
RUNTIME_PPC_JUMP_LABEL(.L_80474C7C, 0x80474C7C) //this is a jump label
/*80474C7C 00471A7C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x144);
/*80474C80 00471A80*/ PPC::Runtime::ASM::bl(fn_IPRecoverGateway);
/*80474C84 00471A84*/ PPC::Runtime::ASM::b(.L_80474DDC);
RUNTIME_PPC_JUMP_LABEL(.L_80474C88, 0x80474C88) //this is a jump label
/*80474C88 00471A88*/ PPC::Runtime::ASM::ble(.L_80474DDC);
/*80474C8C 00471A8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*80474C90 00471A90*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80474C94 00471A94*/ PPC::Runtime::ASM::bge(.L_80474D04);
/*80474C98 00471A98*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80474C9C 00471A9C*/ PPC::Runtime::ASM::bge(.L_80474CA4);
/*80474CA0 00471AA0*/ PPC::Runtime::ASM::b(.L_80474D04);
RUNTIME_PPC_JUMP_LABEL(.L_80474CA4, 0x80474CA4) //this is a jump label
/*80474CA4 00471AA4*/ PPC::Runtime::ASM::lis(context->r4, 0x8000);
/*80474CA8 00471AA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*80474CAC 00471AAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r4));
/*80474CB0 00471AB0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80474CB4 00471AB4*/ PPC::Runtime::ASM::li(context->r6, 0xb4);
/*80474CB8 00471AB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80474CBC 00471ABC*/ PPC::Runtime::ASM::srwi(context->r8, context->r4, 2);
/*80474CC0 00471AC0*/ PPC::Runtime::ASM::mullw(context->r5, context->r7, context->r6);
/*80474CC4 00471AC4*/ PPC::Runtime::ASM::mulhwu(context->r4, context->r8, context->r6);
/*80474CC8 00471AC8*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r4);
/*80474CCC 00471ACC*/ PPC::Runtime::ASM::mullw(context->r4, context->r8, context->r7);
/*80474CD0 00471AD0*/ PPC::Runtime::ASM::mullw(context->r29, context->r8, context->r6);
/*80474CD4 00471AD4*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80474CD8 00471AD8*/ PPC::Runtime::ASM::add(context->r30, context->r5, context->r4);
/*80474CDC 00471ADC*/ PPC::Runtime::ASM::bne(.L_80474D04);
/*80474CE0 00471AE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*80474CE4 00471AE4*/ PPC::Runtime::ASM::xoris(context->r3, context->r30, 0x8000);
/*80474CE8 00471AE8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r31));
/*80474CEC 00471AEC*/ PPC::Runtime::ASM::xoris(context->r4, context->r0, 0x8000);
/*80474CF0 00471AF0*/ PPC::Runtime::ASM::subfc(context->r0, context->r29, context->r5);
/*80474CF4 00471AF4*/ PPC::Runtime::ASM::subfe(context->r3, context->r3, context->r4);
/*80474CF8 00471AF8*/ PPC::Runtime::ASM::subfe(context->r3, context->r4, context->r4);
/*80474CFC 00471AFC*/ PPC::Runtime::ASM::neg.(context->r3, context->r3);
/*80474D00 00471B00*/ PPC::Runtime::ASM::bne(.L_80474D0C);
RUNTIME_PPC_JUMP_LABEL(.L_80474D04, 0x80474D04) //this is a jump label
/*80474D04 00471B04*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*80474D08 00471B08*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80474D0C, 0x80474D0C) //this is a jump label
/*80474D0C 00471B0C*/ PPC::Runtime::ASM::bl(OSGetTime);
/*80474D10 00471B10*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r31));
/*80474D14 00471B14*/ PPC::Runtime::ASM::xoris(context->r5, context->r30, 0x8000);
/*80474D18 00471B18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*80474D1C 00471B1C*/ PPC::Runtime::ASM::subfc(context->r4, context->r6, context->r4);
/*80474D20 00471B20*/ PPC::Runtime::ASM::subfe(context->r0, context->r0, context->r3);
/*80474D24 00471B24*/ PPC::Runtime::ASM::xoris(context->r3, context->r0, 0x8000);
/*80474D28 00471B28*/ PPC::Runtime::ASM::subfc(context->r0, context->r29, context->r4);
/*80474D2C 00471B2C*/ PPC::Runtime::ASM::subfe(context->r5, context->r5, context->r3);
/*80474D30 00471B30*/ PPC::Runtime::ASM::subfe(context->r5, context->r3, context->r3);
/*80474D34 00471B34*/ PPC::Runtime::ASM::neg.(context->r5, context->r5);
/*80474D38 00471B38*/ PPC::Runtime::ASM::bne(.L_80474DDC);
/*80474D3C 00471B3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80474D40 00471B40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80474D44 00471B44*/ PPC::Runtime::ASM::bne(.L_80474D50);
/*80474D48 00471B48*/ PPC::Runtime::ASM::li(context->r0, -0xa);
/*80474D4C 00471B4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80474D50, 0x80474D50) //this is a jump label
/*80474D50 00471B50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80474D54 00471B54*/ PPC::Runtime::ASM::bl(fn_80475738);
/*80474D58 00471B58*/ PPC::Runtime::ASM::b(.L_80474E44);
RUNTIME_PPC_JUMP_LABEL(.L_80474D5C, 0x80474D5C) //this is a jump label
/*80474D5C 00471B5C*/ PPC::Runtime::ASM::bl(OSGetTime);
/*80474D60 00471B60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r31));
/*80474D64 00471B64*/ PPC::Runtime::ASM::lis(context->r6, 0x8000);
/*80474D68 00471B68*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*80474D6C 00471B6C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80474D70 00471B70*/ PPC::Runtime::ASM::subfc(context->r8, context->r0, context->r4);
/*80474D74 00471B74*/ PPC::Runtime::ASM::subfe(context->r3, context->r7, context->r3);
/*80474D78 00471B78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r6));
/*80474D7C 00471B7C*/ PPC::Runtime::ASM::lwz(context->r7, StructValues_55 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80474D80 00471B80*/ PPC::Runtime::ASM::xoris(context->r4, context->r3, 0x8000);
/*80474D84 00471B84*/ PPC::Runtime::ASM::srwi(context->r6, context->r0, 2);
/*80474D88 00471B88*/ PPC::Runtime::ASM::srawi(context->r0, context->r7, 31);
/*80474D8C 00471B8C*/ PPC::Runtime::ASM::mullw(context->r3, context->r0, context->r6);
/*80474D90 00471B90*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r7, context->r6);
/*80474D94 00471B94*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80474D98 00471B98*/ PPC::Runtime::ASM::mullw(context->r0, context->r7, context->r5);
/*80474D9C 00471B9C*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80474DA0 00471BA0*/ PPC::Runtime::ASM::mullw(context->r5, context->r7, context->r6);
/*80474DA4 00471BA4*/ PPC::Runtime::ASM::xoris(context->r3, context->r0, 0x8000);
/*80474DA8 00471BA8*/ PPC::Runtime::ASM::subfc(context->r0, context->r5, context->r8);
/*80474DAC 00471BAC*/ PPC::Runtime::ASM::subfe(context->r3, context->r3, context->r4);
/*80474DB0 00471BB0*/ PPC::Runtime::ASM::subfe(context->r3, context->r4, context->r4);
/*80474DB4 00471BB4*/ PPC::Runtime::ASM::neg.(context->r3, context->r3);
/*80474DB8 00471BB8*/ PPC::Runtime::ASM::bne(.L_80474DDC);
/*80474DBC 00471BBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80474DC0 00471BC0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80474DC4 00471BC4*/ PPC::Runtime::ASM::bne(.L_80474DD0);
/*80474DC8 00471BC8*/ PPC::Runtime::ASM::li(context->r0, -0xa);
/*80474DCC 00471BCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80474DD0, 0x80474DD0) //this is a jump label
/*80474DD0 00471BD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80474DD4 00471BD4*/ PPC::Runtime::ASM::bl(fn_80475738);
/*80474DD8 00471BD8*/ PPC::Runtime::ASM::b(.L_80474E44);
RUNTIME_PPC_JUMP_LABEL(.L_80474DDC, 0x80474DDC) //this is a jump label
/*80474DDC 00471BDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80474DE0 00471BE0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80474DE4 00471BE4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80474DE8 00471BE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x228, context->r31));
/*80474DEC 00471BEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x220, context->r31));
/*80474DF0 00471BF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80474DF4 00471BF4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*80474DF8 00471BF8*/ PPC::Runtime::ASM::bge(.L_80474E00);
/*80474DFC 00471BFC*/ PPC::Runtime::ASM::b(.L_80474E04);
RUNTIME_PPC_JUMP_LABEL(.L_80474E00, 0x80474E00) //this is a jump label
/*80474E00 00471C00*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80474E04, 0x80474E04) //this is a jump label
/*80474E04 00471C04*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 1);
/*80474E08 00471C08*/ PPC::Runtime::ASM::addze(context->r0, context->r0);
/*80474E0C 00471C0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r31));
/*80474E10 00471C10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*80474E14 00471C14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r31));
/*80474E18 00471C18*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*80474E1C 00471C1C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80474E20 00471C20*/ PPC::Runtime::ASM::ble(.L_80474E28);
/*80474E24 00471C24*/ PPC::Runtime::ASM::b(.L_80474E2C);
RUNTIME_PPC_JUMP_LABEL(.L_80474E28, 0x80474E28) //this is a jump label
/*80474E28 00471C28*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80474E2C, 0x80474E2C) //this is a jump label
/*80474E2C 00471C2C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r31));
/*80474E30 00471C30*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80474E34 00471C34*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80474E38 00471C38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*80474E3C 00471C3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x220, context->r31));
/*80474E40 00471C40*/ PPC::Runtime::ASM::bl(fn_8047477C);
RUNTIME_PPC_JUMP_LABEL(.L_80474E44, 0x80474E44) //this is a jump label
/*80474E44 00471C44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80474E48 00471C48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80474E4C 00471C4C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80474E50 00471C50*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80474E54 00471C54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80474E58 00471C58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80474E5C 00471C5C*/ PPC::Runtime::ASM::blr();
}