//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_80285130.hpp"



void fn_802AA8A4(PPC::Runtime::GCContext* context)
{
/*802AA8A4 002A76A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AA8A8 002A76A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AA8AC 002A76AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AA8B0 002A76B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AA8B4 002A76B4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802AA8B8 002A76B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802AA8BC 002A76BC  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802AA8C0 002A76C0*/ PPC::Runtime::ASM::beq(.L_802AA914);
/*802AA8C4 002A76C4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C12E4 @ Get_MemoryOffset_HighBit);
/*802AA8C8 002A76C8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*802AA8CC 002A76CC*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C12E4 @ Get_MemoryOffset_LowBit);
/*802AA8D0 002A76D0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802AA8D4 002A76D4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AA8D8 002A76D8*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802AA8DC 002A76DC*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802AA8E0 002A76E0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA8E4 002A76E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802AA8E8 002A76E8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802AA8EC 002A76EC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802AA8F0 002A76F0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802AA8F4 002A76F4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802AA8F8 002A76F8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AA8FC 002A76FC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802AA900 002A7700*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802AA904 002A7704*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802AA908 002A7708*/ PPC::Runtime::ASM::ble(.L_802AA914);
/*802AA90C 002A770C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AA910 002A7710*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802AA914, 0x802AA914) //this is a jump label
/*802AA914 002A7714*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AA918 002A7718*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AA91C 002A771C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AA920 002A7720*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802AA924 002A7724*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AA928 002A7728*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AA92C 002A772C*/ PPC::Runtime::ASM::blr();
}