//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80258618.hpp"
#include "fn_80258618.hpp"
#include "fn_80255438.hpp"



void fn_80258768(PPC::Runtime::GCContext* context)
{
/*80258768 00255568*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025876C 0025556C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80258770 00255570*/ PPC::Runtime::ASM::lis(context->r4, fn_80258618 @ Get_MemoryOffset_HighBit);
/*80258774 00255574*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80258778 00255578*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80258618 @ Get_MemoryOffset_LowBit);
/*8025877C 0025557C*/ PPC::Runtime::ASM::bl(fn_80255438);
/*80258780 00255580*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80258784 00255584*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80258788 00255588*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025878C 0025558C*/ PPC::Runtime::ASM::blr();
}