//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_isAccelerationPossible.hpp"



void fn_801A277C(PPC::Runtime::GCContext* context)
{
/*801A277C 0019F57C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801A2780 0019F580*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A2784 0019F584*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A2788 0019F588*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A278C 0019F58C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A2790 0019F590*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801A2794 0019F594*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c4, context->r31));
/*801A2798 0019F598*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5b8, context->r31));
/*801A279C 0019F59C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801A27A0 0019F5A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A27A4 0019F5A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c8, context->r31));
/*801A27A8 0019F5A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5bc, context->r31));
/*801A27AC 0019F5AC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801A27B0 0019F5B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A27B4 0019F5B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5cc, context->r31));
/*801A27B8 0019F5B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c0, context->r31));
/*801A27BC 0019F5BC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801A27C0 0019F5C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A27C4 0019F5C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5b4, context->r31));
/*801A27C8 0019F5C8*/ PPC::Runtime::ASM::bl(fn_isAccelerationPossible);
/*801A27CC 0019F5CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A27D0 0019F5D0*/ PPC::Runtime::ASM::beq(.L_801A2804);
/*801A27D4 0019F5D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A27D8 0019F5D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c4, context->r31));
/*801A27DC 0019F5DC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801A27E0 0019F5E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5b8, context->r31));
/*801A27E4 0019F5E4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A27E8 0019F5E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c8, context->r31));
/*801A27EC 0019F5EC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801A27F0 0019F5F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5bc, context->r31));
/*801A27F4 0019F5F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A27F8 0019F5F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5cc, context->r31));
/*801A27FC 0019F5FC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801A2800 0019F600*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801A2804, 0x801A2804) //this is a jump label
/*801A2804 0019F604*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A2808 0019F608*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A280C 0019F60C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A2810 0019F610*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801A2814 0019F614*/ PPC::Runtime::ASM::blr();
}