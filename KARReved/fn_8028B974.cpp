//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8028BEEC.hpp"
#include "fn_8028BEEC.hpp"
#include "fn_8028BE6C.hpp"
#include "fn_8028BE6C.hpp"
#include "fn_80312FBC.hpp"
#include "fn_CARDGetXferredBytes.hpp"
#include "fn_80059818.hpp"
#include "fn_80059818.hpp"
#include "fn_80379E58.hpp"



void fn_8028B974(PPC::Runtime::GCContext* context)
{
/*8028B974 00288774*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*8028B978 00288778*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028B97C 0028877C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BE4E0 @ Get_MemoryOffset_HighBit);
/*8028B980 00288780*/ PPC::Runtime::ASM::li(context->r6, 0x14);
/*8028B984 00288784*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8028B988 00288788*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804BE4E0 @ Get_MemoryOffset_LowBit);
/*8028B98C 0028878C*/ PPC::Runtime::ASM::lis(context->r5, fn_8028BEEC @ Get_MemoryOffset_HighBit);
/*8028B990 00288790*/ PPC::Runtime::ASM::li(context->r7, 0x4);
/*8028B994 00288794*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8028B998 00288798*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8028B99C 0028879C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8028B9A0 002887A0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8028B9A4 002887A4*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8028B9A8 002887A8*/ PPC::Runtime::ASM::addi(context->r4, context->r5, fn_8028BEEC @ Get_MemoryOffset_LowBit);
/*8028B9AC 002887AC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8028B9B0 002887B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028B9B4 002887B4*/ PPC::Runtime::ASM::lis(context->r3, fn_8028BE6C @ Get_MemoryOffset_HighBit);
/*8028B9B8 002887B8*/ PPC::Runtime::ASM::addi(context->r5, context->r3, fn_8028BE6C @ Get_MemoryOffset_LowBit);
/*8028B9BC 002887BC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028B9C0 002887C0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8028B9C4 002887C4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC650 @ Get_MemoryOffset_HighBit);
/*8028B9C8 002887C8*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_804BC650 @ Get_MemoryOffset_LowBit);
/*8028B9CC 002887CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8028B9D0 002887D0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x20);
/*8028B9D4 002887D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8028B9D8 002887D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8028B9DC 002887DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8028B9E0 002887E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8028B9E4 002887E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8028B9E8 002887E8*/ PPC::Runtime::ASM::bl(fn___construct_array);
/*8028B9EC 002887EC*/ PPC::Runtime::ASM::bl(OSGetTime);
/*8028B9F0 002887F0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*8028B9F4 002887F4*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*8028B9F8 002887F8*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8028B9FC 002887FC  7C 64 1B 79 */ mr. context->r4 , context->r3
/*8028BA00 00288800*/ PPC::Runtime::ASM::beq(.L_8028BA10);
/*8028BA04 00288804*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8028BA08 00288808*/ PPC::Runtime::ASM::bl(fn_80312FBC);
/*8028BA0C 0028880C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8028BA10, 0x8028BA10) //this is a jump label
/*8028BA10 00288810*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8028BA14 00288814*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028BA18 00288818*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8028BA1C 0028881C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*8028BA20 00288820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8028BA24 00288824*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028BA28 00288828*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8028BA2C 0028882C*/ PPC::Runtime::ASM::beq(.L_8028BA54);
/*8028BA30 00288830*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BA34 00288834*/ PPC::Runtime::ASM::beq(.L_8028BA4C);
/*8028BA38 00288838*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BA3C 0028883C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BA40 00288840*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BA44 00288844*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BA48 00288848*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BA4C, 0x8028BA4C) //this is a jump label
/*8028BA4C 0028884C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8028BA50 00288850*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8028BA54, 0x8028BA54) //this is a jump label
/*8028BA54 00288854*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8028BA58 00288858*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BA5C 0028885C*/ PPC::Runtime::ASM::beq(.L_8028BA74);
/*8028BA60 00288860*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BA64 00288864*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BA68 00288868*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BA6C 0028886C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BA70 00288870*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BA74, 0x8028BA74) //this is a jump label
/*8028BA74 00288874*/ PPC::Runtime::ASM::li(context->r3, 0x50);
/*8028BA78 00288878*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8028BA7C 0028887C  7C 64 1B 79 */ mr. context->r4 , context->r3
/*8028BA80 00288880*/ PPC::Runtime::ASM::beq(.L_8028BA94);
/*8028BA84 00288884*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x6e8);
/*8028BA88 00288888*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8028BA8C 0028888C*/ PPC::Runtime::ASM::bl(fn_8038B9C0);
/*8028BA90 00288890*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8028BA94, 0x8028BA94) //this is a jump label
/*8028BA94 00288894*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8028BA98 00288898*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028BA9C 0028889C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8028BAA0 002888A0*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*8028BAA4 002888A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8028BAA8 002888A8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8028BAAC 002888AC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8028BAB0 002888B0*/ PPC::Runtime::ASM::beq(.L_8028BAD8);
/*8028BAB4 002888B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BAB8 002888B8*/ PPC::Runtime::ASM::beq(.L_8028BAD0);
/*8028BABC 002888BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BAC0 002888C0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BAC4 002888C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BAC8 002888C8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BACC 002888CC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BAD0, 0x8028BAD0) //this is a jump label
/*8028BAD0 002888D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8028BAD4 002888D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8028BAD8, 0x8028BAD8) //this is a jump label
/*8028BAD8 002888D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8028BADC 002888DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BAE0 002888E0*/ PPC::Runtime::ASM::beq(.L_8028BAF8);
/*8028BAE4 002888E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BAE8 002888E8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BAEC 002888EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BAF0 002888F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BAF4 002888F4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BAF8, 0x8028BAF8) //this is a jump label
/*8028BAF8 002888F8*/ PPC::Runtime::ASM::li(context->r3, 0x50);
/*8028BAFC 002888FC*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8028BB00 00288900  7C 64 1B 79 */ mr. context->r4 , context->r3
/*8028BB04 00288904*/ PPC::Runtime::ASM::beq(.L_8028BB18);
/*8028BB08 00288908*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x6f4);
/*8028BB0C 0028890C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8028BB10 00288910*/ PPC::Runtime::ASM::bl(fn_8038B9C0);
/*8028BB14 00288914*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8028BB18, 0x8028BB18) //this is a jump label
/*8028BB18 00288918*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8028BB1C 0028891C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028BB20 00288920*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8028BB24 00288924*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*8028BB28 00288928*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8028BB2C 0028892C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028BB30 00288930*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8028BB34 00288934*/ PPC::Runtime::ASM::beq(.L_8028BB5C);
/*8028BB38 00288938*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BB3C 0028893C*/ PPC::Runtime::ASM::beq(.L_8028BB54);
/*8028BB40 00288940*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BB44 00288944*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BB48 00288948*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BB4C 0028894C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BB50 00288950*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BB54, 0x8028BB54) //this is a jump label
/*8028BB54 00288954*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8028BB58 00288958*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8028BB5C, 0x8028BB5C) //this is a jump label
/*8028BB5C 0028895C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8028BB60 00288960*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BB64 00288964*/ PPC::Runtime::ASM::beq(.L_8028BB7C);
/*8028BB68 00288968*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BB6C 0028896C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BB70 00288970*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BB74 00288974*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BB78 00288978*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BB7C, 0x8028BB7C) //this is a jump label
/*8028BB7C 0028897C*/ PPC::Runtime::ASM::li(context->r3, 0x50);
/*8028BB80 00288980*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8028BB84 00288984  7C 64 1B 79 */ mr. context->r4 , context->r3
/*8028BB88 00288988*/ PPC::Runtime::ASM::beq(.L_8028BB9C);
/*8028BB8C 0028898C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x704);
/*8028BB90 00288990*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8028BB94 00288994*/ PPC::Runtime::ASM::bl(fn_8038B9C0);
/*8028BB98 00288998*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8028BB9C, 0x8028BB9C) //this is a jump label
/*8028BB9C 0028899C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8028BBA0 002889A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028BBA4 002889A4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8028BBA8 002889A8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*8028BBAC 002889AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8028BBB0 002889B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8028BBB4 002889B4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8028BBB8 002889B8*/ PPC::Runtime::ASM::beq(.L_8028BBE0);
/*8028BBBC 002889BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BBC0 002889C0*/ PPC::Runtime::ASM::beq(.L_8028BBD8);
/*8028BBC4 002889C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BBC8 002889C8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BBCC 002889CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BBD0 002889D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BBD4 002889D4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BBD8, 0x8028BBD8) //this is a jump label
/*8028BBD8 002889D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8028BBDC 002889DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8028BBE0, 0x8028BBE0) //this is a jump label
/*8028BBE0 002889E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8028BBE4 002889E4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BBE8 002889E8*/ PPC::Runtime::ASM::beq(.L_8028BC00);
/*8028BBEC 002889EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BBF0 002889F0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BBF4 002889F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BBF8 002889F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BBFC 002889FC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BC00, 0x8028BC00) //this is a jump label
/*8028BC00 00288A00*/ PPC::Runtime::ASM::li(context->r3, 0x50);
/*8028BC04 00288A04*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8028BC08 00288A08  7C 64 1B 79 */ mr. context->r4 , context->r3
/*8028BC0C 00288A0C*/ PPC::Runtime::ASM::beq(.L_8028BC20);
/*8028BC10 00288A10*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x710);
/*8028BC14 00288A14*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8028BC18 00288A18*/ PPC::Runtime::ASM::bl(fn_8038B9C0);
/*8028BC1C 00288A1C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8028BC20, 0x8028BC20) //this is a jump label
/*8028BC20 00288A20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8028BC24 00288A24*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028BC28 00288A28*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8028BC2C 00288A2C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*8028BC30 00288A30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8028BC34 00288A34*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028BC38 00288A38*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8028BC3C 00288A3C*/ PPC::Runtime::ASM::beq(.L_8028BC64);
/*8028BC40 00288A40*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BC44 00288A44*/ PPC::Runtime::ASM::beq(.L_8028BC5C);
/*8028BC48 00288A48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BC4C 00288A4C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BC50 00288A50*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BC54 00288A54*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BC58 00288A58*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BC5C, 0x8028BC5C) //this is a jump label
/*8028BC5C 00288A5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8028BC60 00288A60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8028BC64, 0x8028BC64) //this is a jump label
/*8028BC64 00288A64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8028BC68 00288A68*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BC6C 00288A6C*/ PPC::Runtime::ASM::beq(.L_8028BC84);
/*8028BC70 00288A70*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BC74 00288A74*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BC78 00288A78*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BC7C 00288A7C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BC80 00288A80*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BC84, 0x8028BC84) //this is a jump label
/*8028BC84 00288A84*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*8028BC88 00288A88*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8028BC8C 00288A8C  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8028BC90 00288A90*/ PPC::Runtime::ASM::beq(.L_8028BCE0);
/*8028BC94 00288A94*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3b, context->r29));
/*8028BC98 00288A98*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8028BC9C 00288A9C*/ PPC::Runtime::ASM::bl(fn_CARDGetXferredBytes);
/*8028BCA0 00288AA0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE4B0 @ Get_MemoryOffset_HighBit);
/*8028BCA4 00288AA4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8028BCA8 00288AA8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BE4B0 @ Get_MemoryOffset_LowBit);
/*8028BCAC 00288AAC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028BCB0 00288AB0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8028BCB4 00288AB4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x4);
/*8028BCB8 00288AB8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x71c);
/*8028BCBC 00288ABC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8028BCC0 00288AC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8028BCC4 00288AC4*/ PPC::Runtime::ASM::bl(fn_80059818);
/*8028BCC8 00288AC8*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8028BCCC 00288ACC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x8);
/*8028BCD0 00288AD0*/ PPC::Runtime::ASM::bl(fn_80059818);
/*8028BCD4 00288AD4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8028BCD8 00288AD8*/ PPC::Runtime::ASM::bl(fn_80379E58);
/*8028BCDC 00288ADC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8028BCE0, 0x8028BCE0) //this is a jump label
/*8028BCE0 00288AE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8028BCE4 00288AE4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028BCE8 00288AE8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8028BCEC 00288AEC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8028BCF0 00288AF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8028BCF4 00288AF4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028BCF8 00288AF8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028BCFC 00288AFC*/ PPC::Runtime::ASM::beq(.L_8028BD24);
/*8028BD00 00288B00*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BD04 00288B04*/ PPC::Runtime::ASM::beq(.L_8028BD1C);
/*8028BD08 00288B08*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BD0C 00288B0C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BD10 00288B10*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BD14 00288B14*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BD18 00288B18*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BD1C, 0x8028BD1C) //this is a jump label
/*8028BD1C 00288B1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028BD20 00288B20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8028BD24, 0x8028BD24) //this is a jump label
/*8028BD24 00288B24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8028BD28 00288B28*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BD2C 00288B2C*/ PPC::Runtime::ASM::beq(.L_8028BD44);
/*8028BD30 00288B30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028BD34 00288B34*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028BD38 00288B38*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028BD3C 00288B3C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028BD40 00288B40*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028BD44, 0x8028BD44) //this is a jump label
/*8028BD44 00288B44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8028BD48 00288B48*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8028BD4C 00288B4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8028BD50 00288B50*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8028BD54 00288B54*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8028BD58 00288B58*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8028BD5C 00288B5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028BD60 00288B60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*8028BD64 00288B64*/ PPC::Runtime::ASM::blr();
}