//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FB2BC.hpp"



void fn_800D2C5C(PPC::Runtime::GCContext* context)
{
/*800D2C5C 000CFA5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D2C60 000CFA60*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D2C64 000CFA64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D2C68 000CFA68*/ PPC::Runtime::ASM::bl(fn_800FB2BC);
/*800D2C6C 000CFA6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D2C70 000CFA70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D2C74 000CFA74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D2C78 000CFA78*/ PPC::Runtime::ASM::blr();
}