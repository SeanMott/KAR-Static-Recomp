//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019C3E0.hpp"
#include "fn_8019BEDC.hpp"
#include "fn_8019BEDC.hpp"
#include "fn_8019BF14.hpp"
#include "fn_8019BF14.hpp"
#include "fn_8006A250.hpp"
#include "fn_8018CD9C.hpp"
#include "fn_8006A3F0.hpp"
#include "fn_8018CD9C.hpp"
#include "fn_8006A3F0.hpp"
#include "fn_80069F74.hpp"
#include "fn_8019C3E0.hpp"
#include "fn_8019BEDC.hpp"
#include "fn_8019BEDC.hpp"
#include "fn_8019BF14.hpp"
#include "fn_8019BF14.hpp"
#include "fn_8006AD80.hpp"
#include "fn_80069F74.hpp"



void fn_8019C26C(PPC::Runtime::GCContext* context)
{
/*8019C26C 0019906C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8019C270 00199070*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019C274 00199074*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019C278 00199078*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019C27C 0019907C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8019C280 00199080*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019C284 00199084*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C288 00199088*/ PPC::Runtime::ASM::bl(fn_8019C3E0);
/*8019C28C 0019908C*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x5c);
/*8019C290 00199090*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8019C294 00199094*/ PPC::Runtime::ASM::bne(.L_8019C2A4);
/*8019C298 00199098*/ PPC::Runtime::ASM::lis(context->r3, fn_8019BEDC @ Get_MemoryOffset_HighBit);
/*8019C29C 0019909C*/ PPC::Runtime::ASM::addi(context->r29, context->r3, fn_8019BEDC @ Get_MemoryOffset_LowBit);
/*8019C2A0 001990A0*/ PPC::Runtime::ASM::b(.L_8019C2AC);
RUNTIME_PPC_JUMP_LABEL(.L_8019C2A4, 0x8019C2A4) //this is a jump label
/*8019C2A4 001990A4*/ PPC::Runtime::ASM::lis(context->r3, fn_8019BF14 @ Get_MemoryOffset_HighBit);
/*8019C2A8 001990A8*/ PPC::Runtime::ASM::addi(context->r29, context->r3, fn_8019BF14 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8019C2AC, 0x8019C2AC) //this is a jump label
/*8019C2AC 001990AC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804ADBD8 @ Get_MemoryOffset_HighBit);
/*8019C2B0 001990B0*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_804ADBD8 @ Get_MemoryOffset_LowBit);
/*8019C2B4 001990B4*/ PPC::Runtime::ASM::b(.L_8019C334);
RUNTIME_PPC_JUMP_LABEL(.L_8019C2B8, 0x8019C2B8) //this is a jump label
/*8019C2B8 001990B8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5c);
/*8019C2BC 001990BC*/ PPC::Runtime::ASM::bl(fn_8006A250);
/*8019C2C0 001990C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*8019C2C4 001990C4*/ PPC::Runtime::ASM::bl(fn_8018CD9C);
/*8019C2C8 001990C8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*8019C2CC 001990CC*/ PPC::Runtime::ASM::bne(.L_8019C2E8);
/*8019C2D0 001990D0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019C2D4 001990D4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5c);
/*8019C2D8 001990D8*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8019C2DC 001990DC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8019C2E0 001990E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8019C2E4 001990E4*/ PPC::Runtime::ASM::bl(fn_8006A3F0);
RUNTIME_PPC_JUMP_LABEL(.L_8019C2E8, 0x8019C2E8) //this is a jump label
/*8019C2E8 001990E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*8019C2EC 001990EC*/ PPC::Runtime::ASM::bl(fn_8018CD9C);
/*8019C2F0 001990F0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8019C2F4 001990F4*/ PPC::Runtime::ASM::bne(.L_8019C310);
/*8019C2F8 001990F8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019C2FC 001990FC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5c);
/*8019C300 00199100*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*8019C304 00199104*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8019C308 00199108*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8019C30C 0019910C*/ PPC::Runtime::ASM::bl(fn_8006A3F0);
RUNTIME_PPC_JUMP_LABEL(.L_8019C310, 0x8019C310) //this is a jump label
/*8019C310 00199110*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8019C314 00199114*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8019C318 00199118*/ PPC::Runtime::ASM::lwzx(context->r3, context->r30, context->r0);
/*8019C31C 0019911C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*8019C320 00199120*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8019C324 00199124*/ PPC::Runtime::ASM::beq(.L_8019C334);
/*8019C328 00199128*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019C32C 0019912C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8019C330 00199130*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8019C334, 0x8019C334) //this is a jump label
/*8019C334 00199134*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019C338 00199138*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*8019C33C 0019913C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x5c);
/*8019C340 00199140*/ PPC::Runtime::ASM::bl(fn_80069F74);
/*8019C344 00199144*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019C348 00199148*/ PPC::Runtime::ASM::bne(.L_8019C2B8);
/*8019C34C 0019914C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019C350 00199150*/ PPC::Runtime::ASM::bl(fn_8019C3E0);
/*8019C354 00199154*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x108);
/*8019C358 00199158*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8019C35C 0019915C*/ PPC::Runtime::ASM::bne(.L_8019C36C);
/*8019C360 00199160*/ PPC::Runtime::ASM::lis(context->r3, fn_8019BEDC @ Get_MemoryOffset_HighBit);
/*8019C364 00199164*/ PPC::Runtime::ASM::addi(context->r29, context->r3, fn_8019BEDC @ Get_MemoryOffset_LowBit);
/*8019C368 00199168*/ PPC::Runtime::ASM::b(.L_8019C374);
RUNTIME_PPC_JUMP_LABEL(.L_8019C36C, 0x8019C36C) //this is a jump label
/*8019C36C 0019916C*/ PPC::Runtime::ASM::lis(context->r3, fn_8019BF14 @ Get_MemoryOffset_HighBit);
/*8019C370 00199170*/ PPC::Runtime::ASM::addi(context->r29, context->r3, fn_8019BF14 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8019C374, 0x8019C374) //this is a jump label
/*8019C374 00199174*/ PPC::Runtime::ASM::lis(context->r3, lbl_804ADBD8 @ Get_MemoryOffset_HighBit);
/*8019C378 00199178*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_804ADBD8 @ Get_MemoryOffset_LowBit);
/*8019C37C 0019917C*/ PPC::Runtime::ASM::b(.L_8019C3AC);
RUNTIME_PPC_JUMP_LABEL(.L_8019C380, 0x8019C380) //this is a jump label
/*8019C380 00199180*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5c);
/*8019C384 00199184*/ PPC::Runtime::ASM::bl(fn_8006AD80);
/*8019C388 00199188*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8019C38C 0019918C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8019C390 00199190*/ PPC::Runtime::ASM::lwzx(context->r3, context->r30, context->r0);
/*8019C394 00199194*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*8019C398 00199198*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8019C39C 0019919C*/ PPC::Runtime::ASM::beq(.L_8019C3AC);
/*8019C3A0 001991A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019C3A4 001991A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8019C3A8 001991A8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8019C3AC, 0x8019C3AC) //this is a jump label
/*8019C3AC 001991AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019C3B0 001991B0*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*8019C3B4 001991B4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x108);
/*8019C3B8 001991B8*/ PPC::Runtime::ASM::bl(fn_80069F74);
/*8019C3BC 001991BC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019C3C0 001991C0*/ PPC::Runtime::ASM::bne(.L_8019C380);
/*8019C3C4 001991C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019C3C8 001991C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019C3CC 001991CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019C3D0 001991D0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C3D4 001991D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019C3D8 001991D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8019C3DC 001991DC*/ PPC::Runtime::ASM::blr();
}