//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80484FA4.hpp"
#include "strlen.hpp"
#include "fn_80486CD8.hpp"
#include "fn_DVDGetCurrentDiskID.hpp"
#include "fn_IPGetAddr.hpp"
#include "memmove.hpp"
#include "memmove.hpp"
#include "fn_80485A08.hpp"
#include "fn_sprintf.hpp"
#include "fn_804859C8.hpp"
#include "fn_sprintf.hpp"
#include "fn_sprintf.hpp"
#include "fn_804859C8.hpp"
#include "fn_sprintf.hpp"
#include "fn_804859C8.hpp"
#include "fn_sprintf.hpp"
#include "fn_804859C8.hpp"
#include "fn_sprintf.hpp"
#include "fn_strstr.hpp"
#include "fn_804859C8.hpp"
#include "memmove.hpp"



void fn_80489044(PPC::Runtime::GCContext* context)
{
/*80489044 00485E44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*80489048 00485E48*/ PPC::Runtime::ASM::mflr(context->r0);
/*8048904C 00485E4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80489050 00485E50*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x70);
/*80489054 00485E54*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80489058 00485E58*/ PPC::Runtime::ASM::lis(context->r4, lbl_80535210 @ Get_MemoryOffset_HighBit);
/*8048905C 00485E5C*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*80489060 00485E60*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_80535210 @ Get_MemoryOffset_LowBit);
/*80489064 00485E64*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80489068 00485E68*/ PPC::Runtime::ASM::bl(fn_80484FA4);
/*8048906C 00485E6C*/ PPC::Runtime::ASM::addi(context->r29, context->r31, 0x60);
/*80489070 00485E70*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80489074 00485E74*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80489078 00485E78*/ PPC::Runtime::ASM::bl(strlen);
/*8048907C 00485E7C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80489080 00485E80*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x6c);
/*80489084 00485E84*/ PPC::Runtime::ASM::bl(fn_80486CD8);
/*80489088 00485E88*/ PPC::Runtime::ASM::bl(fn_DVDGetCurrentDiskID);
/*8048908C 00485E8C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80489090 00485E90*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*80489094 00485E94*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80489098 00485E98*/ PPC::Runtime::ASM::bl(fn_IPGetAddr);
/*8048909C 00485E9C*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*804890A0 00485EA0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1e);
/*804890A4 00485EA4*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*804890A8 00485EA8*/ PPC::Runtime::ASM::bl(memmove);
/*804890AC 00485EAC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x22);
/*804890B0 00485EB0*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x4);
/*804890B4 00485EB4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*804890B8 00485EB8*/ PPC::Runtime::ASM::bl(memmove);
/*804890BC 00485EBC*/ PPC::Runtime::ASM::lis(context->r4, lbl_80534D10 @ Get_MemoryOffset_HighBit);
/*804890C0 00485EC0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*804890C4 00485EC4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_80534D10 @ Get_MemoryOffset_LowBit);
/*804890C8 00485EC8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x18);
/*804890CC 00485ECC*/ PPC::Runtime::ASM::li(context->r6, 0xc);
/*804890D0 00485ED0*/ PPC::Runtime::ASM::bl(fn_80485A08);
/*804890D4 00485ED4*/ PPC::Runtime::ASM::lis(context->r3, lbl_805CC0C8 @ Get_MemoryOffset_HighBit);
/*804890D8 00485ED8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x18);
/*804890DC 00485EDC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805CC0C8 @ Get_MemoryOffset_LowBit);
/*804890E0 00485EE0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*804890E4 00485EE4*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*804890E8 00485EE8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*804890EC 00485EEC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*804890F0 00485EF0*/ PPC::Runtime::ASM::bl(fn_804859C8);
/*804890F4 00485EF4*/ PPC::Runtime::ASM::lis(context->r4, lbl_805CC0C8 @ Get_MemoryOffset_HighBit);
/*804890F8 00485EF8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_805CC0C8 @ Get_MemoryOffset_LowBit);
/*804890FC 00485EFC*/ PPC::Runtime::ASM::addi(context->r28, context->r5, 0x80);
/*80489100 00485F00*/ PPC::Runtime::ASM::li(context->r4, lbl_ "uuid:%" Get_MemoryOffset_SDA21);
/*80489104 00485F04*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80489108 00485F08*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8048910C 00485F0C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80489110 00485F10*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*80489114 00485F14*/ PPC::Runtime::ASM::lis(context->r3, lbl_805CC0C8 @ Get_MemoryOffset_HighBit);
/*80489118 00485F18*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x84);
/*8048911C 00485F1C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805CC0C8 @ Get_MemoryOffset_LowBit);
/*80489120 00485F20*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x100);
/*80489124 00485F24*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80489128 00485F28*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8048912C 00485F2C*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*80489130 00485F30*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80489134 00485F34*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*80489138 00485F38*/ PPC::Runtime::ASM::bl(fn_804859C8);
/*8048913C 00485F3C*/ PPC::Runtime::ASM::lis(context->r4, lbl_805CC0C8 @ Get_MemoryOffset_HighBit);
/*80489140 00485F40*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80489144 00485F44*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_805CC0C8 @ Get_MemoryOffset_LowBit);
/*80489148 00485F48*/ PPC::Runtime::ASM::addi(context->r27, context->r6, 0x180);
/*8048914C 00485F4C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xa8);
/*80489150 00485F50*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80489154 00485F54*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80489158 00485F58*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*8048915C 00485F5C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80489160 00485F60*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*80489164 00485F64*/ PPC::Runtime::ASM::bl(fn_804859C8);
/*80489168 00485F68*/ PPC::Runtime::ASM::lis(context->r4, lbl_805CC0C8 @ Get_MemoryOffset_HighBit);
/*8048916C 00485F6C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_805CC0C8 @ Get_MemoryOffset_LowBit);
/*80489170 00485F70*/ PPC::Runtime::ASM::addi(context->r26, context->r5, 0x200);
/*80489174 00485F74*/ PPC::Runtime::ASM::li(context->r4, lbl_ "uuid:%" Get_MemoryOffset_SDA21);
/*80489178 00485F78*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8048917C 00485F7C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80489180 00485F80*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80489184 00485F84*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*80489188 00485F88*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8048918C 00485F8C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*80489190 00485F90*/ PPC::Runtime::ASM::bl(fn_804859C8);
/*80489194 00485F94*/ PPC::Runtime::ASM::lis(context->r4, lbl_805CC0C8 @ Get_MemoryOffset_HighBit);
/*80489198 00485F98*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*8048919C 00485F9C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_805CC0C8 @ Get_MemoryOffset_LowBit);
/*804891A0 00485FA0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*804891A4 00485FA4*/ PPC::Runtime::ASM::addi(context->r25, context->r4, 0x280);
/*804891A8 00485FA8*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*804891AC 00485FAC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xa8);
/*804891B0 00485FB0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*804891B4 00485FB4*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*804891B8 00485FB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*804891BC 00485FBC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xb4);
/*804891C0 00485FC0*/ PPC::Runtime::ASM::bl(fn_strstr);
/*804891C4 00485FC4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*804891C8 00485FC8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*804891CC 00485FCC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*804891D0 00485FD0*/ PPC::Runtime::ASM::bl(fn_804859C8);
/*804891D4 00485FD4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*804891D8 00485FD8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xa);
/*804891DC 00485FDC*/ PPC::Runtime::ASM::li(context->r5, 0x24);
/*804891E0 00485FE0*/ PPC::Runtime::ASM::bl(memmove);
/*804891E4 00485FE4*/ PPC::Runtime::ASM::lis(context->r4, lbl_805CC0C8 @ Get_MemoryOffset_HighBit);
/*804891E8 00485FE8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805CC3C8 @ Get_MemoryOffset_HighBit);
/*804891EC 00485FEC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805CC3C8 @ Get_MemoryOffset_LowBit);
/*804891F0 00485FF0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_805CC0C8 @ Get_MemoryOffset_LowBit);
/*804891F4 00485FF4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x228, context->r3));
/*804891F8 00485FF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804891FC 00485FFC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x450, context->r3));
/*80489200 00486000*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80489204 00486004*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22c, context->r3));
/*80489208 00486008*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r3));
/*8048920C 0048600C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x70);
/*80489210 00486010*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80489214 00486014*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80489218 00486018*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8048921C 0048601C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*80489220 00486020*/ PPC::Runtime::ASM::blr();
}