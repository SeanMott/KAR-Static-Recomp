//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80079988(PPC::Runtime::GCContext* context)
{
/*80079988 00076788*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007998C 0007678C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80079990 00076790*/ PPC::Runtime::ASM::lis(context->r3, lbl_805529D0 @ Get_MemoryOffset_HighBit);
/*80079994 00076794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80079998 00076798*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805529D0 @ Get_MemoryOffset_LowBit);
/*8007999C 0007679C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*800799A0 000767A0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD620 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800799A4 000767A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800799A8 000767A8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD620 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800799AC 000767AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800799B0 000767B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800799B4 000767B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800799B8 000767B8*/ PPC::Runtime::ASM::blr();
}