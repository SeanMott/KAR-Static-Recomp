//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80059098.hpp"
#include "fn_80072C90.hpp"
#include "fn_80059098.hpp"
#include "fn_80072C90.hpp"
#include "fn_80059098.hpp"
#include "fn_80072C90.hpp"



void fn_802358C4(PPC::Runtime::GCContext* context)
{
/*802358C4 002326C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802358C8 002326C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802358CC 002326CC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B4F3C @ Get_MemoryOffset_HighBit);
/*802358D0 002326D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802358D4 002326D4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B4F3C @ Get_MemoryOffset_LowBit);
/*802358D8 002326D8*/ PPC::Runtime::ASM::li(context->r0, 0x15);
/*802358DC 002326DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802358E0 002326E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802358E4 002326E4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802358E8 002326E8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802358EC 002326EC*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_802358F0, 0x802358F0) //this is a jump label
/*802358F0 002326F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802358F4 002326F4*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*802358F8 002326F8*/ PPC::Runtime::ASM::bne(.L_80235920);
/*802358FC 002326FC*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0x14);
/*80235900 00232700*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B4F3C @ Get_MemoryOffset_HighBit);
/*80235904 00232704*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80235908 00232708*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804B4F3C @ Get_MemoryOffset_LowBit);
/*8023590C 0023270C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r5);
/*80235910 00232710*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80235914 00232714*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80235918 00232718*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8023591C 0023271C*/ PPC::Runtime::ASM::b(.L_80235930);
RUNTIME_PPC_JUMP_LABEL(.L_80235920, 0x80235920) //this is a jump label
/*80235920 00232720*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x14);
/*80235924 00232724*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80235928 00232728*/ PPC::Runtime::ASM::bdnz(.L_802358F0);
/*8023592C 0023272C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80235930, 0x80235930) //this is a jump label
/*80235930 00232730*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80235934 00232734*/ PPC::Runtime::ASM::beq(.L_80235A04);
/*80235938 00232738*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8023593C 0023273C*/ PPC::Runtime::ASM::beq(.L_8023597C);
/*80235940 00232740*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80235944 00232744*/ PPC::Runtime::ASM::bl(fn_80059098);
/*80235948 00232748*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8023594C 0023274C*/ PPC::Runtime::ASM::beq(.L_8023597C);
/*80235950 00232750*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80235954 00232754*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80235958 00232758*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023595C 0023275C*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*80235960 00232760*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80235964 00232764*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80235968 00232768*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8023596C 0023276C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80235970 00232770*/ PPC::Runtime::ASM::li(context->r9, 0x6);
/*80235974 00232774*/ PPC::Runtime::ASM::li(context->r10, 0x4);
/*80235978 00232778*/ PPC::Runtime::ASM::bl(fn_80072C90);
RUNTIME_PPC_JUMP_LABEL(.L_8023597C, 0x8023597C) //this is a jump label
/*8023597C 0023277C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80235980 00232780*/ PPC::Runtime::ASM::beq(.L_802359C0);
/*80235984 00232784*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80235988 00232788*/ PPC::Runtime::ASM::bl(fn_80059098);
/*8023598C 0023278C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80235990 00232790*/ PPC::Runtime::ASM::beq(.L_802359C0);
/*80235994 00232794*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80235998 00232798*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8023599C 0023279C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802359A0 002327A0*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*802359A4 002327A4*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802359A8 002327A8*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*802359AC 002327AC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802359B0 002327B0*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*802359B4 002327B4*/ PPC::Runtime::ASM::li(context->r9, 0x6);
/*802359B8 002327B8*/ PPC::Runtime::ASM::li(context->r10, 0x4);
/*802359BC 002327BC*/ PPC::Runtime::ASM::bl(fn_80072C90);
RUNTIME_PPC_JUMP_LABEL(.L_802359C0, 0x802359C0) //this is a jump label
/*802359C0 002327C0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802359C4 002327C4*/ PPC::Runtime::ASM::beq(.L_80235A04);
/*802359C8 002327C8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802359CC 002327CC*/ PPC::Runtime::ASM::bl(fn_80059098);
/*802359D0 002327D0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802359D4 002327D4*/ PPC::Runtime::ASM::beq(.L_80235A04);
/*802359D8 002327D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802359DC 002327DC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802359E0 002327E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802359E4 002327E4*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*802359E8 002327E8*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802359EC 002327EC*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*802359F0 002327F0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802359F4 002327F4*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*802359F8 002327F8*/ PPC::Runtime::ASM::li(context->r9, 0x6);
/*802359FC 002327FC*/ PPC::Runtime::ASM::li(context->r10, 0x4);
/*80235A00 00232800*/ PPC::Runtime::ASM::bl(fn_80072C90);
RUNTIME_PPC_JUMP_LABEL(.L_80235A04, 0x80235A04) //this is a jump label
/*80235A04 00232804*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80235A08 00232808*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80235A0C 0023280C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80235A10 00232810*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80235A14 00232814*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80235A18 00232818*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80235A1C 0023281C*/ PPC::Runtime::ASM::blr();
}