//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSReport.hpp"



void TRK_board_display(PPC::Runtime::GCContext* context)
{
/*803C22F8 003BF0F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C22FC 003BF0FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C2300 003BF100*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_102 @ Get_MemoryOffset_HighBit);
/*803C2304 003BF104*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803C2308 003BF108*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C230C 003BF10C*/ PPC::Runtime::ASM::addi(context->r3, context->r5, MemoryOffset_102 @ Get_MemoryOffset_LowBit);
/*803C2310 003BF110*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C2314 003BF114*/ PPC::Runtime::ASM::bl(OSReport);
/*803C2318 003BF118*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C231C 003BF11C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C2320 003BF120*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C2324 003BF124*/ PPC::Runtime::ASM::blr();
}