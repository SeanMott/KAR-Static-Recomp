//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80131928.hpp"
#include "fn_80182CAC.hpp"



void fn_80138E00(PPC::Runtime::GCContext* context)
{
/*80138E00 00135C00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80138E04 00135C04*/ PPC::Runtime::ASM::mflr(context->r0);
/*80138E08 00135C08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80138E0C 00135C0C*/ PPC::Runtime::ASM::bl(fn_80131928);
/*80138E10 00135C10*/ PPC::Runtime::ASM::bl(fn_80182CAC);
/*80138E14 00135C14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80138E18 00135C18*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80138E1C 00135C1C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80138E20 00135C20*/ PPC::Runtime::ASM::blr();
}