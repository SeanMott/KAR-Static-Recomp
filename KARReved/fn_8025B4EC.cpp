//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025B518.hpp"
#include "fn_8025B518.hpp"
#include "fn_80254D4C.hpp"



void fn_8025B4EC(PPC::Runtime::GCContext* context)
{
/*8025B4EC 002582EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025B4F0 002582F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025B4F4 002582F4*/ PPC::Runtime::ASM::lis(context->r4, fn_8025B518 @ Get_MemoryOffset_HighBit);
/*8025B4F8 002582F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B4FC 002582FC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025B518 @ Get_MemoryOffset_LowBit);
/*8025B500 00258300*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*8025B504 00258304*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B508 00258308*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025B50C 0025830C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025B510 00258310*/ PPC::Runtime::ASM::blr();
}