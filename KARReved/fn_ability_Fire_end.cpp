//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80198D3C.hpp"



void fn_ability_Fire_end(PPC::Runtime::GCContext* context)
{
/*801A6968 001A3768*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A696C 001A376C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A6970 001A3770*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A6974 001A3774*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A6978 001A3778*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A697C 001A377C*/ PPC::Runtime::ASM::bl(fn_80198D3C);
/*801A6980 001A3780*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A6984 001A3784*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A6988 001A3788*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A698C 001A378C*/ PPC::Runtime::ASM::blr();
}