//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_8003D5F0.hpp"
#include "fn_801297E8.hpp"
#include "fn_80128328.hpp"
#include "fn_renderPauseHUD_renderOptions.hpp"
#include "fn_renderPauseHUD_renderStatChart.hpp"
#include "fn_8000C768.hpp"
#include "fn_800098C0.hpp"
#include "fn_80128BB8.hpp"
#include "fn_80129154.hpp"



void fn_renderPauseHUD(PPC::Runtime::GCContext* context)
{
/*80113914 00110714*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80113918 00110718*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011391C 0011071C*/ PPC::Runtime::ASM::lis(context->r4, lbl_805578B8 @ Get_MemoryOffset_HighBit);
/*80113920 00110720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80113924 00110724*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80113928 00110728*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_805578B8 @ Get_MemoryOffset_LowBit);
/*8011392C 0011072C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80113930 00110730*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80113934 00110734*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80113938 00110738*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8011393C 0011073C*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*80113940 00110740*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80113944 00110744*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80113948 00110748*/ PPC::Runtime::ASM::beq(.L_8011395C);
/*8011394C 0011074C*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*80113950 00110750*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80113954 00110754*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*80113958 00110758*/ PPC::Runtime::ASM::bne(.L_80113984);
RUNTIME_PPC_JUMP_LABEL(.L_8011395C, 0x8011395C) //this is a jump label
/*8011395C 0011075C*/ PPC::Runtime::ASM::bl(fn_8003D5F0);
/*80113960 00110760*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80113964 00110764*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80113968 00110768*/ PPC::Runtime::ASM::bne(.L_80113978);
/*8011396C 0011076C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80113970 00110770*/ PPC::Runtime::ASM::bl(fn_801297E8);
/*80113974 00110774*/ PPC::Runtime::ASM::b(.L_80113A04);
RUNTIME_PPC_JUMP_LABEL(.L_80113978, 0x80113978) //this is a jump label
/*80113978 00110778*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011397C 0011077C*/ PPC::Runtime::ASM::bl(fn_80128328);
/*80113980 00110780*/ PPC::Runtime::ASM::b(.L_80113A04);
RUNTIME_PPC_JUMP_LABEL(.L_80113984, 0x80113984) //this is a jump label
/*80113984 00110784*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80113988 00110788*/ PPC::Runtime::ASM::bl(fn_renderPauseHUD_renderOptions);
/*8011398C 0011078C*/ PPC::Runtime::ASM::bl(fn_renderPauseHUD_renderStatChart);
/*80113990 00110790*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80113994 00110794*/ PPC::Runtime::ASM::bne(.L_80113A04);
/*80113998 00110798*/ PPC::Runtime::ASM::bl(fn_8000C768);
/*8011399C 0011079C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*801139A0 001107A0*/ PPC::Runtime::ASM::beq(.L_80113A04);
/*801139A4 001107A4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801139A8, 0x801139A8) //this is a jump label
/*801139A8 001107A8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801139AC 001107AC*/ PPC::Runtime::ASM::bl(fn_800098C0);
/*801139B0 001107B0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801139B4 001107B4*/ PPC::Runtime::ASM::beq(.L_801139F8);
/*801139B8 001107B8*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x1);
/*801139BC 001107BC*/ PPC::Runtime::ASM::lbzx(context->r29, context->r31, context->r0);
/*801139C0 001107C0*/ PPC::Runtime::ASM::extsb(context->r29, context->r29);
/*801139C4 001107C4*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x1);
/*801139C8 001107C8*/ PPC::Runtime::ASM::beq(.L_801139F8);
/*801139CC 001107CC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801139D0 001107D0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801139D4 001107D4*/ PPC::Runtime::ASM::bl(fn_80128BB8);
/*801139D8 001107D8*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801139DC, 0x801139DC) //this is a jump label
/*801139DC 001107DC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801139E0 001107E0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801139E4 001107E4*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*801139E8 001107E8*/ PPC::Runtime::ASM::bl(fn_80129154);
/*801139EC 001107EC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*801139F0 001107F0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x9);
/*801139F4 001107F4*/ PPC::Runtime::ASM::blt(.L_801139DC);
RUNTIME_PPC_JUMP_LABEL(.L_801139F8, 0x801139F8) //this is a jump label
/*801139F8 001107F8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*801139FC 001107FC*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*80113A00 00110800*/ PPC::Runtime::ASM::blt(.L_801139A8);
RUNTIME_PPC_JUMP_LABEL(.L_80113A04, 0x80113A04) //this is a jump label
/*80113A04 00110804*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80113A08 00110808*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80113A0C 0011080C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80113A10 00110810*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80113A14 00110814*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80113A18 00110818*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80113A1C 0011081C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80113A20 00110820*/ PPC::Runtime::ASM::blr();
}