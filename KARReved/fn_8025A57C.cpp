//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025A42C.hpp"
#include "fn_8025A42C.hpp"
#include "fn_80255438.hpp"



void fn_8025A57C(PPC::Runtime::GCContext* context)
{
/*8025A57C 0025737C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025A580 00257380*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025A584 00257384*/ PPC::Runtime::ASM::lis(context->r4, fn_8025A42C @ Get_MemoryOffset_HighBit);
/*8025A588 00257388*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A58C 0025738C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025A42C @ Get_MemoryOffset_LowBit);
/*8025A590 00257390*/ PPC::Runtime::ASM::bl(fn_80255438);
/*8025A594 00257394*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A598 00257398*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025A59C 0025739C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025A5A0 002573A0*/ PPC::Runtime::ASM::blr();
}