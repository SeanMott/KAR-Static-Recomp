//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B0FB4.hpp"



void fn_801B1194(PPC::Runtime::GCContext* context)
{
/*801B1194 001ADF94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B1198 001ADF98*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B119C 001ADF9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B11A0 001ADFA0*/ PPC::Runtime::ASM::bl(fn_801B0FB4);
/*801B11A4 001ADFA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B11A8 001ADFA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B11AC 001ADFAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B11B0 001ADFB0*/ PPC::Runtime::ASM::blr();
}