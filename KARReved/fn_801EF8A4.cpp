//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"
#include "fn_801E3B80.hpp"



void fn_801EF8A4(PPC::Runtime::GCContext* context)
{
/*801EF8A4 001EC6A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EF8A8 001EC6A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EF8AC 001EC6AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1F38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EF8B0 001EC6B0*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*801EF8B4 001EC6B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF8B8 001EC6B8*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801EF8BC 001EC6BC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1F3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EF8C0 001EC6C0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801EF8C4 001EC6C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EF8C8 001EC6C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EF8CC 001EC6CC*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801EF8D0 001EC6D0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r31));
/*801EF8D4 001EC6D4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801EF8D8 001EC6D8*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 7, 24, 24);
/*801EF8DC 001EC6DC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801EF8E0 001EC6E0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r31));
/*801EF8E4 001EC6E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF8E8 001EC6E8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801EF8EC 001EC6EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b40, context->r31));
/*801EF8F0 001EC6F0*/ PPC::Runtime::ASM::bl(fn_801E3B80);
/*801EF8F4 001EC6F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF8F8 001EC6F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EF8FC 001EC6FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EF900 001EC700*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EF904 001EC704*/ PPC::Runtime::ASM::blr();
}