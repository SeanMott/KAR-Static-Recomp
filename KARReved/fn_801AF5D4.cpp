//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AED50.hpp"
#include "fn_801AF39C.hpp"



void fn_801AF5D4(PPC::Runtime::GCContext* context)
{
/*801AF5D4 001AC3D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AF5D8 001AC3D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AF5DC 001AC3DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AF5E0 001AC3E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AF5E4 001AC3E4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801AF5E8 001AC3E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801AF5EC 001AC3EC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801AF5F0 001AC3F0*/ PPC::Runtime::ASM::bl(fn_801AED50);
/*801AF5F4 001AC3F4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801AF5F8 001AC3F8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801AF5FC 001AC3FC*/ PPC::Runtime::ASM::bl(fn_801AF39C);
/*801AF600 001AC400*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AF604 001AC404*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AF608 001AC408*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801AF60C 001AC40C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AF610 001AC410*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AF614 001AC414*/ PPC::Runtime::ASM::blr();
}