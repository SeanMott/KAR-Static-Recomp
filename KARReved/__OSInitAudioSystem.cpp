//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSGetArenaHi.hpp"
#include "memcpy.hpp"
#include "memcpy.hpp"
#include "DCFlushRange.hpp"
#include "OSGetTick.hpp"
#include "OSGetTick.hpp"
#include "OSGetArenaHi.hpp"
#include "memcpy.hpp"



void __OSInitAudioSystem(PPC::Runtime::GCContext* context)
{
/*803D3C50 003D0A50*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D3C54 003D0A54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D3C58 003D0A58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803D3C5C 003D0A5C*/ PPC::Runtime::ASM::stmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D3C60 003D0A60*/ PPC::Runtime::ASM::bl(OSGetArenaHi);
/*803D3C64 003D0A64*/ PPC::Runtime::ASM::lis(context->r4, 0x8100);
/*803D3C68 003D0A68*/ PPC::Runtime::ASM::li(context->r5, 0x80);
/*803D3C6C 003D0A6C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x80);
/*803D3C70 003D0A70*/ PPC::Runtime::ASM::bl(memcpy);
/*803D3C74 003D0A74*/ PPC::Runtime::ASM::lis(context->r3, DSPInitCode_804FA980 @ Get_MemoryOffset_HighBit);
/*803D3C78 003D0A78*/ PPC::Runtime::ASM::addi(context->r4, context->r3, DSPInitCode_804FA980 @ Get_MemoryOffset_LowBit);
/*803D3C7C 003D0A7C*/ PPC::Runtime::ASM::lis(context->r3, 0x8100);
/*803D3C80 003D0A80*/ PPC::Runtime::ASM::li(context->r5, 0x80);
/*803D3C84 003D0A84*/ PPC::Runtime::ASM::bl(memcpy);
/*803D3C88 003D0A88*/ PPC::Runtime::ASM::lis(context->r3, 0x8100);
/*803D3C8C 003D0A8C*/ PPC::Runtime::ASM::li(context->r4, 0x80);
/*803D3C90 003D0A90*/ PPC::Runtime::ASM::bl(DCFlushRange);
/*803D3C94 003D0A94*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803D3C98 003D0A98*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x5000);
/*803D3C9C 003D0A9C*/ PPC::Runtime::ASM::li(context->r0, 0x43);
/*803D3CA0 003D0AA0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r3));
/*803D3CA4 003D0AA4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0xa);
/*803D3CA8 003D0AA8*/ PPC::Runtime::ASM::li(context->r0, 0x8ac);
/*803D3CAC 003D0AAC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r3));
/*803D3CB0 003D0AB0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r3));
/*803D3CB4 003D0AB4*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1);
/*803D3CB8 003D0AB8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803D3CBC, 0x803D3CBC) //this is a jump label
/*803D3CBC 003D0ABC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/* 803D3CC0 003D0AC0  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*803D3CC4 003D0AC4*/ PPC::Runtime::ASM::bne(.L_803D3CBC);
/*803D3CC8 003D0AC8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D3CCC 003D0ACC*/ PPC::Runtime::ASM::lis(context->r4, 0xcc00);
/*803D3CD0 003D0AD0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5000, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_803D3CD4, 0x803D3CD4) //this is a jump label
/*803D3CD4 003D0AD4*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x5000);
/*803D3CD8 003D0AD8*/ PPC::Runtime::ASM::lhzu(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803D3CDC 003D0ADC*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x5000);
/*803D3CE0 003D0AE0*/ PPC::Runtime::ASM::lhzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r29));
/*803D3CE4 003D0AE4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 16, 0, 15);
/* 803D3CE8 003D0AE8  54 00 00 01 */ clrrwi. context->r0 , context->r0 , 31
/*803D3CEC 003D0AEC*/ PPC::Runtime::ASM::bne(.L_803D3CD4);
/*803D3CF0 003D0AF0*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803D3CF4 003D0AF4*/ PPC::Runtime::ASM::lis(context->r0, 0x100);
/*803D3CF8 003D0AF8*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x5000);
/*803D3CFC 003D0AFC*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*803D3D00 003D0B00*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D3D04 003D0B04*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x5000);
/*803D3D08 003D0B08*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r26));
/*803D3D0C 003D0B0C*/ PPC::Runtime::ASM::li(context->r0, 0x20);
/*803D3D10 003D0B10*/ PPC::Runtime::ASM::addi(context->r25, context->r3, 0x5000);
/*803D3D14 003D0B14*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r25));
/*803D3D18 003D0B18*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3D1C 003D0B1C*/ PPC::Runtime::ASM::b(.L_803D3D24);
RUNTIME_PPC_JUMP_LABEL(.L_803D3D20, 0x803D3D20) //this is a jump label
/*803D3D20 003D0B20*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803D3D24, 0x803D3D24) //this is a jump label
/*803D3D24 003D0B24*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 26, 26);
/*803D3D28 003D0B28*/ PPC::Runtime::ASM::beq(.L_803D3D20);
/*803D3D2C 003D0B2C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3D30 003D0B30*/ PPC::Runtime::ASM::bl(OSGetTick);
/*803D3D34 003D0B34*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803D3D38, 0x803D3D38) //this is a jump label
/*803D3D38 003D0B38*/ PPC::Runtime::ASM::bl(OSGetTick);
/*803D3D3C 003D0B3C*/ PPC::Runtime::ASM::subf(context->r0, context->r28, context->r3);
/*803D3D40 003D0B40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x892);
/*803D3D44 003D0B44*/ PPC::Runtime::ASM::blt(.L_803D3D38);
/*803D3D48 003D0B48*/ PPC::Runtime::ASM::lis(context->r0, 0x100);
/*803D3D4C 003D0B4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803D3D50 003D0B50*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D3D54 003D0B54*/ PPC::Runtime::ASM::li(context->r0, 0x20);
/*803D3D58 003D0B58*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*803D3D5C 003D0B5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*803D3D60 003D0B60*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3D64 003D0B64*/ PPC::Runtime::ASM::b(.L_803D3D6C);
RUNTIME_PPC_JUMP_LABEL(.L_803D3D68, 0x803D3D68) //this is a jump label
/*803D3D68 003D0B68*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803D3D6C, 0x803D3D6C) //this is a jump label
/*803D3D6C 003D0B6C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 26, 26);
/*803D3D70 003D0B70*/ PPC::Runtime::ASM::beq(.L_803D3D68);
/*803D3D74 003D0B74*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3D78 003D0B78*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3D7C 003D0B7C*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 21, 19);
/*803D3D80 003D0B80*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803D3D84, 0x803D3D84) //this is a jump label
/*803D3D84 003D0B84*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3D88 003D0B88*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 21, 21);
/*803D3D8C 003D0B8C*/ PPC::Runtime::ASM::bne(.L_803D3D84);
/*803D3D90 003D0B90*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3D94 003D0B94*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 30, 28);
/*803D3D98 003D0B98*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3D9C 003D0B9C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803D3DA0 003D0BA0*/ PPC::Runtime::ASM::b(.L_803D3DA8);
RUNTIME_PPC_JUMP_LABEL(.L_803D3DA4, 0x803D3DA4) //this is a jump label
/*803D3DA4 003D0BA4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803D3DA8, 0x803D3DA8) //this is a jump label
/*803D3DA8 003D0BA8*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 16);
/*803D3DAC 003D0BAC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 16, 16);
/*803D3DB0 003D0BB0*/ PPC::Runtime::ASM::beq(.L_803D3DA4);
/*803D3DB4 003D0BB4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3DB8 003D0BB8*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803D3DBC 003D0BBC*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x4);
/*803D3DC0 003D0BC0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3DC4 003D0BC4*/ PPC::Runtime::ASM::li(context->r0, 0x8ac);
/*803D3DC8 003D0BC8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3DCC 003D0BCC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803D3DD0 003D0BD0*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1);
/*803D3DD4 003D0BD4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803D3DD8, 0x803D3DD8) //this is a jump label
/*803D3DD8 003D0BD8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/* 803D3DDC 003D0BDC  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*803D3DE0 003D0BE0*/ PPC::Runtime::ASM::bne(.L_803D3DD8);
/*803D3DE4 003D0BE4*/ PPC::Runtime::ASM::bl(OSGetArenaHi);
/*803D3DE8 003D0BE8*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x80);
/*803D3DEC 003D0BEC*/ PPC::Runtime::ASM::lis(context->r3, 0x8100);
/*803D3DF0 003D0BF0*/ PPC::Runtime::ASM::li(context->r5, 0x80);
/*803D3DF4 003D0BF4*/ PPC::Runtime::ASM::bl(memcpy);
/*803D3DF8 003D0BF8*/ PPC::Runtime::ASM::lmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D3DFC 003D0BFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803D3E00 003D0C00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803D3E04 003D0C04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D3E08 003D0C08*/ PPC::Runtime::ASM::blr();
}