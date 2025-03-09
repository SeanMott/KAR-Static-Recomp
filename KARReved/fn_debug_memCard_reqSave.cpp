//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007B624.hpp"
#include "fn_80078D7C.hpp"
#include "fn_gmGet_Dist.hpp"



void fn_debug_memCard_reqSave(PPC::Runtime::GCContext* context)
{
/*80078990 00075790*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*80078994 00075794*/ PPC::Runtime::ASM::mflr(context->r0);
/*80078998 00075798*/ PPC::Runtime::ASM::lis(context->r3, AllZeros_46 @ Get_MemoryOffset_HighBit);
/*8007899C 0007579C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*800789A0 000757A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*800789A4 000757A4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, AllZeros_46 @ Get_MemoryOffset_LowBit);
/*800789A8 000757A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*800789AC 000757AC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*800789B0 000757B0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*800789B4 000757B4*/ PPC::Runtime::ASM::bl(fn_8007B624);
/*800789B8 000757B8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800789BC 000757BC*/ PPC::Runtime::ASM::beq(.L_800789C8);
/*800789C0 000757C0*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*800789C4 000757C4*/ PPC::Runtime::ASM::b(.L_80078BCC);
RUNTIME_PPC_JUMP_LABEL(.L_800789C8, 0x800789C8) //this is a jump label
/*800789C8 000757C8*/ PPC::Runtime::ASM::bl(fn_80078D7C);
/*800789CC 000757CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800789D0 000757D0*/ PPC::Runtime::ASM::beq(.L_800789DC);
/*800789D4 000757D4*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*800789D8 000757D8*/ PPC::Runtime::ASM::b(.L_80078BCC);
RUNTIME_PPC_JUMP_LABEL(.L_800789DC, 0x800789DC) //this is a jump label
/*800789DC 000757DC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*800789E0 000757E0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800789E4 000757E4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit);
/*800789E8 000757E8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x98);
/*800789EC 000757EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800789F0 000757F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800789F4 000757F4*/ PPC::Runtime::ASM::bl(fn_8045A10C);
/*800789F8 000757F8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800789FC 000757FC*/ PPC::Runtime::ASM::bl(OSGetTime);
/*80078A00 00075800*/ PPC::Runtime::ASM::lis(context->r5, 0x8000);
/*80078A04 00075804*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80078A08 00075808*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r5));
/*80078A0C 0007580C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80078A10 00075810*/ PPC::Runtime::ASM::srwi(context->r29, context->r0, 2);
/*80078A14 00075814*/ PPC::Runtime::ASM::mr(context->r6, context->r29);
/*80078A18 00075818*/ PPC::Runtime::ASM::bl(fn___div2i);
/*80078A1C 0007581C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80078A20 00075820*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x48);
/*80078A24 00075824*/ PPC::Runtime::ASM::mullw(context->r6, context->r0, context->r29);
/*80078A28 00075828*/ PPC::Runtime::ASM::mulhwu(context->r3, context->r4, context->r29);
/*80078A2C 0007582C*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r28);
/*80078A30 00075830*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r6);
/*80078A34 00075834*/ PPC::Runtime::ASM::mullw(context->r4, context->r4, context->r29);
/*80078A38 00075838*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80078A3C 0007583C*/ PPC::Runtime::ASM::bl(fn_OSTicksToCalendarTime);
/*80078A40 00075840*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80078A44 00075844*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80078A48 00075848*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80078A4C 0007584C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80078A50, 0x80078A50) //this is a jump label
/*80078A50 00075850*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80078A54 00075854*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*80078A58 00075858*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80078A5C 0007585C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r4));
/*80078A60 00075860*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80078A64 00075864*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r4));
/*80078A68 00075868*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r4));
/*80078A6C 0007586C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r4));
/*80078A70 00075870*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80078A74 00075874*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r4));
/*80078A78 00075878*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r4));
/*80078A7C 0007587C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r4));
/*80078A80 00075880*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80078A84 00075884*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*80078A88 00075888*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r4));
/*80078A8C 0007588C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r4));
/*80078A90 00075890*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80078A94 00075894*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r4));
/*80078A98 00075898*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r4));
/*80078A9C 0007589C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r4));
/*80078AA0 000758A0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80078AA4 000758A4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r4));
/*80078AA8 000758A8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r4));
/*80078AAC 000758AC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17, context->r4));
/*80078AB0 000758B0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*80078AB4 000758B4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r4));
/*80078AB8 000758B8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r4));
/*80078ABC 000758BC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r4));
/*80078AC0 000758C0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*80078AC4 000758C4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r4));
/*80078AC8 000758C8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r4));
/*80078ACC 000758CC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r4));
/*80078AD0 000758D0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x20);
/*80078AD4 000758D4*/ PPC::Runtime::ASM::bdnz(.L_80078A50);
/*80078AD8 000758D8*/ PPC::Runtime::ASM::bl(fn_gmGet_Dist);
/*80078ADC 000758DC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*80078AE0 000758E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80078AE4 000758E4*/ PPC::Runtime::ASM::beq(.L_80078B28);
/*80078AE8 000758E8*/ PPC::Runtime::ASM::bge(.L_80078B58);
/*80078AEC 000758EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80078AF0 000758F0*/ PPC::Runtime::ASM::bge(.L_80078AF8);
/*80078AF4 000758F4*/ PPC::Runtime::ASM::b(.L_80078B58);
RUNTIME_PPC_JUMP_LABEL(.L_80078AF8, 0x80078AF8) //this is a jump label
/*80078AF8 000758F8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*80078AFC 000758FC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80078B00 00075900*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit);
/*80078B04 00075904*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80078B08 00075908*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*80078B0C 0007590C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80078B10 00075910*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80078B14 00075914*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x100);
/*80078B18 00075918*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*80078B1C 0007591C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80078B20 00075920*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*80078B24 00075924*/ PPC::Runtime::ASM::b(.L_80078B84);
RUNTIME_PPC_JUMP_LABEL(.L_80078B28, 0x80078B28) //this is a jump label
/*80078B28 00075928*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*80078B2C 0007592C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80078B30 00075930*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit);
/*80078B34 00075934*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80078B38 00075938*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*80078B3C 0007593C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80078B40 00075940*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80078B44 00075944*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x114);
/*80078B48 00075948*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80078B4C 0007594C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80078B50 00075950*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*80078B54 00075954*/ PPC::Runtime::ASM::b(.L_80078B84);
RUNTIME_PPC_JUMP_LABEL(.L_80078B58, 0x80078B58) //this is a jump label
/*80078B58 00075958*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*80078B5C 0007595C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80078B60 00075960*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit);
/*80078B64 00075964*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80078B68 00075968*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*80078B6C 0007596C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80078B70 00075970*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80078B74 00075974*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x100);
/*80078B78 00075978*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*80078B7C 0007597C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80078B80 00075980*/ PPC::Runtime::ASM::bl(fn_sprintf);
RUNTIME_PPC_JUMP_LABEL(.L_80078B84, 0x80078B84) //this is a jump label
/*80078B84 00075984*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x98);
/*80078B88 00075988*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80078B8C 0007598C*/ PPC::Runtime::ASM::bl(fn_strcmp);
/*80078B90 00075990*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80078B94 00075994*/ PPC::Runtime::ASM::beq(.L_80078BAC);
/*80078B98 00075998*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x98);
/*80078B9C 0007599C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80078BA0 000759A0*/ PPC::Runtime::ASM::bl(fn_strcpy);
/*80078BA4 000759A4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80078BA8 000759A8*/ PPC::Runtime::ASM::b(.L_80078BB0);
RUNTIME_PPC_JUMP_LABEL(.L_80078BAC, 0x80078BAC) //this is a jump label
/*80078BAC 000759AC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80078BB0, 0x80078BB0) //this is a jump label
/*80078BB0 000759B0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80078BB4 000759B4*/ PPC::Runtime::ASM::beq(.L_80078BC8);
/*80078BB8 000759B8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x98);
/*80078BBC 000759BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80078BC0 000759C0*/ PPC::Runtime::ASM::bl(fn_8045A364);
/*80078BC4 000759C4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80078BC8, 0x80078BC8) //this is a jump label
/*80078BC8 000759C8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_80078BCC, 0x80078BCC) //this is a jump label
/*80078BCC 000759CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*80078BD0 000759D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80078BD4 000759D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80078BD8 000759D8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80078BDC 000759DC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80078BE0 000759E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80078BE4 000759E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*80078BE8 000759E8*/ PPC::Runtime::ASM::blr();
}