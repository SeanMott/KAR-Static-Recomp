//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_TRKAppendBuffer_ui32.hpp"
#include "fn_TRKReadBuffer_ui32.hpp"



void fn_TRKTargetAccessDefault(PPC::Runtime::GCContext* context)
{
/*803C15D8 003BE3D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803C15DC 003BE3DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C15E0 003BE3E0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x24);
/*803C15E4 003BE3E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C15E8 003BE3E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C15EC 003BE3EC*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*803C15F0 003BE3F0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C15F4 003BE3F4*/ PPC::Runtime::ASM::ble(.L_803C1600);
/*803C15F8 003BE3F8*/ PPC::Runtime::ASM::li(context->r3, 0x701);
/*803C15FC 003BE3FC*/ PPC::Runtime::ASM::b(.L_803C16B4);
RUNTIME_PPC_JUMP_LABEL(.L_803C1600, 0x803C1600) //this is a jump label
/*803C1600 003BE400*/ PPC::Runtime::ASM::lis(context->r6, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_HighBit);
/*803C1604 003BE404*/ PPC::Runtime::ASM::subf(context->r4, context->r3, context->r4);
/*803C1608 003BE408*/ PPC::Runtime::ASM::addi(context->r30, context->r6, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_LowBit);
/*803C160C 003BE40C*/ PPC::Runtime::ASM::lis(context->r6, gTRKCPUState @ Get_MemoryOffset_HighBit);
/*803C1610 003BE410*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803C1614 003BE414*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803C1618 003BE418*/ PPC::Runtime::ASM::addi(context->r12, context->r4, 0x1);
/*803C161C 003BE41C*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803C1620 003BE420*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803C1624 003BE424*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*803C1628 003BE428*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803C162C 003BE42C*/ PPC::Runtime::ASM::slwi(context->r0, context->r12, 2);
/*803C1630 003BE430*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r30));
/*803C1634 003BE434*/ PPC::Runtime::ASM::slwi(context->r4, context->r3, 2);
/*803C1638 003BE438*/ PPC::Runtime::ASM::addi(context->r3, context->r6, gTRKCPUState @ Get_MemoryOffset_LowBit);
/*803C163C 003BE43C*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C1640 003BE440*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r4);
/*803C1644 003BE444*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C1648 003BE448*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C164C 003BE44C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C1650 003BE450*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803C1654 003BE454*/ PPC::Runtime::ASM::beq(.L_803C1668);
/*803C1658 003BE458*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*803C165C 003BE45C*/ PPC::Runtime::ASM::mr(context->r5, context->r12);
/*803C1660 003BE460*/ PPC::Runtime::ASM::bl(fn_TRKAppendBuffer_ui32);
/*803C1664 003BE464*/ PPC::Runtime::ASM::b(.L_803C1674);
RUNTIME_PPC_JUMP_LABEL(.L_803C1668, 0x803C1668) //this is a jump label
/*803C1668 003BE468*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*803C166C 003BE46C*/ PPC::Runtime::ASM::mr(context->r5, context->r12);
/*803C1670 003BE470*/ PPC::Runtime::ASM::bl(fn_TRKReadBuffer_ui32);
RUNTIME_PPC_JUMP_LABEL(.L_803C1674, 0x803C1674) //this is a jump label
/*803C1674 003BE474*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r30));
/*803C1678 003BE478*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803C167C 003BE47C*/ PPC::Runtime::ASM::beq(.L_803C168C);
/*803C1680 003BE480*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C1684 003BE484*/ PPC::Runtime::ASM::li(context->r3, 0x702);
/*803C1688 003BE488*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803C168C, 0x803C168C) //this is a jump label
/*803C168C 003BE48C*/ PPC::Runtime::ASM::lis(context->r4, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_HighBit);
/*803C1690 003BE490*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C1694 003BE494*/ PPC::Runtime::ASM::addi(context->r7, context->r4, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_LowBit);
/*803C1698 003BE498*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C169C 003BE49C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C16A0 003BE4A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C16A4 003BE4A4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803C16A8 003BE4A8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803C16AC 003BE4AC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803C16B0 003BE4B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_803C16B4, 0x803C16B4) //this is a jump label
/*803C16B4 003BE4B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C16B8 003BE4B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C16BC 003BE4BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C16C0 003BE4C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C16C4 003BE4C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803C16C8 003BE4C8*/ PPC::Runtime::ASM::blr();
}