//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memcpy.hpp"



void fn_80296278(PPC::Runtime::GCContext* context)
{
/*80296278 00293078*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8029627C 0029307C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80296280 00293080*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80296284 00293084*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80296288 00293088*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8029628C 0029308C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80296290 00293090*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80296294 00293094*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80296298 00293098*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8029629C 0029309C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802962A0 002930A0*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*802962A4 002930A4*/ PPC::Runtime::ASM::ble(.L_80296348);
/*802962A8 002930A8*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*802962AC 002930AC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802962B0 002930B0*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*802962B4 002930B4*/ PPC::Runtime::ASM::ble(.L_802962D8);
/*802962B8 002930B8*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*802962BC 002930BC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE4EC @ Get_MemoryOffset_HighBit);
/*802962C0 002930C0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*802962C4 002930C4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BE4EC @ Get_MemoryOffset_LowBit);
/*802962C8 002930C8*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*802962CC 002930CC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802962D0 002930D0*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*802962D4 002930D4*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_802962D8, 0x802962D8) //this is a jump label
/*802962D8 002930D8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802962DC 002930DC*/ PPC::Runtime::ASM::slwi(context->r3, context->r31, 1);
/*802962E0 002930E0*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 802962E4 002930E4  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*802962E8 002930E8*/ PPC::Runtime::ASM::bne(.L_8029630C);
/*802962EC 002930EC*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*802962F0 002930F0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE50C @ Get_MemoryOffset_HighBit);
/*802962F4 002930F4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*802962F8 002930F8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BE50C @ Get_MemoryOffset_LowBit);
/*802962FC 002930FC*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*80296300 00293100*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80296304 00293104*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*80296308 00293108*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_8029630C, 0x8029630C) //this is a jump label
/*8029630C 0029310C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80296310 00293110*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80296314 00293114*/ PPC::Runtime::ASM::beq(.L_80296344);
/*80296318 00293118*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8029631C 0029311C*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80296320 00293120*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80296324 00293124*/ PPC::Runtime::ASM::slwi(context->r5, context->r0, 1);
/*80296328 00293128*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 1);
/*8029632C 0029312C*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*80296330 00293130*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 1);
/*80296334 00293134*/ PPC::Runtime::ASM::slwi(context->r5, context->r0, 1);
/*80296338 00293138*/ PPC::Runtime::ASM::bl(memcpy);
/*8029633C 0029313C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80296340 00293140*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80296344, 0x80296344) //this is a jump label
/*80296344 00293144*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80296348, 0x80296348) //this is a jump label
/*80296348 00293148*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8029634C 0029314C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80296350 00293150*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80296354 00293154*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80296358 00293158*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8029635C 0029315C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80296360 00293160*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80296364 00293164*/ PPC::Runtime::ASM::blr();
}