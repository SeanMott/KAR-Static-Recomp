//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_801A889C.hpp"
#include "fn_801AAE40.hpp"



void fn_AS_RaceStartGo(PPC::Runtime::GCContext* context)
{
/*801AACB8 001A7AB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AACBC 001A7ABC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AACC0 001A7AC0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1398 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801AACC4 001A7AC4*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*801AACC8 001A7AC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AACCC 001A7ACC*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801AACD0 001A7AD0*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801AACD4 001A7AD4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E139C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801AACD8 001A7AD8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AACDC 001A7ADC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AACE0 001A7AE0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801AACE4 001A7AE4*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801AACE8 001A7AE8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801AACEC 001A7AEC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AACF0 001A7AF0*/ PPC::Runtime::ASM::bl(fn_801A889C);
/*801AACF4 001A7AF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AACF8 001A7AF8*/ PPC::Runtime::ASM::bl(fn_801AAE40);
/*801AACFC 001A7AFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AAD00 001A7B00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AAD04 001A7B04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AAD08 001A7B08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AAD0C 001A7B0C*/ PPC::Runtime::ASM::blr();
}