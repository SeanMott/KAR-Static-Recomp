//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D5FD0.hpp"
#include "fn_800D60D8.hpp"
#include "fn_800D6188.hpp"
#include "fn_800EF618.hpp"



void fn_800D5ED4(PPC::Runtime::GCContext* context)
{
/*800D5ED4 000D2CD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D5ED8 000D2CD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D5EDC 000D2CDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D5EE0 000D2CE0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D5EE4 000D2CE4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800D5EE8 000D2CE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D5EEC 000D2CEC*/ PPC::Runtime::ASM::bl(fn_800D5FD0);
/*800D5EF0 000D2CF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800D5EF4 000D2CF4*/ PPC::Runtime::ASM::bl(fn_800D60D8);
/*800D5EF8 000D2CF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800D5EFC 000D2CFC*/ PPC::Runtime::ASM::bl(fn_800D6188);
/*800D5F00 000D2D00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D5F04 000D2D04*/ PPC::Runtime::ASM::bl(fn_800EF618);
/*800D5F08 000D2D08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D5F0C 000D2D0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D5F10 000D2D10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D5F14 000D2D14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D5F18 000D2D18*/ PPC::Runtime::ASM::blr();
}