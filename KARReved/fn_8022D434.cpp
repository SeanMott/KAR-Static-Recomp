//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801926E4.hpp"



void fn_8022D434(PPC::Runtime::GCContext* context)
{
/*8022D434 0022A234*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022D438 0022A238*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022D43C 0022A23C*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0x90c);
/*8022D440 0022A240*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022D444 0022A244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022D448 0022A248*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022D44C 0022A24C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8022D450 0022A250*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8022D454 0022A254*/ PPC::Runtime::ASM::bl(fn_801926E4);
/*8022D458 0022A258*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022D45C 0022A25C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022D460 0022A260*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022D464 0022A264*/ PPC::Runtime::ASM::blr();
}