//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"
#include "fn_80219EEC.hpp"



void fn_8020F1D4(PPC::Runtime::GCContext* context)
{
/*8020F1D4 0020BFD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020F1D8 0020BFD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020F1DC 0020BFDC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2500 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020F1E0 0020BFE0*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*8020F1E4 0020BFE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F1E8 0020BFE8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8020F1EC 0020BFEC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8020F1F0 0020BFF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2504 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020F1F4 0020BFF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F1F8 0020BFF8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8020F1FC 0020BFFC*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8020F200 0020C000*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8020F204 0020C004*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8020F208 0020C008*/ PPC::Runtime::ASM::beq(.L_8020F214);
/*8020F20C 0020C00C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8020F210 0020C010*/ PPC::Runtime::ASM::bl(fn_80219EEC);
RUNTIME_PPC_JUMP_LABEL(.L_8020F214, 0x8020F214) //this is a jump label
/*8020F214 0020C014*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F218 0020C018*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F21C 0020C01C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020F220 0020C020*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020F224 0020C024*/ PPC::Runtime::ASM::blr();
}