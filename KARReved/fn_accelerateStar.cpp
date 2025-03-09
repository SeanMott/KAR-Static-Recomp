//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_isAccelerationPossible.hpp"



void fn_accelerateStar(PPC::Runtime::GCContext* context)
{
/*801EC074 001E8E74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801EC078 001E8E78*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EC07C 001E8E7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801EC080 001E8E80*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801EC084 001E8E84*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EC088 001E8E88*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801EC08C 001E8E8C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801EC090 001E8E90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801EC094 001E8E94*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801EC098 001E8E98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801EC09C 001E8E9C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801EC0A0 001E8EA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801EC0A4 001E8EA4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801EC0A8 001E8EA8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EC0AC 001E8EAC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801EC0B0 001E8EB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801EC0B4 001E8EB4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801EC0B8 001E8EB8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801EC0BC 001E8EBC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801EC0C0 001E8EC0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*801EC0C4 001E8EC4*/ PPC::Runtime::ASM::bl(fn_isAccelerationPossible);
/*801EC0C8 001E8EC8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801EC0CC 001E8ECC*/ PPC::Runtime::ASM::beq(.L_801EC100);
/*801EC0D0 001E8ED0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801EC0D4 001E8ED4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801EC0D8 001E8ED8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801EC0DC 001E8EDC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801EC0E0 001E8EE0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EC0E4 001E8EE4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801EC0E8 001E8EE8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801EC0EC 001E8EEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801EC0F0 001E8EF0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801EC0F4 001E8EF4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801EC0F8 001E8EF8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801EC0FC 001E8EFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801EC100, 0x801EC100) //this is a jump label
/*801EC100 001E8F00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801EC104 001E8F04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801EC108 001E8F08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EC10C 001E8F0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801EC110 001E8F10*/ PPC::Runtime::ASM::blr();
}