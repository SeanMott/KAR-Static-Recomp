//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034D1F8.hpp"
#include "fn_8036F214.hpp"



void fn_8036F1B8(PPC::Runtime::GCContext* context)
{
/*8036F1B8 0036BFB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8036F1BC 0036BFBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8036F1C0 0036BFC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036F1C4 0036BFC4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8036F1C8 0036BFC8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036F1CC 0036BFCC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8036F1D0 0036BFD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r3));
/*8036F1D4 0036BFD4*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036F1D8 0036BFD8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x540, context->r3));
/*8036F1DC 0036BFDC*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8036F1E0 0036BFE0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F08DC @ Get_MemoryOffset_HighBit);
/*8036F1E4 0036BFE4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*8036F1E8 0036BFE8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804F08DC @ Get_MemoryOffset_LowBit);
/*8036F1EC 0036BFEC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8c);
/*8036F1F0 0036BFF0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8036F1F4 0036BFF4*/ PPC::Runtime::ASM::bl(fn_8038D0E8);
/*8036F1F8 0036BFF8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8036F1FC 0036BFFC*/ PPC::Runtime::ASM::bl(fn_8036F214);
/*8036F200 0036C000*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036F204 0036C004*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036F208 0036C008*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8036F20C 0036C00C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8036F210 0036C010*/ PPC::Runtime::ASM::blr();
}