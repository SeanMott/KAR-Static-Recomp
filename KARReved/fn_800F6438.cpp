//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E5798.hpp"



void fn_800F6438(PPC::Runtime::GCContext* context)
{
/*800F6438 000F3238*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F643C 000F323C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F6440 000F3240*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*800F6444 000F3244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F6448 000F3248*/ PPC::Runtime::ASM::bl(fn_800E5798);
/*800F644C 000F324C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F6450 000F3250*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F6454 000F3254*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F6458 000F3258*/ PPC::Runtime::ASM::blr();
}