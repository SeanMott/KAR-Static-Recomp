//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80311EA0(PPC::Runtime::GCContext* context)
{
/*80311EA0 0030ECA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80311EA4 0030ECA4*/ PPC::Runtime::ASM::lis(context->r7, 0x4330);
/*80311EA8 0030ECA8*/ PPC::Runtime::ASM::extsh(context->r0, context->r3);
/*80311EAC 0030ECAC*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E3E28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80311EB0 0030ECB0*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80311EB4 0030ECB4  54 00 B8 0E */ extlwi context->r0 , context->r0 , 8 , 23
/*80311EB8 0030ECB8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3E20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80311EBC 0030ECBC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80311EC0 0030ECC0*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*80311EC4 0030ECC4*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 24);
/*80311EC8 0030ECC8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80311ECC 0030ECCC*/ PPC::Runtime::ASM::srawi(context->r3, context->r3, 25);
/*80311ED0 0030ECD0*/ PPC::Runtime::ASM::extrwi(context->r9, context->r8, 1, 30);
/*80311ED4 0030ECD4*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80311ED8 0030ECD8*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 25);
/*80311EDC 0030ECDC*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80311EE0 0030ECE0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80311EE4 0030ECE4*/ PPC::Runtime::ASM::extsh(context->r0, context->r0);
/*80311EE8 0030ECE8*/ PPC::Runtime::ASM::neg(context->r8, context->r9);
/*80311EEC 0030ECEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80311EF0 0030ECF0*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80311EF4 0030ECF4*/ PPC::Runtime::ASM::or(context->r3, context->r8, context->r9);
/*80311EF8 0030ECF8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80311EFC 0030ECFC*/ PPC::Runtime::ASM::srwi(context->r3, context->r3, 31);
/*80311F00 0030ED00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80311F04 0030ED04*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f3);
/*80311F08 0030ED08*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80311F0C 0030ED0C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80311F10 0030ED10*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*80311F14 0030ED14*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f2);
/*80311F18 0030ED18*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f2);
/*80311F1C 0030ED1C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80311F20 0030ED20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80311F24 0030ED24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80311F28 0030ED28*/ PPC::Runtime::ASM::blr();
}