//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"
#include "fn_801C8E50.hpp"



void fn_801E57A4(PPC::Runtime::GCContext* context)
{
/*801E57A4 001E25A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E57A8 001E25A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E57AC 001E25AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1DF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E57B0 001E25B0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801E57B4 001E25B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E57B8 001E25B8*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801E57BC 001E25BC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1DFC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E57C0 001E25C0*/ PPC::Runtime::ASM::li(context->r6, 0x20);
/*801E57C4 001E25C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E57C8 001E25C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E57CC 001E25CC*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801E57D0 001E25D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E57D4 001E25D4*/ PPC::Runtime::ASM::bl(fn_801C8E50);
/*801E57D8 001E25D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc37, context->r31));
/*801E57DC 001E25DC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E57E0 001E25E0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 3, 28, 28);
/*801E57E4 001E25E4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc37, context->r31));
/*801E57E8 001E25E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E57EC 001E25EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E57F0 001E25F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E57F4 001E25F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E57F8 001E25F8*/ PPC::Runtime::ASM::blr();
}