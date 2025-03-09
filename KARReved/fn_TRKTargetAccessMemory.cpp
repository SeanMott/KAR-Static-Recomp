//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_TRKTargetTranslate.hpp"
#include "fn_TRKValidMemory32.hpp"
#include "fn_803C00C8.hpp"
#include "fn_TRK_ppc_memcpy.hpp"
#include "fn_TRK_ppc_memcpy.hpp"
#include "fn_TRK_flush_cache.hpp"
#include "fn_TRK_flush_cache.hpp"



void fn_TRKTargetAccessMemory(PPC::Runtime::GCContext* context)
{
/*803C1718 003BE518*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*803C171C 003BE51C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C1720 003BE520*/ PPC::Runtime::ASM::lis(context->r6, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_HighBit);
/*803C1724 003BE524*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803C1728 003BE528*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C172C 003BE52C*/ PPC::Runtime::ASM::stmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C1730 003BE530*/ PPC::Runtime::ASM::addi(context->r31, context->r6, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_LowBit);
/*803C1734 003BE534*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*803C1738 003BE538*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*803C173C 003BE53C*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*803C1740 003BE540*/ PPC::Runtime::ASM::mr(context->r29, context->r7);
/*803C1744 003BE544*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803C1748 003BE548*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803C174C 003BE54C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803C1750 003BE550*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803C1754 003BE554*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803C1758 003BE558*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C175C 003BE55C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C1760 003BE560*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C1764 003BE564*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C1768 003BE568*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*803C176C 003BE56C*/ PPC::Runtime::ASM::bl(fn_TRKTargetTranslate);
/*803C1770 003BE570*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r29);
/*803C1774 003BE574*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803C1778 003BE578*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*803C177C 003BE57C*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 5);
/*803C1780 003BE580*/ PPC::Runtime::ASM::bl(fn_TRKValidMemory32);
/* 803C1784 003BE584  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*803C1788 003BE588*/ PPC::Runtime::ASM::beq(.L_803C1798);
/*803C178C 003BE58C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C1790 003BE590*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803C1794 003BE594*/ PPC::Runtime::ASM::b(.L_803C180C);
RUNTIME_PPC_JUMP_LABEL(.L_803C1798, 0x803C1798) //this is a jump label
/*803C1798 003BE598*/ PPC::Runtime::ASM::bl(fn_803C00C8);
/*803C179C 003BE59C*/ PPC::Runtime::ASM::lis(context->r4, gTRKCPUState @ Get_MemoryOffset_HighBit);
/*803C17A0 003BE5A0*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*803C17A4 003BE5A4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, gTRKCPUState @ Get_MemoryOffset_LowBit);
/*803C17A8 003BE5A8*/ PPC::Runtime::ASM::mr(context->r8, context->r3);
/*803C17AC 003BE5AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r4));
/*803C17B0 003BE5B0*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 27, 27);
/*803C17B4 003BE5B4*/ PPC::Runtime::ASM::or(context->r7, context->r8, context->r0);
/*803C17B8 003BE5B8*/ PPC::Runtime::ASM::beq(.L_803C17D4);
/*803C17BC 003BE5BC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803C17C0 003BE5C0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*803C17C4 003BE5C4*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*803C17C8 003BE5C8*/ PPC::Runtime::ASM::mr(context->r6, context->r8);
/*803C17CC 003BE5CC*/ PPC::Runtime::ASM::bl(fn_TRK_ppc_memcpy);
/*803C17D0 003BE5D0*/ PPC::Runtime::ASM::b(.L_803C180C);
RUNTIME_PPC_JUMP_LABEL(.L_803C17D4, 0x803C17D4) //this is a jump label
/*803C17D4 003BE5D4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803C17D8 003BE5D8*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*803C17DC 003BE5DC*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803C17E0 003BE5E0*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*803C17E4 003BE5E4*/ PPC::Runtime::ASM::mr(context->r7, context->r8);
/*803C17E8 003BE5E8*/ PPC::Runtime::ASM::bl(fn_TRK_ppc_memcpy);
/*803C17EC 003BE5EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803C17F0 003BE5F0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*803C17F4 003BE5F4*/ PPC::Runtime::ASM::bl(fn_TRK_flush_cache);
/*803C17F8 003BE5F8*/ PPC::Runtime::ASM::cmplw(context->r27, context->r25);
/*803C17FC 003BE5FC*/ PPC::Runtime::ASM::beq(.L_803C180C);
/*803C1800 003BE600*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803C1804 003BE604*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803C1808 003BE608*/ PPC::Runtime::ASM::bl(fn_TRK_flush_cache);
RUNTIME_PPC_JUMP_LABEL(.L_803C180C, 0x803C180C) //this is a jump label
/*803C180C 003BE60C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*803C1810 003BE610*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803C1814 003BE614*/ PPC::Runtime::ASM::beq(.L_803C1824);
/*803C1818 003BE618*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C181C 003BE61C*/ PPC::Runtime::ASM::li(context->r30, 0x702);
/*803C1820 003BE620*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_803C1824, 0x803C1824) //this is a jump label
/*803C1824 003BE624*/ PPC::Runtime::ASM::lis(context->r3, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_HighBit);
/*803C1828 003BE628*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C182C 003BE62C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_LowBit);
/*803C1830 003BE630*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C1834 003BE634*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C1838 003BE638*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803C183C 003BE63C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C1840 003BE640*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803C1844 003BE644*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803C1848 003BE648*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803C184C 003BE64C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*803C1850 003BE650*/ PPC::Runtime::ASM::lmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C1854 003BE654*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803C1858 003BE658*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C185C 003BE65C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*803C1860 003BE660*/ PPC::Runtime::ASM::blr();
}