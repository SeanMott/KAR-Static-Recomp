//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025EF20.hpp"
#include "fn_8025EF20.hpp"
#include "fn_80254D4C.hpp"



void fn_8025EEF4(PPC::Runtime::GCContext* context)
{
/*8025EEF4 0025BCF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025EEF8 0025BCF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025EEFC 0025BCFC*/ PPC::Runtime::ASM::lis(context->r4, fn_8025EF20 @ Get_MemoryOffset_HighBit);
/*8025EF00 0025BD00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025EF04 0025BD04*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025EF20 @ Get_MemoryOffset_LowBit);
/*8025EF08 0025BD08*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*8025EF0C 0025BD0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025EF10 0025BD10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025EF14 0025BD14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025EF18 0025BD18*/ PPC::Runtime::ASM::blr();
}