//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025A4AC.hpp"
#include "fn_8025A4AC.hpp"
#include "fn_80254D4C.hpp"



void fn_8025A480(PPC::Runtime::GCContext* context)
{
/*8025A480 00257280*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025A484 00257284*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025A488 00257288*/ PPC::Runtime::ASM::lis(context->r4, fn_8025A4AC @ Get_MemoryOffset_HighBit);
/*8025A48C 0025728C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A490 00257290*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025A4AC @ Get_MemoryOffset_LowBit);
/*8025A494 00257294*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*8025A498 00257298*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A49C 0025729C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025A4A0 002572A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025A4A4 002572A4*/ PPC::Runtime::ASM::blr();
}