//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80473AF0.hpp"
#include "fn_80472738.hpp"
#include "fn_80475738.hpp"
#include "fn_8047241C.hpp"
#include "fn_8047241C.hpp"
#include "fn_TCPRecvOut.hpp"
#include "fn_80477A8C.hpp"
#include "fn_cbForCancelSync3.hpp"
#include "fn_8047477C.hpp"



void fn_80473BBC(PPC::Runtime::GCContext* context)
{
/*80473BBC 004709BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80473BC0 004709C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80473BC4 004709C4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80473BC8 004709C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x48, context->r1));
/*80473BCC 004709CC*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80473BD0 004709D0*/ PPC::Runtime::ASM::addi(context->r28, context->r4, 0x0);
/*80473BD4 004709D4*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x0);
/*80473BD8 004709D8*/ PPC::Runtime::ASM::addi(context->r30, context->r6, 0x0);
/*80473BDC 004709DC*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x0);
/*80473BE0 004709E0*/ PPC::Runtime::ASM::addi(context->r31, context->r7, 0x0);
/*80473BE4 004709E4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*80473BE8 004709E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*80473BEC 004709EC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x0);
/*80473BF0 004709F0*/ PPC::Runtime::ASM::bl(fn_80473AF0);
/*80473BF4 004709F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r28));
/*80473BF8 004709F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*80473BFC 004709FC*/ PPC::Runtime::ASM::bge(.L_80473E10);
/*80473C00 00470A00*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*80473C04 00470A04*/ PPC::Runtime::ASM::bge(.L_80473C38);
/*80473C08 00470A08*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80473C0C 00470A0C*/ PPC::Runtime::ASM::bge(.L_80473C18);
/*80473C10 00470A10*/ PPC::Runtime::ASM::b(.L_80473E10);
/*80473C14 00470A14*/ PPC::Runtime::ASM::b(.L_80473E10);
RUNTIME_PPC_JUMP_LABEL(.L_80473C18, 0x80473C18) //this is a jump label
/*80473C18 00470A18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r28));
/*80473C1C 00470A1C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80473C20 00470A20*/ PPC::Runtime::ASM::bne(.L_80473C30);
/*80473C24 00470A24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*80473C28 00470A28*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 28, 28);
/*80473C2C 00470A2C*/ PPC::Runtime::ASM::beq(.L_80473C38);
RUNTIME_PPC_JUMP_LABEL(.L_80473C30, 0x80473C30) //this is a jump label
/*80473C30 00470A30*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*80473C34 00470A34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80473C38, 0x80473C38) //this is a jump label
/*80473C38 00470A38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r28));
/*80473C3C 00470A3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80473C40 00470A40*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80473C44 00470A44*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*80473C48 00470A48*/ PPC::Runtime::ASM::beq(.L_80473C58);
/*80473C4C 00470A4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80473C50 00470A50*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80473C54 00470A54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80473C58, 0x80473C58) //this is a jump label
/*80473C58 00470A58*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/* 80473C5C 00470A5C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80473C60 00470A60*/ PPC::Runtime::ASM::beq(.L_80473C70);
/*80473C64 00470A64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80473C68 00470A68*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80473C6C 00470A6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80473C70, 0x80473C70) //this is a jump label
/*80473C70 00470A70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*80473C74 00470A74*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x11);
/*80473C78 00470A78*/ PPC::Runtime::ASM::beq(.L_80473D20);
/*80473C7C 00470A7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80473C80 00470A80*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80473C84 00470A84*/ PPC::Runtime::ASM::ble(.L_80473D20);
/*80473C88 00470A88*/ PPC::Runtime::ASM::li(context->r0, -0x8);
/*80473C8C 00470A8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*80473C90 00470A90*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80473C94 00470A94*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r6, 0, 29, 29);
/*80473C98 00470A98*/ PPC::Runtime::ASM::bne(.L_80473D14);
/*80473C9C 00470A9C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r6, 0, 27, 27);
/*80473CA0 00470AA0*/ PPC::Runtime::ASM::bne(.L_80473CE8);
/*80473CA4 00470AA4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80473CA8 00470AA8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r6, 0, 30, 30);
/*80473CAC 00470AAC*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*80473CB0 00470AB0*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r6, 22, 26, 29);
/*80473CB4 00470AB4*/ PPC::Runtime::ASM::clrlslwi(context->r4, context->r4, 28, 2);
/*80473CB8 00470AB8*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r3);
/*80473CBC 00470ABC*/ PPC::Runtime::ASM::subf(context->r3, context->r5, context->r0);
/*80473CC0 00470AC0*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80473CC4 00470AC4*/ PPC::Runtime::ASM::beq(.L_80473CCC);
/*80473CC8 00470AC8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80473CCC, 0x80473CCC) //this is a jump label
/* 80473CCC 00470ACC  54 C0 07 FF */ clrlwi. context->r0 , context->r6 , 31
/*80473CD0 00470AD0*/ PPC::Runtime::ASM::beq(.L_80473CD8);
/*80473CD4 00470AD4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80473CD8, 0x80473CD8) //this is a jump label
/*80473CD8 00470AD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80473CDC 00470ADC*/ PPC::Runtime::ASM::li(context->r10, 0x14);
/*80473CE0 00470AE0*/ PPC::Runtime::ASM::add(context->r9, context->r0, context->r3);
/*80473CE4 00470AE4*/ PPC::Runtime::ASM::b(.L_80473CF4);
RUNTIME_PPC_JUMP_LABEL(.L_80473CE8, 0x80473CE8) //this is a jump label
/*80473CE8 00470AE8*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80473CEC 00470AEC*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80473CF0 00470AF0*/ PPC::Runtime::ASM::li(context->r10, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_80473CF4, 0x80473CF4) //this is a jump label
/*80473CF4 00470AF4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80473CF8 00470AF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80473CFC 00470AFC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80473D00 00470B00*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0xc);
/*80473D04 00470B04*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80473D08 00470B08*/ PPC::Runtime::ASM::addi(context->r6, context->r29, 0x10);
/*80473D0C 00470B0C*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*80473D10 00470B10*/ PPC::Runtime::ASM::bl(fn_80472738);
RUNTIME_PPC_JUMP_LABEL(.L_80473D14, 0x80473D14) //this is a jump label
/*80473D14 00470B14*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80473D18 00470B18*/ PPC::Runtime::ASM::bl(fn_80475738);
/*80473D1C 00470B1C*/ PPC::Runtime::ASM::b(.L_80473FC0);
RUNTIME_PPC_JUMP_LABEL(.L_80473D20, 0x80473D20) //this is a jump label
/*80473D20 00470B20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r28));
/*80473D24 00470B24*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80473D28 00470B28*/ PPC::Runtime::ASM::cmpw(context->r4, context->r5);
/*80473D2C 00470B2C*/ PPC::Runtime::ASM::bne(.L_80473DC0);
/*80473D30 00470B30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80473D34 00470B34*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*80473D38 00470B38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80473D3C 00470B3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80473D40 00470B40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80473D44 00470B44*/ PPC::Runtime::ASM::ble(.L_80473E10);
/*80473D48 00470B48*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80473D4C 00470B4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80473D50 00470B50*/ PPC::Runtime::ASM::ori(context->r31, context->r31, 0x10);
/*80473D54 00470B54*/ PPC::Runtime::ASM::addi(context->r9, context->r1, 0x28);
/*80473D58 00470B58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r28));
/*80473D5C 00470B5C*/ PPC::Runtime::ASM::addi(context->r10, context->r28, 0x6c);
/*80473D60 00470B60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a4, context->r28));
/*80473D64 00470B64*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80473D68 00470B68*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r28));
/*80473D6C 00470B6C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r28));
/*80473D70 00470B70*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r28));
/*80473D74 00470B74*/ PPC::Runtime::ASM::bl(fn_8047241C);
/*80473D78 00470B78*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r28));
/*80473D7C 00470B7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r28));
/*80473D80 00470B80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80473D84 00470B84*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80473D88 00470B88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r28));
/*80473D8C 00470B8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r28));
/*80473D90 00470B90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80473D94 00470B94*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80473D98 00470B98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r28));
/*80473D9C 00470B9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r28));
/*80473DA0 00470BA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80473DA4 00470BA4*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80473DA8 00470BA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r28));
/*80473DAC 00470BAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80473DB0 00470BB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*80473DB4 00470BB4*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*80473DB8 00470BB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*80473DBC 00470BBC*/ PPC::Runtime::ASM::b(.L_80473E10);
RUNTIME_PPC_JUMP_LABEL(.L_80473DC0, 0x80473DC0) //this is a jump label
/*80473DC0 00470BC0*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80473DC4 00470BC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80473DC8 00470BC8*/ PPC::Runtime::ASM::subf(context->r7, context->r4, context->r5);
/*80473DCC 00470BCC*/ PPC::Runtime::ASM::addi(context->r9, context->r1, 0x28);
/*80473DD0 00470BD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r28));
/*80473DD4 00470BD4*/ PPC::Runtime::ASM::addi(context->r10, context->r28, 0x6c);
/*80473DD8 00470BD8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a4, context->r28));
/*80473DDC 00470BDC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r28));
/*80473DE0 00470BE0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r28));
/*80473DE4 00470BE4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r28));
/*80473DE8 00470BE8*/ PPC::Runtime::ASM::bl(fn_8047241C);
/*80473DEC 00470BEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r28));
/*80473DF0 00470BF0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/* 80473DF4 00470BF4  54 60 07 FF */ clrlwi. context->r0 , context->r3 , 31
/*80473DF8 00470BF8*/ PPC::Runtime::ASM::beq(.L_80473E10);
/*80473DFC 00470BFC*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r3, 1);
/*80473E00 00470C00*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80473E04 00470C04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r28));
/*80473E08 00470C08*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80473E0C 00470C0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80473E10, 0x80473E10) //this is a jump label
/*80473E10 00470C10*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/* 80473E14 00470C14  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80473E18 00470C18*/ PPC::Runtime::ASM::beq(.L_80473E7C);
/*80473E1C 00470C1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r28));
/*80473E20 00470C20*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80473E24 00470C24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r28));
/*80473E28 00470C28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*80473E2C 00470C2C*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 30, 28);
/*80473E30 00470C30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*80473E34 00470C34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r28));
/*80473E38 00470C38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*80473E3C 00470C3C*/ PPC::Runtime::ASM::beq(.L_80473E68);
/*80473E40 00470C40*/ PPC::Runtime::ASM::bge(.L_80473E50);
/*80473E44 00470C44*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80473E48 00470C48*/ PPC::Runtime::ASM::bge(.L_80473E5C);
/*80473E4C 00470C4C*/ PPC::Runtime::ASM::b(.L_80473E7C);
RUNTIME_PPC_JUMP_LABEL(.L_80473E50, 0x80473E50) //this is a jump label
/*80473E50 00470C50*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*80473E54 00470C54*/ PPC::Runtime::ASM::bge(.L_80473E7C);
/*80473E58 00470C58*/ PPC::Runtime::ASM::b(.L_80473E74);
RUNTIME_PPC_JUMP_LABEL(.L_80473E5C, 0x80473E5C) //this is a jump label
/*80473E5C 00470C5C*/ PPC::Runtime::ASM::li(context->r0, 0x7);
/*80473E60 00470C60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r28));
/*80473E64 00470C64*/ PPC::Runtime::ASM::b(.L_80473E7C);
RUNTIME_PPC_JUMP_LABEL(.L_80473E68, 0x80473E68) //this is a jump label
/*80473E68 00470C68*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*80473E6C 00470C6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r28));
/*80473E70 00470C70*/ PPC::Runtime::ASM::b(.L_80473E7C);
RUNTIME_PPC_JUMP_LABEL(.L_80473E74, 0x80473E74) //this is a jump label
/*80473E74 00470C74*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*80473E78 00470C78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80473E7C, 0x80473E7C) //this is a jump label
/*80473E7C 00470C7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r28));
/*80473E80 00470C80*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80473E84 00470C84*/ PPC::Runtime::ASM::beq(.L_80473EDC);
/*80473E88 00470C88*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80473E8C 00470C8C*/ PPC::Runtime::ASM::bl(fn_TCPRecvOut);
/* 80473E90 00470C90  7C 64 1B 79 */ mr. context->r4 , context->r3
/*80473E94 00470C94*/ PPC::Runtime::ASM::bgt(.L_80473EA4);
/*80473E98 00470C98*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/* 80473E9C 00470C9C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80473EA0 00470CA0*/ PPC::Runtime::ASM::beq(.L_80473EDC);
RUNTIME_PPC_JUMP_LABEL(.L_80473EA4, 0x80473EA4) //this is a jump label
/*80473EA4 00470CA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r28));
/*80473EA8 00470CA8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r28));
/*80473EAC 00470CAC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80473EB0 00470CB0*/ PPC::Runtime::ASM::beq(.L_80473EC0);
/*80473EB4 00470CB4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80473EB8 00470CB8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80473EBC 00470CBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80473EC0, 0x80473EC0) //this is a jump label
/*80473EC0 00470CC0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80473EC4 00470CC4*/ PPC::Runtime::ASM::mtlr(context->r12);
/*80473EC8 00470CC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r28));
/*80473ECC 00470CCC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*80473ED0 00470CD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r28));
/*80473ED4 00470CD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r28));
/* 80473ED8 00470CD8  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_80473EDC, 0x80473EDC) //this is a jump label
/*80473EDC 00470CDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r28));
/*80473EE0 00470CE0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80473EE4 00470CE4*/ PPC::Runtime::ASM::ble(.L_80473F80);
/*80473EE8 00470CE8*/ PPC::Runtime::ASM::bgt(.L_80473EF8);
/*80473EEC 00470CEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*80473EF0 00470CF0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 26, 26);
/*80473EF4 00470CF4*/ PPC::Runtime::ASM::beq(.L_80473F80);
RUNTIME_PPC_JUMP_LABEL(.L_80473EF8, 0x80473EF8) //this is a jump label
/*80473EF8 00470CF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r28));
/*80473EFC 00470CFC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80473F00 00470D00*/ PPC::Runtime::ASM::beq(.L_80473F80);
/*80473F04 00470D04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*80473F08 00470D08*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 25, 25);
/*80473F0C 00470D0C*/ PPC::Runtime::ASM::bne(.L_80473F80);
/*80473F10 00470D10*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 26, 26);
/*80473F14 00470D14*/ PPC::Runtime::ASM::beq(.L_80473F30);
/*80473F18 00470D18*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 20, 20);
/*80473F1C 00470D1C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80473F20 00470D20*/ PPC::Runtime::ASM::bne(.L_80473F34);
/*80473F24 00470D24*/ PPC::Runtime::ASM::xori(context->r0, context->r3, 0x60);
/*80473F28 00470D28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*80473F2C 00470D2C*/ PPC::Runtime::ASM::b(.L_80473F34);
RUNTIME_PPC_JUMP_LABEL(.L_80473F30, 0x80473F30) //this is a jump label
/*80473F30 00470D30*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80473F34, 0x80473F34) //this is a jump label
/*80473F34 00470D34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r28));
/*80473F38 00470D38*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80473F3C 00470D3C*/ PPC::Runtime::ASM::beq(.L_80473F4C);
/*80473F40 00470D40*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80473F44 00470D44*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80473F48 00470D48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80473F4C, 0x80473F4C) //this is a jump label
/*80473F4C 00470D4C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r28));
/*80473F50 00470D50*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80473F54 00470D54*/ PPC::Runtime::ASM::beq(.L_80473F68);
/*80473F58 00470D58*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r28));
/*80473F5C 00470D5C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80473F60 00470D60*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80473F64 00470D64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80473F68, 0x80473F68) //this is a jump label
/*80473F68 00470D68*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r28));
/*80473F6C 00470D6C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80473F70 00470D70*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*80473F74 00470D74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r28));
/*80473F78 00470D78*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 80473F7C 00470D7C  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_80473F80, 0x80473F80) //this is a jump label
/*80473F80 00470D80*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/* 80473F84 00470D84  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80473F88 00470D88*/ PPC::Runtime::ASM::beq(.L_80473FB4);
/*80473F8C 00470D8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r28));
/*80473F90 00470D90*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*80473F94 00470D94*/ PPC::Runtime::ASM::bne(.L_80473FA4);
/*80473F98 00470D98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*80473F9C 00470D9C*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80473FA0 00470DA0*/ PPC::Runtime::ASM::bl(fn_80477A8C);
RUNTIME_PPC_JUMP_LABEL(.L_80473FA4, 0x80473FA4) //this is a jump label
/*80473FA4 00470DA4*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80473FA8 00470DA8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80473FAC 00470DAC*/ PPC::Runtime::ASM::ble(.L_80473FB4);
/*80473FB0 00470DB0*/ PPC::Runtime::ASM::bl(fn_cbForCancelSync3);
RUNTIME_PPC_JUMP_LABEL(.L_80473FB4, 0x80473FB4) //this is a jump label
/*80473FB4 00470DB4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*80473FB8 00470DB8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*80473FBC 00470DBC*/ PPC::Runtime::ASM::bl(fn_8047477C);
RUNTIME_PPC_JUMP_LABEL(.L_80473FC0, 0x80473FC0) //this is a jump label
/*80473FC0 00470DC0*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80473FC4 00470DC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80473FC8 00470DC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x48);
/*80473FCC 00470DCC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80473FD0 00470DD0*/ PPC::Runtime::ASM::blr();
}