//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CD638.hpp"



void fn_801CD71C(PPC::Runtime::GCContext* context)
{
/*801CD71C 001CA51C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801CD720 001CA520*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CD724 001CA524*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CD728 001CA528*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CD72C 001CA52C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CD730 001CA530*/ PPC::Runtime::ASM::bl(fn_801CD638);
/*801CD734 001CA534*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801CD738 001CA538*/ PPC::Runtime::ASM::beq(.L_801CD74C);
/*801CD73C 001CA53C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801CD740 001CA540*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801CD744 001CA544*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*801CD748 001CA548*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CD74C, 0x801CD74C) //this is a jump label
/*801CD74C 001CA54C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e8, context->r31));
/*801CD750 001CA550*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801CD754 001CA554*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a8, context->r31));
/*801CD758 001CA558*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*801CD75C 001CA55C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r31));
/*801CD760 001CA560*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r31));
/*801CD764 001CA564*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r31));
/*801CD768 001CA568*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fc, context->r31));
/*801CD76C 001CA56C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801CD770 001CA570*/ PPC::Runtime::ASM::fsubs(context->f1, context->f5, context->f4);
/*801CD774 001CA574*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*801CD778 001CA578*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36c, context->r31));
/*801CD77C 001CA57C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ac, context->r31));
/*801CD780 001CA580*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801CD784 001CA584*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x370, context->r31));
/*801CD788 001CA588*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3b0, context->r31));
/*801CD78C 001CA58C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*801CD790 001CA590*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x374, context->r31));
/*801CD794 001CA594*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36c, context->r31));
/*801CD798 001CA598*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c8, context->r31));
/*801CD79C 001CA59C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801CD7A0 001CA5A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36c, context->r31));
/*801CD7A4 001CA5A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x370, context->r31));
/*801CD7A8 001CA5A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3cc, context->r31));
/*801CD7AC 001CA5AC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801CD7B0 001CA5B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x370, context->r31));
/*801CD7B4 001CA5B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x374, context->r31));
/*801CD7B8 001CA5B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3d0, context->r31));
/*801CD7BC 001CA5BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801CD7C0 001CA5C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x374, context->r31));
/*801CD7C4 001CA5C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CD7C8 001CA5C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CD7CC 001CA5CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CD7D0 001CA5D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801CD7D4 001CA5D4*/ PPC::Runtime::ASM::blr();
}