//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025A204.hpp"
#include "fn_8025A204.hpp"
#include "fn_80254D4C.hpp"



void fn_8025A1D8(PPC::Runtime::GCContext* context)
{
/*8025A1D8 00256FD8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025A1DC 00256FDC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025A1E0 00256FE0*/ PPC::Runtime::ASM::lis(context->r4, fn_8025A204 @ Get_MemoryOffset_HighBit);
/*8025A1E4 00256FE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A1E8 00256FE8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025A204 @ Get_MemoryOffset_LowBit);
/*8025A1EC 00256FEC*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*8025A1F0 00256FF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A1F4 00256FF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025A1F8 00256FF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025A1FC 00256FFC*/ PPC::Runtime::ASM::blr();
}