//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8010F720.hpp"



void fn_800D59B8(PPC::Runtime::GCContext* context)
{
/*800D59B8 000D27B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D59BC 000D27BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D59C0 000D27C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D59C4 000D27C4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D59C8 000D27C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800D59CC 000D27CC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x9);
/*800D59D0 000D27D0*/ PPC::Runtime::ASM::bne(.L_800D59DC);
/*800D59D4 000D27D4*/ PPC::Runtime::ASM::bl(fn_8010F720);
/*800D59D8 000D27D8*/ PPC::Runtime::ASM::b(.L_800D59E0);
RUNTIME_PPC_JUMP_LABEL(.L_800D59DC, 0x800D59DC) //this is a jump label
/*800D59DC 000D27DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800D59E0, 0x800D59E0) //this is a jump label
/*800D59E0 000D27E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D59E4 000D27E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D59E8 000D27E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D59EC 000D27EC*/ PPC::Runtime::ASM::blr();
}