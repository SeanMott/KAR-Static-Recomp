//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_8018CB04.hpp"
#include "fn_80250940.hpp"
#include "fn_80257D40.hpp"
#include "fn_8024F488.hpp"



void fn_80256EC0(PPC::Runtime::GCContext* context)
{
/*80256EC0 00253CC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80256EC4 00253CC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80256EC8 00253CC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80256ECC 00253CCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80256ED0 00253CD0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80256ED4 00253CD4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80256ED8 00253CD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80256EDC 00253CDC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80256EE0 00253CE0*/ PPC::Runtime::ASM::bl(fn_80250340);
/*80256EE4 00253CE4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80256EE8 00253CE8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80256EEC 00253CEC*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*80256EF0 00253CF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r31));
/*80256EF4 00253CF4*/ PPC::Runtime::ASM::bl(fn_8018CB04);
/*80256EF8 00253CF8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80256EFC 00253CFC*/ PPC::Runtime::ASM::bl(fn_80250940);
/*80256F00 00253D00*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2DB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80256F04 00253D04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80256F08 00253D08*/ PPC::Runtime::ASM::bl(fn_80257D40);
/*80256F0C 00253D0C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2DBC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80256F10 00253D10*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80256F14 00253D14*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2DC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80256F18 00253D18*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80256F1C 00253D1C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80256F20 00253D20*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80256F24 00253D24*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*80256F28 00253D28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80256F2C 00253D2C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80256F30 00253D30*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80256F34 00253D34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80256F38 00253D38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80256F3C 00253D3C*/ PPC::Runtime::ASM::blr();
}