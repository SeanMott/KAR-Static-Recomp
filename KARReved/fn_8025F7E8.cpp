//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025F698.hpp"
#include "fn_8025F698.hpp"
#include "fn_80255438.hpp"



void fn_8025F7E8(PPC::Runtime::GCContext* context)
{
/*8025F7E8 0025C5E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025F7EC 0025C5EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025F7F0 0025C5F0*/ PPC::Runtime::ASM::lis(context->r4, fn_8025F698 @ Get_MemoryOffset_HighBit);
/*8025F7F4 0025C5F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F7F8 0025C5F8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025F698 @ Get_MemoryOffset_LowBit);
/*8025F7FC 0025C5FC*/ PPC::Runtime::ASM::bl(fn_80255438);
/*8025F800 0025C600*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F804 0025C604*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025F808 0025C608*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025F80C 0025C60C*/ PPC::Runtime::ASM::blr();
}