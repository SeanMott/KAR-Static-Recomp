//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80077320.hpp"
#include "fn_80077320.hpp"



void fn_80077980(PPC::Runtime::GCContext* context)
{
/*80077980 00074780*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80077984 00074784*/ PPC::Runtime::ASM::mflr(context->r0);
/*80077988 00074788*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007798C 0007478C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80077990 00074790*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80077994 00074794*/ PPC::Runtime::ASM::bl(fn_8045E978);
/*80077998 00074798*/ PPC::Runtime::ASM::lwz(context->r3, lbl_805D53C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007799C 0007479C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1f);
/*800779A0 000747A0*/ PPC::Runtime::ASM::clrrwi(context->r30, context->r0, 5);
/*800779A4 000747A4*/ PPC::Runtime::ASM::bl(OSEnableInterrupts);
/*800779A8 000747A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800779AC 000747AC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800779B0 000747B0*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*800779B4 000747B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800779B8 000747B8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD608 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800779BC 000747BC*/ PPC::Runtime::ASM::bne(.L_800779D8);
/*800779C0 000747C0*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_550 @ Get_MemoryOffset_HighBit);
/*800779C4 000747C4*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_551 @ Get_MemoryOffset_HighBit);
/*800779C8 000747C8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_550 @ Get_MemoryOffset_LowBit);
/*800779CC 000747CC*/ PPC::Runtime::ASM::li(context->r4, 0x1b7);
/*800779D0 000747D0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_551 @ Get_MemoryOffset_LowBit);
/*800779D4 000747D4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800779D8, 0x800779D8) //this is a jump label
/*800779D8 000747D8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD608 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800779DC 000747DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552360 @ Get_MemoryOffset_HighBit);
/*800779E0 000747E0*/ PPC::Runtime::ASM::lis(context->r4, fn_80077320 @ Get_MemoryOffset_HighBit);
/*800779E4 000747E4*/ PPC::Runtime::ASM::mr(context->r7, context->r30);
/*800779E8 000747E8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80552360 @ Get_MemoryOffset_LowBit);
/*800779EC 000747EC*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r30);
/*800779F0 000747F0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80077320 @ Get_MemoryOffset_LowBit);
/*800779F4 000747F4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800779F8 000747F8*/ PPC::Runtime::ASM::li(context->r8, 0x8);
/*800779FC 000747FC*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80077A00 00074800*/ PPC::Runtime::ASM::bl(fn_OSCreateThread);
/*80077A04 00074804*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80077A08 00074808*/ PPC::Runtime::ASM::bne(.L_80077A20);
/*80077A0C 0007480C*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_550 @ Get_MemoryOffset_HighBit);
/*80077A10 00074810*/ PPC::Runtime::ASM::li(context->r4, 0x1c1);
/*80077A14 00074814*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_550 @ Get_MemoryOffset_LowBit);
/*80077A18 00074818*/ PPC::Runtime::ASM::li(context->r5, String_ "re" Get_MemoryOffset_SDA21);
/*80077A1C 0007481C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80077A20, 0x80077A20) //this is a jump label
/*80077A20 00074820*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80077A24 00074824*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552360 @ Get_MemoryOffset_HighBit);
/*80077A28 00074828*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD604 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80077A2C 0007482C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80552360 @ Get_MemoryOffset_LowBit);
/*80077A30 00074830*/ PPC::Runtime::ASM::bl(fn_OSResumeThread);
/*80077A34 00074834*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80077A38 00074838*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80077A3C 0007483C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80077A40 00074840*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD5E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80077A44 00074844*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80077A48 00074848*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80077A4C 0007484C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80077A50 00074850*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80077A54 00074854*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80077A58 00074858*/ PPC::Runtime::ASM::blr();
}