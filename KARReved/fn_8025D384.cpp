//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025D3B0.hpp"
#include "fn_8025D3B0.hpp"
#include "fn_80254D4C.hpp"



void fn_8025D384(PPC::Runtime::GCContext* context)
{
/*8025D384 0025A184*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025D388 0025A188*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025D38C 0025A18C*/ PPC::Runtime::ASM::lis(context->r4, fn_8025D3B0 @ Get_MemoryOffset_HighBit);
/*8025D390 0025A190*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D394 0025A194*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025D3B0 @ Get_MemoryOffset_LowBit);
/*8025D398 0025A198*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*8025D39C 0025A19C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D3A0 0025A1A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025D3A4 0025A1A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025D3A8 0025A1A8*/ PPC::Runtime::ASM::blr();
}