//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void ReserveEXI2Port(PPC::Runtime::GCContext* context)
{
/*803C2358 003BF158*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C235C 003BF15C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C2360 003BF160*/ PPC::Runtime::ASM::lis(context->r3, gDBCommTable @ Get_MemoryOffset_HighBit);
/*803C2364 003BF164*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C2368 003BF168*/ PPC::Runtime::ASM::addi(context->r3, context->r3, gDBCommTable @ Get_MemoryOffset_LowBit);
/*803C236C 003BF16C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*803C2370 003BF170*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803C2374 003BF174*/ PPC::Runtime::ASM::bctrl();
/*803C2378 003BF178*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C237C 003BF17C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C2380 003BF180*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C2384 003BF184*/ PPC::Runtime::ASM::blr();
}