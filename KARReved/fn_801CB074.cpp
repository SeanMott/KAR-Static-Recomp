//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018CBE8.hpp"
#include "fn_801D5E34.hpp"



void fn_801CB074(PPC::Runtime::GCContext* context)
{
/*801CB074 001C7E74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801CB078 001C7E78*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CB07C 001C7E7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CB080 001C7E80*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CB084 001C7E84*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CB088 001C7E88*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801CB08C 001C7E8C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
/*801CB090 001C7E90*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*801CB094 001C7E94*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
/*801CB098 001C7E98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r31));
/*801CB09C 001C7E9C*/ PPC::Runtime::ASM::bl(fn_8018CBE8);
/*801CB0A0 001C7EA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CB0A4 001C7EA4*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*801CB0A8 001C7EA8*/ PPC::Runtime::ASM::bl(fn_801D5E34);
/*801CB0AC 001C7EAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CB0B0 001C7EB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CB0B4 001C7EB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CB0B8 001C7EB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801CB0BC 001C7EBC*/ PPC::Runtime::ASM::blr();
}