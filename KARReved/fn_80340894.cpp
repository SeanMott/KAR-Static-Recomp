//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802899D0.hpp"
#include "fn_8034093C.hpp"
#include "fn_80340498.hpp"



void fn_80340894(PPC::Runtime::GCContext* context)
{
/*80340894 0033D694*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80340898 0033D698*/ PPC::Runtime::ASM::mflr(context->r0);
/*8034089C 0033D69C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803408A0 0033D6A0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803408A4 0033D6A4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*803408A8 0033D6A8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803408AC 0033D6AC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*803408B0 0033D6B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803408B4 0033D6B4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803408B8 0033D6B8*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*803408BC 0033D6BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803408C0 0033D6C0*/ PPC::Runtime::ASM::bl(fn_802899D0);
/*803408C4 0033D6C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803408C8 0033D6C8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*803408CC 0033D6CC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*803408D0 0033D6D0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E44B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803408D4 0033D6D4*/ PPC::Runtime::ASM::fadds(context->f1, context->f4, context->f0);
/*803408D8 0033D6D8*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E44AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803408DC 0033D6DC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f4);
/*803408E0 0033D6E0*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f1, context->f31);
/*803408E4 0033D6E4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*803408E8 0033D6E8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*803408EC 0033D6EC*/ PPC::Runtime::ASM::bl(fn_8034093C);
/*803408F0 0033D6F0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f30);
/*803408F4 0033D6F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4488 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803408F8 0033D6F8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*803408FC 0033D6FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80340900 0033D700*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80340904 0033D704*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80340908 0033D708*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8034090C 0033D70C*/ PPC::Runtime::ASM::bne(.L_80340918);
/*80340910 0033D710*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80340914 0033D714*/ PPC::Runtime::ASM::bl(fn_80340498);
RUNTIME_PPC_JUMP_LABEL(.L_80340918, 0x80340918) //this is a jump label
/*80340918 0033D718*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8034091C 0033D71C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80340920 0033D720*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80340924 0033D724*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80340928 0033D728*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8034092C 0033D72C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80340930 0033D730*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80340934 0033D734*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80340938 0033D738*/ PPC::Runtime::ASM::blr();
}