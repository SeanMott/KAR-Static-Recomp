//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "MemoryOffset_72.hpp"
#include "MemoryOffset_72.hpp"
#include "fn___throw_catch_compare.hpp"
#include "fn_803AE550.hpp"
#include "fn___throw_catch_compare.hpp"
#include "lbl_804F8730.hpp"
#include "lbl_804F8838.hpp"
#include "lbl_804F8730.hpp"
#include "lbl_804F8838.hpp"
#include "fn_803AE550.hpp"
#include "fn___throw_catch_compare.hpp"
#include "lbl_804F8730.hpp"
#include "lbl_804F8838.hpp"
#include "lbl_804F8730.hpp"
#include "lbl_804F8838.hpp"
#include "fn_803AE550.hpp"
#include "fn_803AE694.hpp"



void fn_803AEAE8(PPC::Runtime::GCContext* context)
{
/*803AEAE8 003AB8E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*803AEAEC 003AB8EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803AEAF0 003AB8F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*803AEAF4 003AB8F4*/ PPC::Runtime::ASM::stmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803AEAF8 003AB8F8*/ PPC::Runtime::ASM::mr(context->r31, context->r1);
/*803AEAFC 003AB8FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803AEB00 003AB900*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_72 @ Get_MemoryOffset_HighBit);
/*803AEB04 003AB904*/ PPC::Runtime::ASM::addi(context->r30, context->r3, MemoryOffset_72 @ Get_MemoryOffset_LowBit);
/*803AEB08 003AB908*/ PPC::Runtime::ASM::stw(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803AEB0C 003AB90C*/ PPC::Runtime::ASM::bl(fn_unexpected);
/*803AEB10 003AB910*/ PPC::Runtime::ASM::b(.L_803AEC7C);
/*803AEB14 003AB914*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*803AEB18 003AB918*/ PPC::Runtime::ASM::mr(context->r26, context->r29);
/*803AEB1C 003AB91C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*803AEB20 003AB920*/ PPC::Runtime::ASM::b(.L_803AEB4C);
RUNTIME_PPC_JUMP_LABEL(.L_803AEB24, 0x803AEB24) //this is a jump label
/*803AEB24 003AB924*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*803AEB28 003AB928*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803AEB2C 003AB92C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x10);
/*803AEB30 003AB930*/ PPC::Runtime::ASM::bl(fn___throw_catch_compare);
/*803AEB34 003AB934*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*803AEB38 003AB938*/ PPC::Runtime::ASM::beq(.L_803AEB44);
/*803AEB3C 003AB93C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803AEB40 003AB940*/ PPC::Runtime::ASM::b(.L_803AEB5C);
RUNTIME_PPC_JUMP_LABEL(.L_803AEB44, 0x803AEB44) //this is a jump label
/*803AEB44 003AB944*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*803AEB48 003AB948*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803AEB4C, 0x803AEB4C) //this is a jump label
/*803AEB4C 003AB94C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*803AEB50 003AB950*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*803AEB54 003AB954*/ PPC::Runtime::ASM::blt(.L_803AEB24);
/*803AEB58 003AB958*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AEB5C, 0x803AEB5C) //this is a jump label
/*803AEB5C 003AB95C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803AEB60 003AB960*/ PPC::Runtime::ASM::beq(.L_803AEB74);
/*803AEB64 003AB964*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803AEB68 003AB968*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803AEB6C 003AB96C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803AEB70 003AB970*/ PPC::Runtime::ASM::bl(fn_803AE550);
RUNTIME_PPC_JUMP_LABEL(.L_803AEB74, 0x803AEB74) //this is a jump label
/*803AEB74 003AB974*/ PPC::Runtime::ASM::mr(context->r26, context->r29);
/*803AEB78 003AB978*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*803AEB7C 003AB97C*/ PPC::Runtime::ASM::b(.L_803AEBA8);
RUNTIME_PPC_JUMP_LABEL(.L_803AEB80, 0x803AEB80) //this is a jump label
/*803AEB80 003AB980*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*803AEB84 003AB984*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803AEB88 003AB988*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xc);
/*803AEB8C 003AB98C*/ PPC::Runtime::ASM::bl(fn___throw_catch_compare);
/*803AEB90 003AB990*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*803AEB94 003AB994*/ PPC::Runtime::ASM::beq(.L_803AEBA0);
/*803AEB98 003AB998*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803AEB9C 003AB99C*/ PPC::Runtime::ASM::b(.L_803AEBB8);
RUNTIME_PPC_JUMP_LABEL(.L_803AEBA0, 0x803AEBA0) //this is a jump label
/*803AEBA0 003AB9A0*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*803AEBA4 003AB9A4*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803AEBA8, 0x803AEBA8) //this is a jump label
/*803AEBA8 003AB9A8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*803AEBAC 003AB9AC*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*803AEBB0 003AB9B0*/ PPC::Runtime::ASM::blt(.L_803AEB80);
/*803AEBB4 003AB9B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AEBB8, 0x803AEBB8) //this is a jump label
/*803AEBB8 003AB9B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803AEBBC 003AB9BC*/ PPC::Runtime::ASM::beq(.L_803AEBEC);
/*803AEBC0 003AB9C0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F8730 @ Get_MemoryOffset_HighBit);
/*803AEBC4 003AB9C4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F8838 @ Get_MemoryOffset_HighBit);
/*803AEBC8 003AB9C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F8730 @ Get_MemoryOffset_LowBit);
/*803AEBCC 003AB9CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803AEBD0 003AB9D0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F8838 @ Get_MemoryOffset_LowBit);
/*803AEBD4 003AB9D4*/ PPC::Runtime::ASM::lis(context->r3, fn_FormationOffensive___dt_TakeNoParams @ Get_MemoryOffset_HighBit);
/*803AEBD8 003AB9D8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x18);
/*803AEBDC 003AB9DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803AEBE0 003AB9E0*/ PPC::Runtime::ASM::addi(context->r5, context->r3, fn_FormationOffensive___dt_TakeNoParams @ Get_MemoryOffset_LowBit);
/*803AEBE4 003AB9E4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x14);
/*803AEBE8 003AB9E8*/ PPC::Runtime::ASM::bl(fn_803AE550);
RUNTIME_PPC_JUMP_LABEL(.L_803AEBEC, 0x803AEBEC) //this is a jump label
/*803AEBEC 003AB9EC*/ PPC::Runtime::ASM::mr(context->r26, context->r29);
/*803AEBF0 003AB9F0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*803AEBF4 003AB9F4*/ PPC::Runtime::ASM::b(.L_803AEC20);
RUNTIME_PPC_JUMP_LABEL(.L_803AEBF8, 0x803AEBF8) //this is a jump label
/*803AEBF8 003AB9F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*803AEBFC 003AB9FC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3c);
/*803AEC00 003ABA00*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x8);
/*803AEC04 003ABA04*/ PPC::Runtime::ASM::bl(fn___throw_catch_compare);
/*803AEC08 003ABA08*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*803AEC0C 003ABA0C*/ PPC::Runtime::ASM::beq(.L_803AEC18);
/*803AEC10 003ABA10*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803AEC14 003ABA14*/ PPC::Runtime::ASM::b(.L_803AEC30);
RUNTIME_PPC_JUMP_LABEL(.L_803AEC18, 0x803AEC18) //this is a jump label
/*803AEC18 003ABA18*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*803AEC1C 003ABA1C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803AEC20, 0x803AEC20) //this is a jump label
/*803AEC20 003ABA20*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*803AEC24 003ABA24*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*803AEC28 003ABA28*/ PPC::Runtime::ASM::blt(.L_803AEBF8);
/*803AEC2C 003ABA2C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AEC30, 0x803AEC30) //this is a jump label
/*803AEC30 003ABA30*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803AEC34 003ABA34*/ PPC::Runtime::ASM::beq(.L_803AEC64);
/*803AEC38 003ABA38*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F8730 @ Get_MemoryOffset_HighBit);
/*803AEC3C 003ABA3C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F8838 @ Get_MemoryOffset_HighBit);
/*803AEC40 003ABA40*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F8730 @ Get_MemoryOffset_LowBit);
/*803AEC44 003ABA44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803AEC48 003ABA48*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F8838 @ Get_MemoryOffset_LowBit);
/*803AEC4C 003ABA4C*/ PPC::Runtime::ASM::lis(context->r3, fn_FormationOffensive___dt_TakeNoParams @ Get_MemoryOffset_HighBit);
/*803AEC50 003ABA50*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x14);
/*803AEC54 003ABA54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803AEC58 003ABA58*/ PPC::Runtime::ASM::addi(context->r5, context->r3, fn_FormationOffensive___dt_TakeNoParams @ Get_MemoryOffset_LowBit);
/*803AEC5C 003ABA5C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x14);
/*803AEC60 003ABA60*/ PPC::Runtime::ASM::bl(fn_803AE550);
RUNTIME_PPC_JUMP_LABEL(.L_803AEC64, 0x803AEC64) //this is a jump label
/*803AEC64 003ABA64*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1c);
/*803AEC68 003ABA68*/ PPC::Runtime::ASM::bl(fn_803AE694);
/*803AEC6C 003ABA6C*/ PPC::Runtime::ASM::nop();
/*803AEC70 003ABA70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r1));
/*803AEC74 003ABA74*/ PPC::Runtime::ASM::lwz(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*803AEC78 003ABA78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803AEC7C, 0x803AEC7C) //this is a jump label
/*803AEC7C 003ABA7C*/ PPC::Runtime::ASM::bl(fn_terminate);
/*803AEC80 003ABA80*/ PPC::Runtime::ASM::mr(context->r10, context->r31);
/*803AEC84 003ABA84*/ PPC::Runtime::ASM::lmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r10));
/*803AEC88 003ABA88*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r1));
/*803AEC8C 003ABA8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r10));
/*803AEC90 003ABA90*/ PPC::Runtime::ASM::mr(context->r1, context->r10);
/*803AEC94 003ABA94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803AEC98 003ABA98*/ PPC::Runtime::ASM::blr();
}