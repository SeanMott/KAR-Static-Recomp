//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_TRKConstructEvent.hpp"
#include "fn_TRKPostEvent.hpp"



void fn_TRKProcessInput(PPC::Runtime::GCContext* context)
{
/*803BE434 003BB234*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803BE438 003BB238*/ PPC::Runtime::ASM::mflr(context->r0);
/*803BE43C 003BB23C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*803BE440 003BB240*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803BE444 003BB244*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803BE448 003BB248*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803BE44C 003BB24C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803BE450 003BB250*/ PPC::Runtime::ASM::bl(fn_TRKConstructEvent);
/*803BE454 003BB254*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056B840 @ Get_MemoryOffset_HighBit);
/*803BE458 003BB258*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803BE45C 003BB25C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_18056B840 @ Get_MemoryOffset_LowBit);
/*803BE460 003BB260*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803BE464 003BB264*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803BE468 003BB268*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803BE46C 003BB26C*/ PPC::Runtime::ASM::bl(fn_TRKPostEvent);
/*803BE470 003BB270*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803BE474 003BB274*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803BE478 003BB278*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803BE47C 003BB27C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803BE480 003BB280*/ PPC::Runtime::ASM::blr();
}