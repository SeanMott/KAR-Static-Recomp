//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E4CC0.hpp"



void fn_801CA9A8(PPC::Runtime::GCContext* context)
{
/*801CA9A8 001C77A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801CA9AC 001C77AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CA9B0 001C77B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CA9B4 001C77B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r3));
/* 801CA9B8 001C77B8  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801CA9BC 001C77BC*/ PPC::Runtime::ASM::beq(.L_801CA9C8);
/*801CA9C0 001C77C0*/ PPC::Runtime::ASM::bl(fn_801E4CC0);
/*801CA9C4 001C77C4*/ PPC::Runtime::ASM::b(.L_801CA9F8);
RUNTIME_PPC_JUMP_LABEL(.L_801CA9C8, 0x801CA9C8) //this is a jump label
/*801CA9C8 001C77C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r3));
/*801CA9CC 001C77CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801CA9D0 001C77D0*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801CA9D4 001C77D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r3));
/*801CA9D8 001C77D8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r3));
/*801CA9DC 001C77DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801CA9E0 001C77E0*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801CA9E4 001C77E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r3));
/*801CA9E8 001C77E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r3));
/*801CA9EC 001C77EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*801CA9F0 001C77F0*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801CA9F4 001C77F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801CA9F8, 0x801CA9F8) //this is a jump label
/*801CA9F8 001C77F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CA9FC 001C77FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CAA00 001C7800*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801CAA04 001C7804*/ PPC::Runtime::ASM::blr();
}