//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018A188.hpp"
#include "fn_80189FD4.hpp"



void fn_801AF764(PPC::Runtime::GCContext* context)
{
/*801AF764 001AC564*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AF768 001AC568*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AF76C 001AC56C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AF770 001AC570*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AF774 001AC574*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r3));
/*801AF778 001AC578*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r3));
/*801AF77C 001AC57C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*801AF780 001AC580*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x258);
/*801AF784 001AC584*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AF788 001AC588*/ PPC::Runtime::ASM::bl(fn_8018A188);
/*801AF78C 001AC58C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AF790 001AC590*/ PPC::Runtime::ASM::bl(fn_80189FD4);
/*801AF794 001AC594*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AF798 001AC598*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AF79C 001AC59C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AF7A0 001AC5A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AF7A4 001AC5A4*/ PPC::Runtime::ASM::blr();
}