//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80048888(PPC::Runtime::GCContext* context)
{
/*80048888 00045688*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004888C 0004568C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80048890 00045690*/ PPC::Runtime::ASM::lis(context->r3, String_ "gmdialoguesub." Get_MemoryOffset_HighBit);
/*80048894 00045694*/ PPC::Runtime::ASM::li(context->r4, 0x224);
/*80048898 00045698*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004889C 0004569C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "gmdialoguesub." Get_MemoryOffset_LowBit);
/*800488A0 000456A0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D51B8 @ Get_MemoryOffset_SDA21);
/*800488A4 000456A4*/ PPC::Runtime::ASM::bl(fn___assert);
/*800488A8 000456A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800488AC 000456AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800488B0 000456B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800488B4 000456B4*/ PPC::Runtime::ASM::blr();
}