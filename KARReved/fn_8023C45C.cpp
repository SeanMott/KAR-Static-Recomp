//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802410D4.hpp"
#include "fn_80234CF0.hpp"
#include "fn_80235008.hpp"
#include "fn_80235008.hpp"
#include "fn_802344DC.hpp"



void fn_8023C45C(PPC::Runtime::GCContext* context)
{
/*8023C45C 0023925C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8023C460 00239260*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023C464 00239264*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023C468 00239268*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8023C46C 0023926C*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8023C470 00239270*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023C474 00239274*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8023C478 00239278*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023C47C 0023927C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8023C480 00239280*/ PPC::Runtime::ASM::bl(fn_802410D4);
/*8023C484 00239284*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8023C488 00239288*/ PPC::Runtime::ASM::bne(.L_8023C494);
/*8023C48C 0023928C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023C490 00239290*/ PPC::Runtime::ASM::b(.L_8023C53C);
RUNTIME_PPC_JUMP_LABEL(.L_8023C494, 0x8023C494) //this is a jump label
/*8023C494 00239294*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8023C498 00239298*/ PPC::Runtime::ASM::bl(fn_80234CF0);
/*8023C49C 0023929C*/ PPC::Runtime::ASM::lis(context->r4, 0x68dc);
/*8023C4A0 002392A0*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*8023C4A4 002392A4*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7453);
/*8023C4A8 002392A8*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/* 8023C4AC 002392AC  7C 00 E8 96 */ mulhw context->r0 , context->r0 , context->r29
/*8023C4B0 002392B0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 12);
/*8023C4B4 002392B4*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*8023C4B8 002392B8*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*8023C4BC 002392BC*/ PPC::Runtime::ASM::bl(fn_804328A0);
/* 8023C4C0 002392C0  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8023C4C4 002392C4*/ PPC::Runtime::ASM::beq(.L_8023C4FC);
/*8023C4C8 002392C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8023C4CC 002392CC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8023C4D0 002392D0*/ PPC::Runtime::ASM::bne(.L_8023C4E0);
/*8023C4D4 002392D4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8023C4D8 002392D8*/ PPC::Runtime::ASM::bl(fn_80437CD8);
/*8023C4DC 002392DC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8023C4E0, 0x8023C4E0) //this is a jump label
/*8023C4E0 002392E0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8023C4E4 002392E4*/ PPC::Runtime::ASM::beq(.L_8023C4FC);
/*8023C4E8 002392E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8023C4EC 002392EC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r31));
/*8023C4F0 002392F0*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 23, 17);
/*8023C4F4 002392F4*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x3800);
/*8023C4F8 002392F8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8023C4FC, 0x8023C4FC) //this is a jump label
/*8023C4FC 002392FC*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8023C500 00239300*/ PPC::Runtime::ASM::beq(.L_8023C538);
/*8023C504 00239304*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B4E08 @ Get_MemoryOffset_HighBit);
/*8023C508 00239308*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8023C50C 0023930C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804B4E08 @ Get_MemoryOffset_LowBit);
/*8023C510 00239310*/ PPC::Runtime::ASM::bl(fn_8042BA60);
/*8023C514 00239314*/ PPC::Runtime::ASM::lis(context->r4, fn_80235008 @ Get_MemoryOffset_HighBit);
/*8023C518 00239318*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8023C51C 0023931C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_80235008 @ Get_MemoryOffset_LowBit);
/*8023C520 00239320*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8023C524 00239324*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*8023C528 00239328*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8023C52C 0023932C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8023C530 00239330*/ PPC::Runtime::ASM::bl(fn_802344DC);
/*8023C534 00239334*/ PPC::Runtime::ASM::b(.L_8023C53C);
RUNTIME_PPC_JUMP_LABEL(.L_8023C538, 0x8023C538) //this is a jump label
/*8023C538 00239338*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8023C53C, 0x8023C53C) //this is a jump label
/*8023C53C 0023933C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023C540 00239340*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8023C544 00239344*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023C548 00239348*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023C54C 0023934C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023C550 00239350*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8023C554 00239354*/ PPC::Runtime::ASM::blr();
}