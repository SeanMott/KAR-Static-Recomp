//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_804889F4(PPC::Runtime::GCContext* context)
{
/*804889F4 004857F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804889F8 004857F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*804889FC 004857FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80488A00 00485800*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80488A04 00485804*/ PPC::Runtime::ASM::lis(context->r4, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80488A08 00485808*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80488A0C 0048580C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80488A10 00485810*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r4));
/*80488A14 00485814*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80488A18 00485818*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80488A1C 0048581C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80488A20 00485820*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80488A24 00485824*/ PPC::Runtime::ASM::blr();
}