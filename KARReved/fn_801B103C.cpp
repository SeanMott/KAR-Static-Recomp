//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_ability_Sleep_end.hpp"
#include "fn_revertKirbyModel?.hpp"
#include "fn_80193BD8.hpp"



void fn_801B103C(PPC::Runtime::GCContext* context)
{
/*801B103C 001ADE3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B1040 001ADE40*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B1044 001ADE44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B1048 001ADE48*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801B104C 001ADE4C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B1050 001ADE50*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B1054 001ADE54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7fc, context->r3));
/*801B1058 001ADE58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r3));
/*801B105C 001ADE5C*/ PPC::Runtime::ASM::bl(fn_ability_Sleep_end);
/*801B1060 001ADE60*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B1064 001ADE64*/ PPC::Runtime::ASM::bl(fn_revertKirbyModel?);
/*801B1068 001ADE68*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B106C 001ADE6C*/ PPC::Runtime::ASM::bl(fn_80193BD8);
/*801B1070 001ADE70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B1074 001ADE74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B1078 001ADE78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B107C 001ADE7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B1080 001ADE80*/ PPC::Runtime::ASM::blr();
}