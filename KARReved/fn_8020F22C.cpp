//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"
#include "fn_80219EEC.hpp"



void fn_8020F22C(PPC::Runtime::GCContext* context)
{
/*8020F22C 0020C02C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020F230 0020C030*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020F234 0020C034*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2500 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020F238 0020C038*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8020F23C 0020C03C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F240 0020C040*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8020F244 0020C044*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8020F248 0020C048*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2504 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020F24C 0020C04C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F250 0020C050*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8020F254 0020C054*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8020F258 0020C058*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*8020F25C 0020C05C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r31));
/*8020F260 0020C060*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8020F264 0020C064*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ec, context->r31));
/*8020F268 0020C068*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r31));
/*8020F26C 0020C06C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8020F270 0020C070*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f0, context->r31));
/*8020F274 0020C074*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*8020F278 0020C078*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8020F27C 0020C07C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f4, context->r31));
/*8020F280 0020C080*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8020F284 0020C084*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8020F288 0020C088*/ PPC::Runtime::ASM::beq(.L_8020F294);
/*8020F28C 0020C08C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8020F290 0020C090*/ PPC::Runtime::ASM::bl(fn_80219EEC);
RUNTIME_PPC_JUMP_LABEL(.L_8020F294, 0x8020F294) //this is a jump label
/*8020F294 0020C094*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F298 0020C098*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F29C 0020C09C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020F2A0 0020C0A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020F2A4 0020C0A4*/ PPC::Runtime::ASM::blr();
}