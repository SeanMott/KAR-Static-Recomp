//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038B964.hpp"



void fn_8038B880(PPC::Runtime::GCContext* context)
{
/*8038B880 00388680*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8038B884 00388684*/ PPC::Runtime::ASM::mflr(context->r0);
/*8038B888 00388688*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038B88C 0038868C*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*8038B890 00388690*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038B894 00388694*/ PPC::Runtime::ASM::mr(context->r6, context->r3);
/*8038B898 00388698*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f2);
/*8038B89C 0038869C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8038B8A0 003886A0*/ PPC::Runtime::ASM::fsubs(context->f4, context->f3, context->f2);
/*8038B8A4 003886A4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8038B8A8 003886A8*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x4);
/*8038B8AC 003886AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038B8B0 003886B0*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f4);
/*8038B8B4 003886B4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8038B8B8 003886B8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*8038B8BC 003886BC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8038B8C0 003886C0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f5, context->f4);
/*8038B8C4 003886C4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f4);
/*8038B8C8 003886C8*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038B8CC 003886CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8038B8D0 003886D0*/ PPC::Runtime::ASM::bl(fn_8038B964);
/*8038B8D4 003886D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038B8D8 003886D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8038B8DC 003886DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8038B8E0 003886E0*/ PPC::Runtime::ASM::blr();
}