//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8039A704(PPC::Runtime::GCContext* context)
{
/*8039A704 00397504*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8039A708 00397508*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039A70C 0039750C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A710 00397510*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A714 00397514*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8039A718 00397518*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A71C 0039751C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8039A720 00397520*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039A724 00397524*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8039A728 00397528*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A72C 0039752C*/ PPC::Runtime::ASM::bctrl();
/*8039A730 00397530*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039A734 00397534*/ PPC::Runtime::ASM::beq(.L_8039A740);
/*8039A738 00397538*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8039A73C 0039753C*/ PPC::Runtime::ASM::b(.L_8039A7A4);
RUNTIME_PPC_JUMP_LABEL(.L_8039A740, 0x8039A740) //this is a jump label
/*8039A740 00397540*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x13);
/*8039A744 00397544*/ PPC::Runtime::ASM::blt(.L_8039A768);
/*8039A748 00397548*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*8039A74C 0039754C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F6018 @ Get_MemoryOffset_HighBit);
/*8039A750 00397550*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*8039A754 00397554*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804F6018 @ Get_MemoryOffset_LowBit);
/*8039A758 00397558*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*8039A75C 0039755C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8039A760 00397560*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*8039A764 00397564*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_8039A768, 0x8039A768) //this is a jump label
/*8039A768 00397568*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8039A76C 0039756C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8039A770 00397570*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r31);
/*8039A774 00397574*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F5FCC @ Get_MemoryOffset_HighBit);
/*8039A778 00397578*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*8039A77C 0039757C*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8039A780 00397580*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8039A784 00397584*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*8039A788 00397588*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804F5FCC @ Get_MemoryOffset_LowBit);
/*8039A78C 0039758C*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*8039A790 00397590*/ PPC::Runtime::ASM::lwz(context->r0, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8039A794 00397594*/ PPC::Runtime::ASM::and(context->r3, context->r4, context->r0);
/*8039A798 00397598*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*8039A79C 0039759C*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*8039A7A0 003975A0*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
RUNTIME_PPC_JUMP_LABEL(.L_8039A7A4, 0x8039A7A4) //this is a jump label
/*8039A7A4 003975A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A7A8 003975A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A7AC 003975AC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A7B0 003975B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039A7B4 003975B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8039A7B8 003975B8*/ PPC::Runtime::ASM::blr();
}