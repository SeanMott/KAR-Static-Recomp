//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"



void fn__HSD_IDForgetMemory(PPC::Runtime::GCContext* context)
{
/*8041A7C8 004175C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041A7CC 004175CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041A7D0 004175D0*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058BC94 @ Get_MemoryOffset_HighBit);
/*8041A7D4 004175D4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8041A7D8 004175D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041A7DC 004175DC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058BC94 @ Get_MemoryOffset_LowBit);
/*8041A7E0 004175E0*/ PPC::Runtime::ASM::li(context->r5, 0x194);
/*8041A7E4 004175E4*/ PPC::Runtime::ASM::bl(memset);
/*8041A7E8 004175E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041A7EC 004175EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041A7F0 004175F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041A7F4 004175F4*/ PPC::Runtime::ASM::blr();
}