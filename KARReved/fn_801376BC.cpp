//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8016FE14.hpp"
#include "fn_801701F8.hpp"
#include "fn_80170550.hpp"



void fn_801376BC(PPC::Runtime::GCContext* context)
{
/*801376BC 001344BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801376C0 001344C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801376C4 001344C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801376C8 001344C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801376CC 001344CC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801376D0 001344D0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801376D4 001344D4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801376D8 001344D8*/ PPC::Runtime::ASM::bl(fn_8016FE14);
/*801376DC 001344DC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801376E0 001344E0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801376E4 001344E4*/ PPC::Runtime::ASM::bl(fn_801701F8);
/*801376E8 001344E8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801376EC 001344EC*/ PPC::Runtime::ASM::bl(fn_80170550);
/*801376F0 001344F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801376F4 001344F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801376F8 001344F8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801376FC 001344FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80137700 00134500*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80137704 00134504*/ PPC::Runtime::ASM::blr();
}