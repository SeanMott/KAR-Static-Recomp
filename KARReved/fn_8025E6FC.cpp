//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025E728.hpp"
#include "fn_8025E728.hpp"
#include "fn_80254D4C.hpp"



void fn_8025E6FC(PPC::Runtime::GCContext* context)
{
/*8025E6FC 0025B4FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025E700 0025B500*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025E704 0025B504*/ PPC::Runtime::ASM::lis(context->r4, fn_8025E728 @ Get_MemoryOffset_HighBit);
/*8025E708 0025B508*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025E70C 0025B50C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025E728 @ Get_MemoryOffset_LowBit);
/*8025E710 0025B510*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*8025E714 0025B514*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025E718 0025B518*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025E71C 0025B51C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025E720 0025B520*/ PPC::Runtime::ASM::blr();
}