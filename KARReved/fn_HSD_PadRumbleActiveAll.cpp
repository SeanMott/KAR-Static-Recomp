//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_HSD_PadRumbleActiveAll(PPC::Runtime::GCContext* context)
{
/*80414820 00411620*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80414824 00411624*/ PPC::Runtime::ASM::mflr(context->r0);
/*80414828 00411628*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*8041482C 0041162C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80414830 00411630*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80414834 00411634*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80414838 00411638*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8041483C 0041163C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*80414840 00411640*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80414844, 0x80414844) //this is a jump label
/*80414844 00411644*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r31, 24);
/*80414848 00411648*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r30));
/*8041484C 0041164C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80414850 00411650*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*80414854 00411654*/ PPC::Runtime::ASM::add(context->r29, context->r30, context->r0);
/*80414858 00411658*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r29));
/*8041485C 0041165C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80414860 00411660*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80414864 00411664*/ PPC::Runtime::ASM::bne(.L_804148A8);
/*80414868 00411668*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8041486C 0041166C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r29));
/*80414870 00411670*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058BB88 @ Get_MemoryOffset_HighBit);
/*80414874 00411674*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18058BB88 @ Get_MemoryOffset_LowBit);
/*80414878 00411678*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8041487C 0041167C*/ PPC::Runtime::ASM::extsb(context->r5, context->r5);
/*80414880 00411680*/ PPC::Runtime::ASM::mulli(context->r5, context->r5, 0xc);
/*80414884 00411684*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r5);
/*80414888 00411688*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8041488C 0041168C*/ PPC::Runtime::ASM::b(.L_8041489C);
RUNTIME_PPC_JUMP_LABEL(.L_80414890, 0x80414890) //this is a jump label
/*80414890 00411690*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80414894 00411694*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80414898 00411698*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_8041489C, 0x8041489C) //this is a jump label
/*8041489C 0041169C*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*804148A0 004116A0*/ PPC::Runtime::ASM::bne(.L_80414890);
/*804148A4 004116A4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_804148A8, 0x804148A8) //this is a jump label
/*804148A8 004116A8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*804148AC 004116AC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*804148B0 004116B0*/ PPC::Runtime::ASM::blt(.L_80414844);
/*804148B4 004116B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804148B8 004116B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804148BC 004116BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804148C0 004116C0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804148C4 004116C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804148C8 004116C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804148CC 004116CC*/ PPC::Runtime::ASM::blr();
}