//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000ED10.hpp"
#include "fn_8000ECF0.hpp"
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_800088C8.hpp"
#include "fn_800064F0.hpp"
#include "fn_8006176C.hpp"
#include "fn_8000AECC.hpp"
#include "fn_800088C8.hpp"
#include "fn_800064F0.hpp"
#include "fn_8006176C.hpp"
#include "fn_8000AECC.hpp"
#include "fn_800088C8.hpp"
#include "fn_800064F0.hpp"
#include "fn_80061620.hpp"
#include "fn_80061620.hpp"
#include "fn_80051F98.hpp"
#include "fn_80051FF8.hpp"
#include "fn_CSS_playerQuit.hpp"
#include "fn_800088C8.hpp"
#include "fn_800064F0.hpp"



void fn_80051AA4(PPC::Runtime::GCContext* context)
{
/*80051AA4 0004E8A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80051AA8 0004E8A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80051AAC 0004E8AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80051AB0 0004E8B0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80051AB4 0004E8B4*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*80051AB8 0004E8B8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80051ABC 0004E8BC*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80051AC0 0004E8C0*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80051AC4 0004E8C4*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*80051AC8 0004E8C8*/ PPC::Runtime::ASM::bl(fn_8000ED10);
/*80051ACC 0004E8CC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80051AD0 0004E8D0*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80051AD4 0004E8D4*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*80051AD8 0004E8D8*/ PPC::Runtime::ASM::bl(fn_8000ECF0);
/*80051ADC 0004E8DC*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80051AE0 0004E8E0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80051AE4 0004E8E4*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*80051AE8 0004E8E8*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80051AEC 0004E8EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80051AF0 0004E8F0*/ PPC::Runtime::ASM::beq(.L_80051B28);
/*80051AF4 0004E8F4*/ PPC::Runtime::ASM::li(context->r0, 0x1f60);
/*80051AF8 0004E8F8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80051AFC 0004E8FC*/ PPC::Runtime::ASM::and(context->r3, context->r30, context->r0);
/*80051B00 0004E900*/ PPC::Runtime::ASM::and(context->r0, context->r31, context->r4);
/*80051B04 0004E904*/ PPC::Runtime::ASM::xor(context->r3, context->r3, context->r4);
/*80051B08 0004E908*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r4);
/*80051B0C 0004E90C*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80051B10 0004E910*/ PPC::Runtime::ASM::beq(.L_80051BD8);
/*80051B14 0004E914*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*80051B18 0004E918*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*80051B1C 0004E91C*/ PPC::Runtime::ASM::bl(fn_800088C8);
/*80051B20 0004E920*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*80051B24 0004E924*/ PPC::Runtime::ASM::b(.L_80051C9C);
RUNTIME_PPC_JUMP_LABEL(.L_80051B28, 0x80051B28) //this is a jump label
/*80051B28 0004E928*/ PPC::Runtime::ASM::lis(context->r3, 0x8);
/*80051B2C 0004E92C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80051B30 0004E930*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x522);
/*80051B34 0004E934*/ PPC::Runtime::ASM::and(context->r0, context->r30, context->r0);
/*80051B38 0004E938*/ PPC::Runtime::ASM::and(context->r4, context->r31, context->r5);
/*80051B3C 0004E93C*/ PPC::Runtime::ASM::xor(context->r3, context->r0, context->r5);
/*80051B40 0004E940*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r5);
/*80051B44 0004E944*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80051B48 0004E948*/ PPC::Runtime::ASM::beq(.L_80051B84);
/*80051B4C 0004E94C*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*80051B50 0004E950*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xa);
/*80051B54 0004E954*/ PPC::Runtime::ASM::bl(fn_8006176C);
/*80051B58 0004E958*/ PPC::Runtime::ASM::bl(fn_8000AECC);
/*80051B5C 0004E95C*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80051B60 0004E960*/ PPC::Runtime::ASM::li(context->r0, 0x23);
/*80051B64 0004E964*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*80051B68 0004E968*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x25);
/*80051B6C 0004E96C*/ PPC::Runtime::ASM::bgt(.L_80051B74);
/*80051B70 0004E970*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80051B74, 0x80051B74) //this is a jump label
/*80051B74 0004E974*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*80051B78 0004E978*/ PPC::Runtime::ASM::bl(fn_800088C8);
/*80051B7C 0004E97C*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*80051B80 0004E980*/ PPC::Runtime::ASM::b(.L_80051C9C);
RUNTIME_PPC_JUMP_LABEL(.L_80051B84, 0x80051B84) //this is a jump label
/*80051B84 0004E984*/ PPC::Runtime::ASM::lis(context->r3, 0x4);
/*80051B88 0004E988*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r5);
/*80051B8C 0004E98C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x841);
/*80051B90 0004E990*/ PPC::Runtime::ASM::and(context->r3, context->r30, context->r3);
/*80051B94 0004E994*/ PPC::Runtime::ASM::xor(context->r3, context->r3, context->r5);
/*80051B98 0004E998*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80051B9C 0004E99C*/ PPC::Runtime::ASM::beq(.L_80051BD8);
/*80051BA0 0004E9A0*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*80051BA4 0004E9A4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xa);
/*80051BA8 0004E9A8*/ PPC::Runtime::ASM::bl(fn_8006176C);
/*80051BAC 0004E9AC*/ PPC::Runtime::ASM::bl(fn_8000AECC);
/*80051BB0 0004E9B0*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80051BB4 0004E9B4*/ PPC::Runtime::ASM::li(context->r0, 0x25);
/*80051BB8 0004E9B8*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*80051BBC 0004E9BC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x23);
/*80051BC0 0004E9C0*/ PPC::Runtime::ASM::blt(.L_80051BC8);
/*80051BC4 0004E9C4*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80051BC8, 0x80051BC8) //this is a jump label
/*80051BC8 0004E9C8*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*80051BCC 0004E9CC*/ PPC::Runtime::ASM::bl(fn_800088C8);
/*80051BD0 0004E9D0*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*80051BD4 0004E9D4*/ PPC::Runtime::ASM::b(.L_80051C9C);
RUNTIME_PPC_JUMP_LABEL(.L_80051BD8, 0x80051BD8) //this is a jump label
/*80051BD8 0004E9D8*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*80051BDC 0004E9DC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80051BE0 0004E9E0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*80051BE4 0004E9E4*/ PPC::Runtime::ASM::and(context->r0, context->r28, context->r0);
/*80051BE8 0004E9E8*/ PPC::Runtime::ASM::and(context->r4, context->r29, context->r5);
/*80051BEC 0004E9EC*/ PPC::Runtime::ASM::xor(context->r3, context->r0, context->r5);
/*80051BF0 0004E9F0*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r5);
/*80051BF4 0004E9F4*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80051BF8 0004E9F8*/ PPC::Runtime::ASM::beq(.L_80051C20);
/*80051BFC 0004E9FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7cc, context->r27));
/*80051C00 0004EA00*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80051C04 0004EA04*/ PPC::Runtime::ASM::beq(.L_80051C5C);
/*80051C08 0004EA08*/ PPC::Runtime::ASM::bl(fn_80061620);
/*80051C0C 0004EA0C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c9, context->r27));
/*80051C10 0004EA10*/ PPC::Runtime::ASM::li(context->r26, 0x1);
/*80051C14 0004EA14*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80051C18 0004EA18*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c9, context->r27));
/*80051C1C 0004EA1C*/ PPC::Runtime::ASM::b(.L_80051C5C);
RUNTIME_PPC_JUMP_LABEL(.L_80051C20, 0x80051C20) //this is a jump label
/*80051C20 0004EA20*/ PPC::Runtime::ASM::lis(context->r3, 0x2);
/*80051C24 0004EA24*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r5);
/*80051C28 0004EA28*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*80051C2C 0004EA2C*/ PPC::Runtime::ASM::and(context->r3, context->r28, context->r3);
/*80051C30 0004EA30*/ PPC::Runtime::ASM::xor(context->r3, context->r3, context->r5);
/*80051C34 0004EA34*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80051C38 0004EA38*/ PPC::Runtime::ASM::beq(.L_80051C5C);
/*80051C3C 0004EA3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d0, context->r27));
/*80051C40 0004EA40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80051C44 0004EA44*/ PPC::Runtime::ASM::beq(.L_80051C5C);
/*80051C48 0004EA48*/ PPC::Runtime::ASM::bl(fn_80061620);
/*80051C4C 0004EA4C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c9, context->r27));
/*80051C50 0004EA50*/ PPC::Runtime::ASM::li(context->r26, 0x1);
/*80051C54 0004EA54*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80051C58 0004EA58*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c9, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_80051C5C, 0x80051C5C) //this is a jump label
/*80051C5C 0004EA5C*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x0);
/*80051C60 0004EA60*/ PPC::Runtime::ASM::beq(.L_80051C6C);
/*80051C64 0004EA64*/ PPC::Runtime::ASM::bl(fn_80051F98);
/*80051C68 0004EA68*/ PPC::Runtime::ASM::bl(fn_80051FF8);
RUNTIME_PPC_JUMP_LABEL(.L_80051C6C, 0x80051C6C) //this is a jump label
/*80051C6C 0004EA6C*/ PPC::Runtime::ASM::li(context->r0, 0x200);
/*80051C70 0004EA70*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80051C74 0004EA74*/ PPC::Runtime::ASM::and(context->r3, context->r30, context->r0);
/*80051C78 0004EA78*/ PPC::Runtime::ASM::and(context->r0, context->r31, context->r4);
/*80051C7C 0004EA7C*/ PPC::Runtime::ASM::xor(context->r3, context->r3, context->r4);
/*80051C80 0004EA80*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r4);
/*80051C84 0004EA84*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80051C88 0004EA88*/ PPC::Runtime::ASM::beq(.L_80051C9C);
/*80051C8C 0004EA8C*/ PPC::Runtime::ASM::bl(fn_CSS_playerQuit);
/*80051C90 0004EA90*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*80051C94 0004EA94*/ PPC::Runtime::ASM::bl(fn_800088C8);
/*80051C98 0004EA98*/ PPC::Runtime::ASM::bl(fn_800064F0);
RUNTIME_PPC_JUMP_LABEL(.L_80051C9C, 0x80051C9C) //this is a jump label
/*80051C9C 0004EA9C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80051CA0 0004EAA0*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80051CA4 0004EAA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80051CA8 0004EAA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80051CAC 0004EAAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80051CB0 0004EAB0*/ PPC::Runtime::ASM::blr();
}