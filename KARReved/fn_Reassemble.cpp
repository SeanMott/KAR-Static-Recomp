//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memmove.hpp"



void fn_Reassemble(PPC::Runtime::GCContext* context)
{
/*80470AE8 0046D8E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80470AEC 0046D8EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80470AF0 0046D8F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80470AF4 0046D8F4*/ PPC::Runtime::ASM::stmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80470AF8 0046D8F8*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*80470AFC 0046D8FC*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*80470B00 0046D900*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80470B04 0046D904*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80470B08 0046D908*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r4));
/*80470B0C 0046D90C*/ PPC::Runtime::ASM::clrlslwi(context->r4, context->r0, 28, 2);
/*80470B10 0046D910*/ PPC::Runtime::ASM::subf(context->r3, context->r4, context->r3);
/*80470B14 0046D914*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80470B18 0046D918*/ PPC::Runtime::ASM::clrlslwi(context->r30, context->r7, 19, 3);
/*80470B1C 0046D91C*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x1);
/*80470B20 0046D920*/ PPC::Runtime::ASM::add(context->r4, context->r30, context->r4);
/*80470B24 0046D924*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 28, 2);
/*80470B28 0046D928*/ PPC::Runtime::ASM::addi(context->r6, context->r4, 0x1);
/*80470B2C 0046D92C*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r6);
/*80470B30 0046D930*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x0);
/*80470B34 0046D934*/ PPC::Runtime::ASM::cmpw(context->r5, context->r6);
/*80470B38 0046D938*/ PPC::Runtime::ASM::addi(context->r4, context->r6, 0x0);
/*80470B3C 0046D93C*/ PPC::Runtime::ASM::blt(.L_80470B64);
/*80470B40 0046D940*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80470B44 0046D944*/ PPC::Runtime::ASM::ble(.L_80470B64);
/*80470B48 0046D948*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r7, 0, 18, 18);
/*80470B4C 0046D94C*/ PPC::Runtime::ASM::beq(.L_80470B74);
/*80470B50 0046D950*/ PPC::Runtime::ASM::srawi(context->r0, context->r3, 3);
/*80470B54 0046D954*/ PPC::Runtime::ASM::addze(context->r0, context->r0);
/*80470B58 0046D958*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80470B5C 0046D95C*/ PPC::Runtime::ASM::subfc.(context->r0, context->r0, context->r3);
/*80470B60 0046D960*/ PPC::Runtime::ASM::beq(.L_80470B74);
RUNTIME_PPC_JUMP_LABEL(.L_80470B64, 0x80470B64) //this is a jump label
/*80470B64 0046D964*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80470B68 0046D968*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80470B6C 0046D96C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80470B70 0046D970*/ PPC::Runtime::ASM::b(.L_80470CA8);
RUNTIME_PPC_JUMP_LABEL(.L_80470B74, 0x80470B74) //this is a jump label
/*80470B74 0046D974*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r26));
/*80470B78 0046D978*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*80470B7C 0046D97C*/ PPC::Runtime::ASM::ble(.L_80470B84);
/*80470B80 0046D980*/ PPC::Runtime::ASM::b(.L_80470B88);
RUNTIME_PPC_JUMP_LABEL(.L_80470B84, 0x80470B84) //this is a jump label
/*80470B84 0046D984*/ PPC::Runtime::ASM::mr(context->r0, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80470B88, 0x80470B88) //this is a jump label
/*80470B88 0046D988*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r26));
/*80470B8C 0046D98C*/ PPC::Runtime::ASM::addi(context->r28, context->r26, 0xa);
/*80470B90 0046D990*/ PPC::Runtime::ASM::subi(context->r31, context->r30, 0x1);
/*80470B94 0046D994*/ PPC::Runtime::ASM::b(.L_80470C84);
RUNTIME_PPC_JUMP_LABEL(.L_80470B98, 0x80470B98) //this is a jump label
/*80470B98 0046D998*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80470B9C 0046D99C*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 28, 2);
/*80470BA0 0046D9A0*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*80470BA4 0046D9A4*/ PPC::Runtime::ASM::add(context->r3, context->r26, context->r3);
/*80470BA8 0046D9A8*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80470BAC 0046D9AC*/ PPC::Runtime::ASM::cmpw(context->r4, context->r30);
/*80470BB0 0046D9B0*/ PPC::Runtime::ASM::blt(.L_80470BC0);
/*80470BB4 0046D9B4*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80470BB8 0046D9B8*/ PPC::Runtime::ASM::cmpw(context->r29, context->r5);
/*80470BBC 0046D9BC*/ PPC::Runtime::ASM::bge(.L_80470BC8);
RUNTIME_PPC_JUMP_LABEL(.L_80470BC0, 0x80470BC0) //this is a jump label
/*80470BC0 0046D9C0*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x4);
/*80470BC4 0046D9C4*/ PPC::Runtime::ASM::b(.L_80470C84);
RUNTIME_PPC_JUMP_LABEL(.L_80470BC8, 0x80470BC8) //this is a jump label
/*80470BC8 0046D9C8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80470BCC 0046D9CC*/ PPC::Runtime::ASM::cmpw(context->r5, context->r30);
/*80470BD0 0046D9D0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80470BD4 0046D9D4*/ PPC::Runtime::ASM::bge(.L_80470BF0);
/*80470BD8 0046D9D8*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80470BDC 0046D9DC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80470BE0 0046D9E0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80470BE4 0046D9E4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80470BE8 0046D9E8*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x4);
/*80470BEC 0046D9EC*/ PPC::Runtime::ASM::b(.L_80470BF4);
RUNTIME_PPC_JUMP_LABEL(.L_80470BF0, 0x80470BF0) //this is a jump label
/*80470BF0 0046D9F0*/ PPC::Runtime::ASM::subf(context->r6, context->r30, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_80470BF4, 0x80470BF4) //this is a jump label
/*80470BF4 0046D9F4*/ PPC::Runtime::ASM::cmpw(context->r29, context->r4);
/*80470BF8 0046D9F8*/ PPC::Runtime::ASM::bge(.L_80470C4C);
/*80470BFC 0046D9FC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r27));
/*80470C00 0046DA00*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 18, 18);
/*80470C04 0046DA04*/ PPC::Runtime::ASM::beq(.L_80470C40);
/*80470C08 0046DA08*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80470C0C 0046DA0C*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x1);
/*80470C10 0046DA10*/ PPC::Runtime::ASM::clrlslwi(context->r3, context->r3, 28, 2);
/*80470C14 0046DA14*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r29);
/*80470C18 0046DA18*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*80470C1C 0046DA1C*/ PPC::Runtime::ASM::add(context->r3, context->r26, context->r3);
/*80470C20 0046DA20*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80470C24 0046DA24*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80470C28 0046DA28*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80470C2C 0046DA2C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80470C30 0046DA30*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80470C34 0046DA34*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80470C38 0046DA38*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x4);
/*80470C3C 0046DA3C*/ PPC::Runtime::ASM::b(.L_80470C50);
RUNTIME_PPC_JUMP_LABEL(.L_80470C40, 0x80470C40) //this is a jump label
/*80470C40 0046DA40*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80470C44 0046DA44*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80470C48 0046DA48*/ PPC::Runtime::ASM::b(.L_80470C50);
RUNTIME_PPC_JUMP_LABEL(.L_80470C4C, 0x80470C4C) //this is a jump label
/*80470C4C 0046DA4C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80470C50, 0x80470C50) //this is a jump label
/*80470C50 0046DA50*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80470C54 0046DA54*/ PPC::Runtime::ASM::add(context->r0, context->r30, context->r6);
/*80470C58 0046DA58*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80470C5C 0046DA5C*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r29);
/*80470C60 0046DA60*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r4, 28, 2);
/*80470C64 0046DA64*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r30);
/*80470C68 0046DA68*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r3, 28, 2);
/*80470C6C 0046DA6C*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r6);
/*80470C70 0046DA70*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r6);
/*80470C74 0046DA74*/ PPC::Runtime::ASM::add(context->r3, context->r26, context->r3);
/*80470C78 0046DA78*/ PPC::Runtime::ASM::add(context->r4, context->r27, context->r4);
/*80470C7C 0046DA7C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*80470C80 0046DA80*/ PPC::Runtime::ASM::bl(memmove);
RUNTIME_PPC_JUMP_LABEL(.L_80470C84, 0x80470C84) //this is a jump label
/*80470C84 0046DA84*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80470C88 0046DA88*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1);
/*80470C8C 0046DA8C*/ PPC::Runtime::ASM::bne(.L_80470B98);
/*80470C90 0046DA90*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r26));
/*80470C94 0046DA94*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80470C98 0046DA98*/ PPC::Runtime::ASM::bne(.L_80470CA4);
/*80470C9C 0046DA9C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80470CA0 0046DAA0*/ PPC::Runtime::ASM::b(.L_80470CA8);
RUNTIME_PPC_JUMP_LABEL(.L_80470CA4, 0x80470CA4) //this is a jump label
/*80470CA4 0046DAA4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80470CA8, 0x80470CA8) //this is a jump label
/*80470CA8 0046DAA8*/ PPC::Runtime::ASM::lmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80470CAC 0046DAAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80470CB0 0046DAB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80470CB4 0046DAB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80470CB8 0046DAB8*/ PPC::Runtime::ASM::blr();
}