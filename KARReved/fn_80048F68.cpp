//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80048F68(PPC::Runtime::GCContext* context)
{
/*80048F68 00045D68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80048F6C 00045D6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80048F70 00045D70*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_159 @ Get_MemoryOffset_HighBit);
/*80048F74 00045D74*/ PPC::Runtime::ASM::li(context->r4, 0x14f);
/*80048F78 00045D78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048F7C 00045D7C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_159 @ Get_MemoryOffset_LowBit);
/*80048F80 00045D80*/ PPC::Runtime::ASM::li(context->r5, lbl_805D51C0 @ Get_MemoryOffset_SDA21);
/*80048F84 00045D84*/ PPC::Runtime::ASM::bl(fn___assert);
/*80048F88 00045D88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048F8C 00045D8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80048F90 00045D90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80048F94 00045D94*/ PPC::Runtime::ASM::blr();
}