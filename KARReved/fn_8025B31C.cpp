//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025B1CC.hpp"
#include "fn_8025B1CC.hpp"
#include "fn_80255438.hpp"



void fn_8025B31C(PPC::Runtime::GCContext* context)
{
/*8025B31C 0025811C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025B320 00258120*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025B324 00258124*/ PPC::Runtime::ASM::lis(context->r4, fn_8025B1CC @ Get_MemoryOffset_HighBit);
/*8025B328 00258128*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B32C 0025812C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025B1CC @ Get_MemoryOffset_LowBit);
/*8025B330 00258130*/ PPC::Runtime::ASM::bl(fn_80255438);
/*8025B334 00258134*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B338 00258138*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025B33C 0025813C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025B340 00258140*/ PPC::Runtime::ASM::blr();
}