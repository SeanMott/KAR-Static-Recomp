//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80098AC0(PPC::Runtime::GCContext* context)
{
/*80098AC0 000958C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80098AC4 000958C4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553DB8 @ Get_MemoryOffset_HighBit);
/*80098AC8 000958C8*/ PPC::Runtime::ASM::stwu(context->r0, STRUCT_BYTE4_COUNT_180553DB8 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*80098ACC 000958CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80098AD0 000958D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80098AD4 000958D4*/ PPC::Runtime::ASM::blr();
}