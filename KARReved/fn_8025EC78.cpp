//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254CD8.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8024F488.hpp"



void fn_8025EC78(PPC::Runtime::GCContext* context)
{
/*8025EC78 0025BA78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025EC7C 0025BA7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025EC80 0025BA80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025EC84 0025BA84*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025EC88 0025BA88*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025EC8C 0025BA8C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025EC90 0025BA90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025EC94 0025BA94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025EC98 0025BA98*/ PPC::Runtime::ASM::bl(fn_80254CD8);
/*8025EC9C 0025BA9C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025ECA0 0025BAA0*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025ECA4 0025BAA4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*8025ECA8 0025BAA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025ECAC 0025BAAC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025ECB0 0025BAB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*8025ECB4 0025BAB4*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025ECB8 0025BAB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*8025ECBC 0025BABC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025ECC0 0025BAC0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025ECC4 0025BAC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
/*8025ECC8 0025BAC8*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025ECCC 0025BACC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*8025ECD0 0025BAD0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025ECD4 0025BAD4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2F2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025ECD8 0025BAD8*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8025ECDC 0025BADC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025ECE0 0025BAE0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2F28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025ECE4 0025BAE4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025ECE8 0025BAE8*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025ECEC 0025BAEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8025ECF0 0025BAF0*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025ECF4 0025BAF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025ECF8 0025BAF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025ECFC 0025BAFC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025ED00 0025BB00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025ED04 0025BB04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025ED08 0025BB08*/ PPC::Runtime::ASM::blr();
}