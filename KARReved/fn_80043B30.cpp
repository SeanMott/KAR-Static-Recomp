//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000A4EC.hpp"
#include "fn_8000A4EC.hpp"
#include "fn_8000A570.hpp"
#include "fn_8000A5C4.hpp"
#include "fn_8000A498.hpp"
#include "fn_800064F0.hpp"
#include "fn_8000A498.hpp"
#include "fn_800064F0.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80137694.hpp"
#include "fn_8022D7FC.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_801377A8.hpp"
#include "fn_CSS_playerQuit.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80137788.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_801377C8.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_801377C8.hpp"



void fn_80043B30(PPC::Runtime::GCContext* context)
{
/*80043B30 00040930*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80043B34 00040934*/ PPC::Runtime::ASM::mflr(context->r0);
/*80043B38 00040938*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80043B3C 0004093C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80043B40 00040940*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80043B44 00040944*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80043B48 00040948*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80043B4C 0004094C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80043B50 00040950*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d4, context->r3));
/*80043B54 00040954*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x2b8);
/*80043B58 00040958*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80043B5C 0004095C*/ PPC::Runtime::ASM::bne(.L_80043B74);
/*80043B60 00040960*/ PPC::Runtime::ASM::li(context->r3, 0x19);
/*80043B64 00040964*/ PPC::Runtime::ASM::bl(fn_8000A4EC);
/*80043B68 00040968*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80043B6C 0004096C*/ PPC::Runtime::ASM::bne(.L_80043B84);
/*80043B70 00040970*/ PPC::Runtime::ASM::b(.L_80043DE8);
RUNTIME_PPC_JUMP_LABEL(.L_80043B74, 0x80043B74) //this is a jump label
/*80043B74 00040974*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*80043B78 00040978*/ PPC::Runtime::ASM::bl(fn_8000A4EC);
/*80043B7C 0004097C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80043B80 00040980*/ PPC::Runtime::ASM::beq(.L_80043DE8);
RUNTIME_PPC_JUMP_LABEL(.L_80043B84, 0x80043B84) //this is a jump label
/*80043B84 00040984*/ PPC::Runtime::ASM::bl(fn_8000A570);
/*80043B88 00040988*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x1);
/*80043B8C 0004098C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80043B90 00040990*/ PPC::Runtime::ASM::beq(.L_80043BB0);
/*80043B94 00040994*/ PPC::Runtime::ASM::bl(fn_8000A5C4);
/*80043B98 00040998*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80043B9C 0004099C*/ PPC::Runtime::ASM::bne(.L_80043DE8);
/*80043BA0 000409A0*/ PPC::Runtime::ASM::li(context->r3, 0x1000);
/*80043BA4 000409A4*/ PPC::Runtime::ASM::bl(fn_8000A498);
/*80043BA8 000409A8*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*80043BAC 000409AC*/ PPC::Runtime::ASM::b(.L_80043DE8);
RUNTIME_PPC_JUMP_LABEL(.L_80043BB0, 0x80043BB0) //this is a jump label
/*80043BB0 000409B0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*80043BB4 000409B4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80043BB8 000409B8*/ PPC::Runtime::ASM::ble(.L_80043BDC);
/*80043BBC 000409BC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*80043BC0 000409C0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80043BC4 000409C4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*80043BC8 000409C8*/ PPC::Runtime::ASM::bgt(.L_80043DE8);
/*80043BCC 000409CC*/ PPC::Runtime::ASM::li(context->r3, 0x1000);
/*80043BD0 000409D0*/ PPC::Runtime::ASM::bl(fn_8000A498);
/*80043BD4 000409D4*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*80043BD8 000409D8*/ PPC::Runtime::ASM::b(.L_80043DE8);
RUNTIME_PPC_JUMP_LABEL(.L_80043BDC, 0x80043BDC) //this is a jump label
/*80043BDC 000409DC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80043BE0 000409E0*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_80043BE4, 0x80043BE4) //this is a jump label
/*80043BE4 000409E4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80043BE8 000409E8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80043BEC 000409EC*/ PPC::Runtime::ASM::slw(context->r6, context->r0, context->r29);
/*80043BF0 000409F0*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r6);
/*80043BF4 000409F4*/ PPC::Runtime::ASM::beq(.L_80043D58);
/*80043BF8 000409F8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r29, 24);
/*80043BFC 000409FC*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80043C00 00040A00*/ PPC::Runtime::ASM::mulli(context->r5, context->r0, 0x44);
/*80043C04 00040A04*/ PPC::Runtime::ASM::lis(context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*80043C08 00040A08*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80043C0C 00040A0C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*80043C10 00040A10*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r5);
/*80043C14 00040A14*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80043C18 00040A18*/ PPC::Runtime::ASM::ble(.L_80043CAC);
/*80043C1C 00040A1C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*80043C20 00040A20*/ PPC::Runtime::ASM::andi.(context->r0, context->r4, 0x1160);
/*80043C24 00040A24*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80043C28 00040A28*/ PPC::Runtime::ASM::beq(.L_80043D58);
/*80043C2C 00040A2C*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x3);
/*80043C30 00040A30*/ PPC::Runtime::ASM::lbzx(context->r3, context->r31, context->r0);
/*80043C34 00040A34*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80043C38 00040A38*/ PPC::Runtime::ASM::bne(.L_80043C78);
/*80043C3C 00040A3C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80043C40 00040A40*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80043C44 00040A44*/ PPC::Runtime::ASM::bl(fn_80137694);
/*80043C48 00040A48*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80043C4C, 0x80043C4C) //this is a jump label
/*80043C4C 00040A4C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80043C50 00040A50*/ PPC::Runtime::ASM::bl(fn_8022D7FC);
/*80043C54 00040A54*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80043C58 00040A58*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*80043C5C 00040A5C*/ PPC::Runtime::ASM::blt(.L_80043C4C);
/*80043C60 00040A60*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80043C64 00040A64*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c0, context->r28));
/*80043C68 00040A68*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c2, context->r28));
/*80043C6C 00040A6C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c4, context->r28));
/*80043C70 00040A70*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c6, context->r28));
/*80043C74 00040A74*/ PPC::Runtime::ASM::b(.L_80043DE8);
RUNTIME_PPC_JUMP_LABEL(.L_80043C78, 0x80043C78) //this is a jump label
/*80043C78 00040A78*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80043C7C 00040A7C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80043C80 00040A80*/ PPC::Runtime::ASM::bne(.L_80043D58);
/*80043C84 00040A84*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80043C88 00040A88*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80043C8C 00040A8C*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80043C90 00040A90*/ PPC::Runtime::ASM::bl(fn_801377A8);
/*80043C94 00040A94*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80043C98 00040A98*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80043C9C 00040A9C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*80043CA0 00040AA0*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r0);
/*80043CA4 00040AA4*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c0, context->r3));
/*80043CA8 00040AA8*/ PPC::Runtime::ASM::b(.L_80043D58);
RUNTIME_PPC_JUMP_LABEL(.L_80043CAC, 0x80043CAC) //this is a jump label
/*80043CAC 00040AAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*80043CB0 00040AB0*/ PPC::Runtime::ASM::and.(context->r0, context->r0, context->r6);
/*80043CB4 00040AB4*/ PPC::Runtime::ASM::beq(.L_80043D08);
/*80043CB8 00040AB8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 22, 22);
/*80043CBC 00040ABC*/ PPC::Runtime::ASM::beq(.L_80043D58);
/*80043CC0 00040AC0*/ PPC::Runtime::ASM::bl(fn_CSS_playerQuit);
/*80043CC4 00040AC4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80043CC8 00040AC8*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x2b8);
/*80043CCC 00040ACC*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80043CD0 00040AD0*/ PPC::Runtime::ASM::bl(fn_80137788);
/*80043CD4 00040AD4*/ PPC::Runtime::ASM::extsb(context->r5, context->r29);
/*80043CD8 00040AD8*/ PPC::Runtime::ASM::li(context->r6, 0xf);
/*80043CDC 00040ADC*/ PPC::Runtime::ASM::slwi(context->r3, context->r5, 1);
/*80043CE0 00040AE0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80043CE4 00040AE4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*80043CE8 00040AE8*/ PPC::Runtime::ASM::sthx(context->r6, context->r28, context->r0);
/*80043CEC 00040AEC*/ PPC::Runtime::ASM::slw(context->r3, context->r4, context->r5);
/*80043CF0 00040AF0*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x3);
/*80043CF4 00040AF4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r28));
/*80043CF8 00040AF8*/ PPC::Runtime::ASM::andc(context->r3, context->r5, context->r3);
/*80043CFC 00040AFC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r28));
/*80043D00 00040B00*/ PPC::Runtime::ASM::stbx(context->r4, context->r28, context->r0);
/*80043D04 00040B04*/ PPC::Runtime::ASM::b(.L_80043D58);
RUNTIME_PPC_JUMP_LABEL(.L_80043D08, 0x80043D08) //this is a jump label
/*80043D08 00040B08*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 19, 19);
/*80043D0C 00040B0C*/ PPC::Runtime::ASM::beq(.L_80043D58);
/*80043D10 00040B10*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*80043D14 00040B14*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80043D18 00040B18*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x2b8);
/*80043D1C 00040B1C*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80043D20 00040B20*/ PPC::Runtime::ASM::bl(fn_801377C8);
/*80043D24 00040B24*/ PPC::Runtime::ASM::extsb(context->r5, context->r29);
/*80043D28 00040B28*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80043D2C 00040B2C*/ PPC::Runtime::ASM::slwi(context->r3, context->r5, 1);
/*80043D30 00040B30*/ PPC::Runtime::ASM::li(context->r6, 0x5);
/*80043D34 00040B34*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*80043D38 00040B38*/ PPC::Runtime::ASM::slw(context->r4, context->r0, context->r5);
/*80043D3C 00040B3C*/ PPC::Runtime::ASM::sthx(context->r6, context->r28, context->r3);
/*80043D40 00040B40*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x3);
/*80043D44 00040B44*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80043D48 00040B48*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r28));
/*80043D4C 00040B4C*/ PPC::Runtime::ASM::or(context->r4, context->r5, context->r4);
/*80043D50 00040B50*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r28));
/*80043D54 00040B54*/ PPC::Runtime::ASM::stbx(context->r3, context->r28, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80043D58, 0x80043D58) //this is a jump label
/*80043D58 00040B58*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80043D5C 00040B5C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x2);
/*80043D60 00040B60*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*80043D64 00040B64*/ PPC::Runtime::ASM::blt(.L_80043BE4);
/*80043D68 00040B68*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80043D6C 00040B6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*80043D70 00040B70*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80043D74 00040B74*/ PPC::Runtime::ASM::bne(.L_80043DE8);
/*80043D78 00040B78*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80043D7C, 0x80043D7C) //this is a jump label
/*80043D7C 00040B7C*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x10);
/*80043D80 00040B80*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r0);
/*80043D84 00040B84*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80043D88 00040B88*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80043D8C 00040B8C*/ PPC::Runtime::ASM::bne(.L_80043DD4);
/*80043D90 00040B90*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80043D94 00040B94*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x2b8);
/*80043D98 00040B98*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80043D9C 00040B9C*/ PPC::Runtime::ASM::bl(fn_801377C8);
/*80043DA0 00040BA0*/ PPC::Runtime::ASM::extsb(context->r5, context->r29);
/*80043DA4 00040BA4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80043DA8 00040BA8*/ PPC::Runtime::ASM::slwi(context->r3, context->r5, 1);
/*80043DAC 00040BAC*/ PPC::Runtime::ASM::li(context->r6, 0x5);
/*80043DB0 00040BB0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*80043DB4 00040BB4*/ PPC::Runtime::ASM::slw(context->r4, context->r0, context->r5);
/*80043DB8 00040BB8*/ PPC::Runtime::ASM::sthx(context->r6, context->r28, context->r3);
/*80043DBC 00040BBC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x3);
/*80043DC0 00040BC0*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80043DC4 00040BC4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r28));
/*80043DC8 00040BC8*/ PPC::Runtime::ASM::or(context->r4, context->r5, context->r4);
/*80043DCC 00040BCC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r28));
/*80043DD0 00040BD0*/ PPC::Runtime::ASM::stbx(context->r3, context->r28, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80043DD4, 0x80043DD4) //this is a jump label
/*80043DD4 00040BD4*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80043DD8 00040BD8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*80043DDC 00040BDC*/ PPC::Runtime::ASM::blt(.L_80043D7C);
/*80043DE0 00040BE0*/ PPC::Runtime::ASM::li(context->r0, 0x14);
/*80043DE4 00040BE4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80043DE8, 0x80043DE8) //this is a jump label
/*80043DE8 00040BE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80043DEC 00040BEC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80043DF0 00040BF0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80043DF4 00040BF4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80043DF8 00040BF8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80043DFC 00040BFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80043E00 00040C00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80043E04 00040C04*/ PPC::Runtime::ASM::blr();
}